#include "Operations.h"

#include <iostream>

std::vector<int> Operations::singleBinaryAdditionCarry(int bit1, int bit2) {

    int sum, carry;

    switch (bit1) {
        case 1:
            switch (bit2) {
                case 1:
                    sum = 0;
                    carry = 1;
                    break;
                case 0:
                    sum = 1;
                    carry = 0;
                    break;
                default: {
                }
            }
            break;
        case 0:
            switch (bit2) {
                case 1:
                    sum = 1;
                    carry = 0;
                    break;
                case 0:
                    sum = 0;
                    carry = 0;
                    break;
                default: {
                }
            }
            break;
        default:
            std::cout << "error" << '\n';
    }

    std::vector<int> returnVals = {sum, carry};
    std::cout << sum << '\n';

    return returnVals;
}