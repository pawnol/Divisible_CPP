/*
Divisible
Pawelski
3/31/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    int dividend, divisor;
    std::cout << "This program checks whether the divident is \
        divisible by the divisor.\n";
    std::cout << "What is the divident? >> ";
    std::cin >> dividend;
    std::cout << "What is the divisor? >> ";
    std::cin >> divisor;
    if (dividend % divisor == 0)
    {
        std::cout << dividend << " is divisible by " << divisor << std::endl;
    }
    else
    {
        std::cout << dividend << " is NOT divisible by " 
            << divisor << std::endl;
    }
    return 0;
}
