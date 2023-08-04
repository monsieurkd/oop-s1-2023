#include <cmath>
int binary_to_int(int binary_digits[], int number_of_digits){
int size = sizeof(binary_digits);
int integer = 0;
for (int i = 0; i < size; i++)
{
    integer += binary_digits[i]*pow(2, (size -i-1));
}
return integer;
}