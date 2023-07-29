#include <iostream>

extern int min_element(int[], int);
int main()
{
    int array[6] = {1, 5, 6, 0, 7, 8};
    std::cout << "smallest number is: " << min_element(array, 6);
}