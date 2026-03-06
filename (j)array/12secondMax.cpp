#include <iostream>
#include <climits>
using namespace std;
int secondMax(int arr[], int n)
{
  int ans = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > ans)
    {
      ans = arr[i];
    }
  }
  int sec = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (ans != arr[i])
    {
      sec = max(arr[i], sec);
    }
  }
  return sec;
}
int main()
{
  int arr[10] = {2, 40, 32, 21, 29, 39, 61, 7, 9, 10};
  int n = 10;
  cout << secondMax(arr, 10);
}
