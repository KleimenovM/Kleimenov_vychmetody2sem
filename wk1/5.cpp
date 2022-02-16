//
// Created by kleim on 2/16/2022.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "3.cpp"

template <typename T>
void printData( std::string name, std::vector<T> vec ){
    std::ofstream fout;
    fout.open(name);
    for ( auto i: vec )
        fout << i << '\n';
    fout.close();
}

int main(){
    int size = 1000;
    double min = 0, max = 10;

    UniDist ud1 (1.0);
    UniDist ud2 (2.0);
    NormDist nd ( ud1, ud2 );

    std::vector<double> uniform, gaussian;
    for ( int i = 0; i < size; i++ ){
        uniform.emplace_back( ud1.getNum( min, max ) );
        gaussian.emplace_back( nd.getNum() );
    }

    printData( "uni.txt", uniform );
    printData( "norm.txt", gaussian );

    return 0;
}
