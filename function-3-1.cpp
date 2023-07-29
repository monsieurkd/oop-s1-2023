#include <iostream>

extern bool is_ascending(int[], int);
bool is_fanarray(int array[], int n)
{
    if (n < 1)
        return false;
    int new_array1[30];
    int new_array2[30];

    for (int i = 0; i < n / 2; i++)
    {

        new_array1[i] = array[i];
        new_array2[i] = array[n - i-1];
        if (array[i] != array[n - i-1])
        {
            return false;
        }
    }
    if (is_ascending(new_array1, n / 2) == 1 && is_ascending(new_array2, n / 2) == 1)
    {
        return true;
    }
    return false;
}