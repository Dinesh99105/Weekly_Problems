using namespace std;

int main()
{
    int i = 0, j = 1, k = 0, l = 1;
    int n = 5;
    for (; i < n; i++)
    {
        for (; j <= (n - i); j++)
        {
            cout << "\t";
        }
        j = 1;
        for (; k < (2 * i + 1); k++)
        {
            cout << "*";
            cout << "\t";
        }
        k = 0;
        cout << "\n";
    }

    return 0;
}