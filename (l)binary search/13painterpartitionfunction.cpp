#include <iostream>
using namespace std;
bool painter(int arr[], int n, int mid, int k)
{
  int painter = 1;
  int wall = 0;
  for (int i = 0; i < n; i++)
  {
    if (wall + arr[i] <= mid)
    {
      wall += arr[i];
    }
    else
    {
      painter++;
      if (painter > k || arr[i] > mid)
      {
        return false;
      }
      wall = arr[i];
    }
  }
  return true;
}
int count(int arr[], int n, int k)
{
  int s = 0;
  int e = 0;
  int ans = -1;
  int mid;
  for (int i = 0; i < n; i++)
  {
    s = max(s, arr[i]);
    e += arr[i];
  }
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (painter(arr, n, mid, k))
    {
      e = mid - 1;
      ans = mid;
    }
    else
    {
      s = mid + 1;
    }
  }
  return ans;
}
int main()
{
  int arr[5] = {5, 10, 30, 20, 15};
  int n = 5;
  int k = 3;
  cout << count(arr, n, k);
}