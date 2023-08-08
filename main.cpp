#include <iostream>
extern void changeValue(double*) ;
extern void printArray(double* db, int x);
extern double arrayMax(double* db[], int x);
extern double* dinamicArray(int n, double m);
 
using namespace std;
int main() {
    double number = 32.2;
    changeValue(&number);
    double array[5] = {5.4, 3,2.0,2, 4};
    double* pointer = array;
    
    printArray(pointer, 5);
   
dinamicArray(8, 9);