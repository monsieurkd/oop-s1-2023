#include <iostream>
using namespace std;
extern int sum_integers(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int[], int );

int main(){
int array[7] = {1,2,3,4,2,2,1};
cout << palindrome_sum(array, 7);

}