#include <iostream>

extern int sum_two_array(int[], int[], int);

int main()
{
    int array1[5] = {1, 5, 6, 8, 2};
    int array2[5] = {8, 2, 8, 9, 2};

    std::cout << "the total number is: " << sum_two_array(array1, array2, 5) << std::endl;

    return 0;
}