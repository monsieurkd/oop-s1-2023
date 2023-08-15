#include <iostream>
using namespace std;
int *readNumbers()
{
    int x;

    int *arr = new int(10);
    for (int i = 0; i < 10; i++)
    {
        
        cin >> arr[i];
    }
    return arr;
}
void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << i << " " << numbers[i] << "\n";
    }
}

void hexDigits(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        switch (numbers[i])
        {
        case 1:
            cout << i + 1 << " " << numbers[i] << " 1\n";
            break;
        case 2:
            cout << i + 1 << " " << numbers[i] << " 2\n";
            break;
        case 3:
            cout << i + 1 << " " << numbers[i] << " 3\n";
            break;
        case 4:
            cout << i + 1 << " " << numbers[i] << " 4\n";
            break;
        case 5:
            cout << i + 1 << " " << numbers[i] << " 5\n";
            break;
        case 6:
            cout << i + 1 << " " << numbers[i] << " 6\n";
            break;
        case 7:
            cout << i + 1 << " " << numbers[i] << " 7\n";
            break;
        case 8:
            cout << i + 1 << " " << numbers[i] << " 8\n";
            break;
        case 9:
            cout << i + 1 << " " << numbers[i] << " 9\n";
            break;
        case 10:
            cout << i + 1 << " " << numbers[i] << " A\n";
            break;
        case 11:
            cout << i + 1 << " " << numbers[i] << " B\n";
            break;
        case 12:
            cout << i + 1 << " " << numbers[i] << " C\n";
            break;
        case 13:
            cout << i + 1 << " " << numbers[i] << " D\n";
            break;
        case 14:
            cout << i + 1 << " " << numbers[i] << " E\n";
            break;
        case 15:
            cout << i+1 << " "<< numbers[i] <<" F\n";
            break;
        default:
            break;
        }
    }
}