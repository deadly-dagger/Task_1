#include <iostream>
#include <cstdlib>

int main()
{
    srand(time(0));
    std::cout << "The random number is: " << rand() % 10000;

    return 0;
}
