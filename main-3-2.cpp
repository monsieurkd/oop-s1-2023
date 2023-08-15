
#include <iostream>
using namespace std;
extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
extern int *reverseArray(int *numbers1,int length) ;
int main(){
   
    
int* a = readNumbers();
int* b = reverseArray(a, 10);
cout << equalsArray(a,b,10);

delete[] a,b;
}