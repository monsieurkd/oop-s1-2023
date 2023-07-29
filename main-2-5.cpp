#include <iostream>

extern bool is_descending(int[], int);
int main()
{
    int array[6] = {9,8,7,6,6,5};
    std::cout << is_descending(array, 6) << std::endl;
}