#include <iostream>
extern bool is_ascending(int[], int);
extern bool is_fanarray(int[], int);
int main()
{
    int array[7] = {1,3,5,7,5,3,1};
    std::cout << "the array is fanarray: " << is_fanarray(array, 7) << std::endl;
}