#include <iostream>
extern void print_scaled(int array[3][3], int scale);
int main(){
 int   array[3][3] = {{1,2,3},{4,8,9},{2,4,5}};
print_scaled(array, 3);
    return 0;
}