#include <iostream>
extern void print_summed(int array1[3][3], int array2[3][3]);
int main(){
int    array1[3][3] = {{1,2,3},{4,8,9},{3,4,5}};
   int     array2[3][3] = {{1,2,3},{4,8,9},{3,5,5}};
print_summed(array1, array2);
    return 0;
}