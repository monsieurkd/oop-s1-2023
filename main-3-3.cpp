#include <iostream>
extern int num_count(int[], int , int );
extern double weighted_average(int[] , int );
int main()
{
    int array[6] = {1,1,4,1,2,3};
    std::cout << "weight is: " << weighted_average(array, 6);
}