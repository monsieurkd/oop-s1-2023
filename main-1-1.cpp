#include <iostream>
using namespace std;
extern int sum_diagonal(int array[4][4]);
int main(){
int array[4][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}, {4,5,6,7} };
cout << sum_diagonal(array)     << endl;
    return 0;
}