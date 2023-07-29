#include <iostream>

extern int max_element(int[], int);
int main()
{
    int array[6] = {1, 5, 6, 0, 7, 8};
    std::cout << "biggest number is: " << max_element(array, 6);
}