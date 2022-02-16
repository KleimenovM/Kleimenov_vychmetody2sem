//
// Created by kleim on 2/16/2022.
//

#ifndef INC_4_CPP_VECTOR_HELP_H
#define INC_4_CPP_VECTOR_HELP_H

#include <vector>
#include <fstream>

template<typename T>
std::ofstream& operator << ( std::ofstream& os, const std::vector<T>& vec ) {
    for ( auto i: vec )
        os << i << '\t';
    os << '\n';
    return os;
}

#endif //INC_4_CPP_VECTOR_HELP_H
