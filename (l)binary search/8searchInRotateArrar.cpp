#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {4, 5, 1, 2, 3};
  int target = 3;
  int n = 5;
  int s = 0;
  int e = n - 1;
  int mid;
  int ans = -1;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
      ans = mid;
      break;
    }
    else if (arr[0] <= arr[mid])
    {
      if (arr[0] <= target && target <= arr[mid])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else
    {
      if (arr[mid] <= target && target <= arr[e])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
  }
  cout << ans;
}