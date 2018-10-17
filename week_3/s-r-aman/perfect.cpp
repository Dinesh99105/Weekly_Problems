#include <iostream>
#include <cmath>

using namespace std;

bool is_perfect_square(int number)
{
  double s_root = sqrt(number);
  return ((s_root - floor(s_root)) == 0);
}

int give_me_perfect_close_square(int to_find_of, int left = -1, int right = -1)
{

  if (left == -1 && right == -1)
  {
    left = right = to_find_of;
  }

  if (is_perfect_square(left))
  {
    return left;
  }
  if (is_perfect_square(right))
  {
    return right;
  }

  return give_me_perfect_close_square(to_find_of, left - 1, right + 1);
}

int main()
{
  int n = 0;
  cout << "Enter the number of items 👉";
  cin >> n;

  int num[n];
  for (int i = 1; i <= n; i++)
  {
    int input = 0;
    cout << "Enter the number " << i << endl;
    cin >> input;
    if (input < 0)
    {
      cout << "You Idiot!🤣🤣";
      while (input < 0)
      {
        cout << "Enter the number Again" << i << endl;
        cin >> input;
      }
    }
    num[i - 1] = input;
  }

  for (int i = 0; i < n; i++)
  {
    int square_root = give_me_perfect_close_square(num[i]);
    cout << "For the number " << num[i] << " -> " << square_root;
    if (square_root > num[i])
    {
      cout << " on the left in " << square_root - num[i] << " steps" << endl;
    }
    else
    {
      cout << " on the right in " << num[i] - square_root << " steps" << endl;
    }
  }
}