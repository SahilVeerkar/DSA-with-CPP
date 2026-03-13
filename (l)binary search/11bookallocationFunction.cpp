#include <iostream>
using namespace std;
bool book(int arr[], int n, int k, int mid)
{
  int student = 1;
  int page = 0;
  for (int i = 0; i < n; i++)
  {
    if (page + arr[i] <= mid)
    {
      page += arr[i];
    }
    else
    {
      student++;

      if (student > k || arr[i] > mid)
      {
        return false;
      }
      page = arr[i];
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
    if (book(arr, n, k, mid))
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
  int arr[4] = {12, 34, 67, 90};
  int n = 4;
  int k = 2;
  cout << count(arr, n, k);
}