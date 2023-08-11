#include <iostream>
using namespace std;
void changeValue(double* number){
*number = 42;
cout <<  *number <<endl;
}
void printArray(double* db, int x){
    for (int i = 0; i < x; i++)
    {
        cout<<&db[i]<<endl;
    }
    
}
double arrayMax(double* db, int x){
    double max = db[0];
    for (int i = 0; i < x; i++)
    {
        
        if (max > db[i] ){
           max = db[i]; 
        }
    }
    return max;
}
double* dinamicArray(int n, double m){
    double* array= new double[n] ;
    for (int i = 0; i < n; i++)
    {
        array[i] = m;
        
    }
    
    return array;
}
