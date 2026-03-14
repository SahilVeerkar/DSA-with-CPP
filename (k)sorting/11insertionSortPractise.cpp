#include <iostream>
using namespace std;
int main()
{
  int arr[7] = {9, 2, 7, 8, 1, 3, 4};
  int n = 7;
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (arr[j - 1] > arr[j])
      {
        swap(arr[j - 1], arr[j]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    cout << ",";
  }
}