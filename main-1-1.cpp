#include <iostream>

extern int array_sum(int[], int);

int main()
{
    int array1[5] = {1, 5, 6, 8, 2};
    int array2[8] = {1, 5, 6, 8, 2, 8, 9, 2};
    int array3[7] = {1, 5, 6, 8, 2, 8, 9};

    std::cout << "the total number is: " << array_sum(array1, 5) << std::endl;
    std::cout << "the total number is: " << array_sum(array2, 8) << std::endl;
    std::cout << "the total number is: " << array_sum(array3, 7) << std::endl;
    return 0;
}