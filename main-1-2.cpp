#include <iostream>

extern double array_mean(int[], int);

int main()
{
    int array1[5] = {1, 5, 6, 8, 2};
    int array2[8] = {1, 5, 6, 8, 2, 8, 9, 2};
    int array3[7] = {1, 5, 6, 8, 2, 8, 9};

    std::cout << "the mean is: " << array_mean(array1, 5) << std::endl;
    std::cout << "the mean is: " << array_mean(array2, 8) << std::endl;
    std::cout << "the mean is: " << array_mean(array3, 7) << std::endl;
    return 0;
}