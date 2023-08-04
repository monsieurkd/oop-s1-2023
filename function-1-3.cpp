#include <iostream>
using namespace std;
void count_digits(int array[4][4])
{
    int number_0 = 0;
    int number_1 = 0;
    int number_2 = 0;
    int number_3 = 0;

    int number_4 = 0;
    int number_5 = 0;
    int number_6 = 0;
    int number_7 = 0;
    int number_8 = 0;
    int number_9 = 0;
    for (int x = 0; x < 4; x++)
    {
        for (int i = 0; i < 4; i++)
        {
            switch (array[x][i])
            {
            case 0:
                number_0 += 1;
                break;
            case 1:
                number_1 += 1;
                break;
            case 2:
                number_2 += 1;
                break;
            case 3:
                number_3 += 1;
                break;
            case 4:
                number_4 += 1;
                break;
            case 5:
                number_5 += 1;
                break;
            case 6:
                number_6 += 1;
                break;
            case 7:
                number_7 += 1;
                break;
            case 8:
                number_8 += 1;
                break;
            case 9:
                number_9 += 1;
                break;
            default:
                
                break;
            }
        }

    }
cout << "0:" << number_0  << ";1:" << number_1 << ";2:" << number_2  <<";3:" << number_3  <<";4:" << number_4  <<";5:" << number_5  <<";6:" << number_6  <<";7:" << number_7  <<";8:" << number_8  << ";9:" << number_9 <<";" <<endl;
}