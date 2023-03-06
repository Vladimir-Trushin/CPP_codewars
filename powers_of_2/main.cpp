/*
DESCRIPTION:

Complete the function that takes a non-negative
integer n as input, and returns a list of all the
powers of 2 with the exponent ranging from 0 to n ( inclusive ).

Examples:

n = 0  ==> [1]        # [2^0]
n = 1  ==> [1, 2]     # [2^0, 2^1]
n = 2  ==> [1, 2, 4]  # [2^0, 2^1, 2^2]
*/


#include <vector>
#include <cstdint>
#include <string>
#include <iostream>


std::vector<uint64_t> powers_of_two(int n);
void print_vec(std::vector<uint64_t> vec);

int main()
{
    print_vec(powers_of_two(0));
    print_vec(powers_of_two(1));
    print_vec(powers_of_two(2));
    print_vec(powers_of_two(3));
    print_vec(powers_of_two(4));
    print_vec(powers_of_two(5));

    return 0;
}

////---------------------------------------------------
//
void print_vec(std::vector<uint64_t> vec)
{
    for (const uint64_t num : vec)
    {
        std::cout << num << " ";
    }

    std::cout << std::endl;
}


////---------------------------------------------------
//
std::vector<uint64_t> powers_of_two(int n)
{
    std::vector<uint64_t> vec;
    uint64_t pow_2 = 1;

    for (size_t i = 0; i <= n; i++)
    {
        vec.push_back(pow_2);

        pow_2 <<= 1;
    }

    return vec;
}