// Написать C++ программу, представляющую данные выборки распределения из #1, #2, #3
// в виде гистограммы с заданным набором бакетов.

#include <iostream>
#include <vector>
#include <functional>

#include "3.cpp"
#include "vector_help.h"


template <typename T>
std::vector<T> get_uni_dist( int size, T min, T max ) {
    std::vector<T> res;
    UniDist dist(1.0);
    for ( int i = 0; i < size; i++ ){
        res.template emplace_back( dist.getNum( min, max ) );
    }
    res.shrink_to_fit();
    return res;
}


template <typename T>
std::vector<T> get_norm_dist( int size, T a, T b ){
    std::vector<T> res;
    UniDist ud1 (1.0);
    UniDist ud2 (0.0);
    NormDist dist ( ud1, ud2 );
    for ( int i = 0; i < size; i++ ){
        res.template emplace_back( a + b * dist.getNum() );
    }
    res.shrink_to_fit();
    return res;
}

template <typename T>
std::vector<int> bin_division( std::vector<T> &a, int bin_num ){
    std::sort(a.begin(), a.end());

    auto min = a.at(0);
    auto max = a.at(a.size() - 1);

    double shift = ( max - min ) / static_cast<double>( bin_num );
    std::vector vec(bin_num, 0);

    int bin = 0;
    for ( double i : a ) {
        if ( i <= min + shift * ( bin + 1 ) )
            vec.at( bin ) ++;
        else {
            bin++;
            if ( bin > vec.size() - 1 )
                continue;
            vec.at( bin ) ++;
        }
    }
    return vec;
}


int main(){
    int size = 1000;

    double min = 0.0, max = 10.0;
    auto a = get_uni_dist( size, min, max );

    double expect = 0.0, sigma = 4;
    auto b = get_norm_dist( size, expect, sigma );

    int bin_num = 10;
    auto vec1 = bin_division( a, bin_num );
    auto vec2 = bin_division( b, bin_num );

    // std::cout << vec1;

    for ( int i = 0; i < bin_num; i++ )
        std::cout << vec1.at(i) << '\t';
    std::cout << std::endl;

    for ( int i = 0; i < bin_num; i++ )
        std::cout << vec2.at(i) << '\t';
    std::cout << std::endl;

    return 0;
}
