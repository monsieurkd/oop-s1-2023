#include <iostream>
extern int sum_array_elements(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
using namespace std; 
int main(){
   int  array[7] = {1,2,3,4,3,2,1};
    cout << sum_array_elements(array, 7);
    return 0;
}