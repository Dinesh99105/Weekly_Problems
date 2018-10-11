#include <iostream>
using namespace std;
int main()
{
    int n;
    fflush(stdin);
    fflush(stdout);
    string *p = new string[n];

    cout << "Enter the number of words to insert --> ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout<<"\nNumber of words insert --> "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        int count = 1;  
        for (int j = i+1; j < n; j++)
        {
            if(p[i] == p[j])
            {
                count += 1;
            }
            else
            {
                count = count + 0;
            }
        }
        cout << "The Word " << p[i] << " occurs " << count << " times." << endl;
    }

    return 0;
}