#include <iostream>
#include <chrono>
#include "Operations.h"

std::pair<int, int> input() {

    std::pair<int, int> bits;

    std::cout << "Augend: ";
    std::cin >> bits.first;
    std::cout << "Addend: ";
    std::cin >> bits.second;

    return bits;
}

int main() {

    std::pair<int, int> bits = input();
    int bit1 = bits.first;
    int bit2 = bits.second;

    auto t1 = std::chrono::high_resolution_clock::now();

    Operations::singleBinaryAdditionCarry(bit1, bit2);

    auto t2 = std::chrono::high_resolution_clock::now();
    std::cout << "test function took " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()
              << " milliseconds\n";
}


/*
for(int i=0; i < 5000000; ++i)
{
    int v1 = rand() % 2;
    int v2 = rand() % 2;
    Operations::singleBinaryAdditionCarry(v1, v2);
} */