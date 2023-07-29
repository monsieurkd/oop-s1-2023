#include <iostream>

extern bool is_ascending(int[], int);
int main()
{
    int array[6] = {1, 5, 7, 8, 8, 9};
    std::cout << is_ascending(array, 6) << std::endl;
}