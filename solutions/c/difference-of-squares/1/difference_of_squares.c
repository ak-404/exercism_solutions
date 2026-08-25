#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) {
    // sum of squares of N natural numbers : (N * (N + 1) * (2N + 1)) / 6
    return (number * (number + 1) * (2 * number + 1)) / 6;
}

unsigned int square_of_sum(unsigned int number) {
    // sum of N natural numbers : (N * (N + 1)) / 2
    int sum_of_numbers = (number * (number + 1)) / 2;
    return sum_of_numbers * sum_of_numbers;
}

unsigned int difference_of_squares(unsigned int number) {
    // square_of_sum > sum_of_squares (in all the cases where number > 1)
    return square_of_sum(number) - sum_of_squares(number);
}
