#include "num.hpp"
#include "rat.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

std::string generate_n(int digits)
{
    std::string n = "";
    std::vector<std::string> digit_list = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    int random_digit;
    for(int i = 0; i < digits; i++)
    {
        if(i == 0)
        {
            random_digit = rand() % 9 + 1;
            n += digit_list[random_digit];
        }
        else
        {
            random_digit = rand() % 10;
            if(i == digits-1 && random_digit % 2 == 0)
            {
                random_digit += 1;
            }
            n += digit_list[random_digit];
        }
    }
    return n;
}

int main() 
{
    std::string prime = generate_n(999);
    std::cout << prime << std::endl << std::endl;
}