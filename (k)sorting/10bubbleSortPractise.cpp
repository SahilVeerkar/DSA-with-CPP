#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {4, 5, 1, 2, 6, 3};
  int n = 6;
  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j <= i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    cout << ",";
  }
}