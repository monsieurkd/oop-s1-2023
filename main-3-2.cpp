#include <iostream>

extern int median_array(int[], int);
int main()
{
    int array[5] = {1,5,6,2,3};
    std::cout << "the median is: " << median_array(array, 5);
}