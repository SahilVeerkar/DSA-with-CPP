#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int s = 5;
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == s)
      {
        if (arr[i] < arr[j])
        {
          cout << arr[i];
          cout << "+";
          cout << arr[j];
          cout << ",";
        }
        else
        {
          cout << arr[j];
          cout << "+";
          cout << arr[i];
          cout << ",";
        }
      }
    }
  }
  return 0;
}