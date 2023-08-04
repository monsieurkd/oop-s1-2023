#include <iostream>
#include <string>

using namespace std;
void print_binary_str(string decimal_number ){
    int num = stoi(decimal_number);
        string to_base_two = "";
    while (num != 0)
    {
        int result = num / 2;
        int remainder = num % 2;
        num = result;
        
        
        to_base_two = to_string(remainder) + to_base_two;
    }

    cout << to_base_two << endl;
}




 