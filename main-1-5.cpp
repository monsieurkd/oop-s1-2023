#include <iostream>

extern int count_evens(int);
int main()
{
    std::cout << "number of even is: " << count_evens(15);
}