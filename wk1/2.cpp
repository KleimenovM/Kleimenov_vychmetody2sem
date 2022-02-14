#include <iostream>
#include <random>
#include <ctime>

int main() {
    std::mt19937 gen;
    gen.seed(time(0));
    int max_num;
    std::cin >> max_num;


    for ( int i = 0; i < 40; i++ ){
        std::cout << gen() / static_cast<double>(gen.max()) * max_num + 1 << std::endl;
    }
    return 0;
}