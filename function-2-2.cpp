#include <math.h>
int bin_to_int(int binary_digits[], int number_of_digits){
    int total = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        total+= binary_digits[i]*pow(2, number_of_digits-i-1);
    }
    return total;
}