#include <iostream>
using namespace std;
void print_matrix(int array[10][10]){
    for ( int i = 0 ;i<10;++i){
        for (int x = 0; x < 10; x++)
        {
            cout << array[i][x] << " ";
        }
        cout << endl;
}
}