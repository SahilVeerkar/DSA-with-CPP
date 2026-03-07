#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {3, 1, 5, 2, 8};
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j > i; j--)
    {
      if (arr[j] > arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
}