#include <iostream>
#include <random>
#include <ctime>

template <typename T>
class UniDist{
private:
    std::mt19937 gen;
    T genMax = gen.max();

public:
    explicit UniDist ( T seed ){
        gen.seed(seed);
    }

    T getNum( T min, T max ){
        return gen() / static_cast<double>( genMax ) * ( max - min ) + min;
    }
};

template <typename T>
class NormDist{
private:
    UniDist<T> ud1;
    UniDist<T> ud2;
    T min = -1;
    T max = 1;

    T getS( T val1, T val2 ){
        T s = val1 * val1 + val2 * val2;
        return s;
    }

    T getNorm(){
        T s = 0.0;
        T x, y;
        bool b = true;
        while ( b ){
            x = ud1.getNum( min, max );
            y = ud2.getNum( min, max );
            s = getS( x, y );
            if ( s == 0 or s > 1 )
                continue;
            else
                b = false;
        }

        return x * std::sqrt( -2 * std::log( s ) / s );
    }

public:
    NormDist(UniDist<T> ud1, UniDist<T> ud2) : ud1(ud1), ud2(ud2) {};

    T getNum(){
        return getNorm();
    }
};


int new_main() {
    UniDist<double> ud1 (1);
    UniDist<double> ud2 (2);

    NormDist<double> normDist(ud1, ud2);

    double a, b;
    std::cin >> a >> b;

    int N;
    std::cin >> N;

    for ( int i = 0; i < N; i++ ){
        std::cout << a + b * normDist.getNum() << '\n';
    }

    return 0;
}