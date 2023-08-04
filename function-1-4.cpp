#include <iostream>
using namespace std;
void print_scaled(int array[3][3], int scale){
    for (int t = 0;t < 3;t++){
        for (int i = 0; i < 3; i++)
        {
            array[t][i] *= scale;
            cout << array[t][i] << " ";
        }
        cout << endl;
        
    }
}