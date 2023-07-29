#include <iostream>

extern double sum_even(double[], int);
int main()
{
    double array[6] = {1,4,5,6,7,7};
    std::cout << "sum of even position number is: " << sum_even(array, 6);
}
