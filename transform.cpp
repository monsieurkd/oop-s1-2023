#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string to_base_two(int number)
{
    // loop through the number
    string to_base_two = "";
    while (number != 0)
    {
        int result = number / 2;
        int remainder = number % 2;
        number = result;
        
        
        to_base_two = to_string(remainder) + to_base_two;
    }

    return to_base_two;
}



int main()
{
    
    cout << to_base_two(12) << endl; 
    
    return 0;
}

