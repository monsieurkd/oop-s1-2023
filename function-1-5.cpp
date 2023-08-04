#include <iostream>
using namespace std;
void print_summed(int array1[3][3],int array2[3][3]){
    for (int t = 0;t < 3;t++){
        for (int i = 0; i < 3; i++)
        {
            array1[t][i] += array2[t][i];
            cout << array1[t][i] << " ";
        }
        cout << endl;
        
    }
}