#include <iostream>
using namespace std;
int main()
{
    int num, i, max, min;
    cout << "enter the number"
         << "\n";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (i * i == num)
        {
            cout << "complete square";
            break;
        }
        else if (i * i > num)
        {
            max = i;
            break;
        }
    }
    if ((max * max) - num < (num - (max - 1) * (max - 1)))
    {
        cout << max * max - num;
    }
    else
    {
        cout << (max - 1) * (max - 1) - num;
    }
}