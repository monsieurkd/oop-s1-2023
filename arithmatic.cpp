#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

// base x -> base 10
// arithmatic for base 10
// base 10 -> base y



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

int to_base_ten(int number){
    int i = 0;
    int total = 0;
    while(number != 0){
        
        int quotient = number / 10;
        int remainder = number % 10;
        total += remainder *pow(2, i);
        number = quotient;
        i++;
    }

    return total; 
}

int arithmetic(int a, int b, char op ){
    int c;
    switch (op)
    {
    case '+':
        to_base_ten(a);
        to_base_ten(b);
        c = a+b;
        to_base_two(c);
        
        break;
        case '-':
        to_base_ten(a);
        to_base_ten(b);
        c = a-b;
        to_base_two(c);
        
        break;
            case '*':
        to_base_ten(a);
        to_base_ten(b);
        c = a*b;
        to_base_two(c);
        
        break;
            case '/':
        to_base_ten(a);
        to_base_ten(b);
        c = a/b;
        to_base_two(c);
        
        break;
   
    }
}

int main(){
    cout << arithmetic(1000, 1000, '+') << endl; 
    cout << to_base_ten(1000) << endl;
    cout << to_base_two(16);
}
