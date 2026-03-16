#include <iostream>
using namespace std;
int main()
{
  int arr[4] = {4, 3, 7, 1};
  int n = 4;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << arr[k];
      }
      cout << ",";
    }
    cout << endl;
  }
}