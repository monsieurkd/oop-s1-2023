
#include <iostream>
using namespace std;
extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;
extern int secondSmallestSum(int *numbers,int length) ;
int main(){
    int* a = readNumbers();
    cout << secondSmallestSum(a, 10);
    delete[] a;
}