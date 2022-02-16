#include <iostream>
#include <fstream>

#include <random>
#include <ctime>

#include <deque>
#include <vector>
#include <functional>


template <typename T>
struct Pair{
    T a, b;

    Pair( T a, T b ): a(a), b(b) {};
};


class Monkey{
private:
    std::mt19937 gen;
    int alphabetSize;
public:
    explicit Monkey( int size ): alphabetSize(size) {
        gen.seed(time(nullptr));
    }

    int nextSym(){
        return static_cast<int>(gen() / static_cast<double>( std::mt19937::max()) * alphabetSize );
    }
};

class Transpositions{
private:
    int alphabetSize;
    int wordLength;
public:
    explicit Transpositions( int aS, int wL ): alphabetSize(aS), wordLength(wL) {};

    int trIndex( std::deque<int>& tr ) const {
        int mlt = 1;
        int res = 0;
        for (int i : tr){
            res += i * mlt;
            mlt *= alphabetSize;
        }
        return res;
    }

    auto getAlphabetSize() const{
        return alphabetSize;
    }

    auto getWordLength() const{
        return wordLength;
    }

    auto maxNum() const {
        return static_cast<int>( std::pow(alphabetSize, wordLength));
    }
};

template <typename W>
void printWord(  W const &d ){
    for ( auto &i : d )
        std::cout << i << ' ';
    std::cout << '\n';
}

template <typename T>
std::vector<T> makeSecondVector ( std::vector<Pair<T>> const &data ){
    std::vector<T> res;
    for ( auto &i: data )
        res.template emplace_back( i.b );
    res.shrink_to_fit();
    return res;
}


template <typename T>
std::vector<T> oneIteration ( Transpositions &transpositions, Monkey &monkey ){
    std::deque<int> word ( transpositions.getWordLength(), -1);
    std::vector<int> combinations;
    std::vector<Pair<int>> data;

    int counter = 1;

    while ( combinations.size() < transpositions.maxNum() ){
        word.pop_front();
        word.push_back( monkey.nextSym() );
        if ( word.front() == -1 ){
            counter++;
            continue;
        }

        auto index = transpositions.trIndex( word );

        if ( std::count( combinations.begin(), combinations.end(), index ) == 0 ) {
            data.emplace_back(Pair(index, counter));
            combinations.emplace_back( index );
        }
        counter++;
    }

    auto comp_func = [&]( Pair<int> const &p1, Pair<int> const &p2 ) {return p1.a < p2.a; };
    std::sort(data.begin(), data.end(), comp_func);
    return makeSecondVector( data );
}


template <typename T>
void printData( std::string name, std::vector<T> &vec ){
    std::ofstream outStream;
    outStream.open(name);
    for ( auto& i: vec ) {
        for ( auto &j: i ) {
            outStream << j << '\t';
        }
        outStream << '\n';
    }
    outStream.close();
}


int main() {
    int iterationQ = 1000;

    int alphabetSize = 3;
    int wordLength = 3;

    Transpositions transpositions( alphabetSize, wordLength );
    Monkey monkey ( alphabetSize );

    std::vector<std::vector<int>> data;

    for ( int i = 0; i < iterationQ; i++ ){
        auto iterationRes = oneIteration<int> ( transpositions, monkey );
        data.emplace_back( iterationRes );
    }

    printData("3x3.txt", data );

    return 0;
}


