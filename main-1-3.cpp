#include <iostream>

extern int num_count(int[], int, int);

int main()
{
    int array1[5] = {1, 5, 6, 8, 2};
    int array2[8] = {1, 5, 6, 8, 2, 8, 9, 2};
    int array3[7] = {1, 5, 6, 8, 2, 8, 9};

    std::cout << "the total number is: " << num_count(array1, 5, 2) << std::endl;
    std::cout << "the total number is: " << num_count(array2, 8, 2) << std::endl;
    std::cout << "the total number is: " << num_count(array3, 7, 2) << std::endl;
    return 0;
}