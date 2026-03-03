#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {1, 2, 2, 2, 3, 4};
  int arr1[4] = {2, 2, 3, 3};
  int n = 6;
  int m = 4;
  int i = 0;
  int j = 0;
  while (i < n && j < m)
  {
    if (arr[i] == arr1[j])
    {
      cout << arr[i];
      i++;
      j++;
    }
    else if (arr[i] > arr[j])
    {
      j++;
    }
    else
    {
      i++;
    }
  }
  return 0;
}