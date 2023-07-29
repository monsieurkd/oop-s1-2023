#include <iostream>
void two_five_nine(int array[], int n)
{int number2 = 0;
        int number5 = 0;
        int number9 = 0;
    for (int i = 0; i < n; i++)
    {
        
        switch (array[i])
        {
        case 2:
            number2 += 1;
            break;
        case 5:
            number5 += 1;
            break;
        case 9:
            number9 += 1;
            break;
        }
    }
    std::cout << "2:" << number2 << ";5:" << number5 << ";9:" << number9 << ";" << std::endl;
}