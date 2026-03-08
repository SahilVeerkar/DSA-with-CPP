#include <iostream>
using namespace std;
int binary(int arr[], int target, int n)
{
  int s = 0;
  int e = n - 1;
  int mid;
  while (s <= 0)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
}
int main()
{
  int arr[5] = {1, 3, 4, 5, 6};
  int n = 5;
  int target = 4;
  cout << "target index is :" << binary(arr, target, n);
}