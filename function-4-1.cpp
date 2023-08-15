#include <iostream>
using namespace std;
int *readNumbers() {
int  x;

int *arr = new int(10);
for (int i = 0; i < 10; i++)
{
  
    cin>>arr[i];
}
return arr;

}
void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++)
    {
        cout << i << " " << numbers[i] << "\n";
    }
    
}
int secondSmallestSum(int *numbers,int length) {
    int smallest, second_smallest = 100000000; 
    for (int i = 0; i < length; i++)
    {
        int temp_total = 0;
        for (int x = i; x < length; x++)
        {
            temp_total+= numbers[x];
            if(temp_total < smallest){
                smallest = temp_total;

            }
            else if(smallest < temp_total < second_smallest){
                second_smallest=temp_total;
            }
        }

    }
    return second_smallest;
}