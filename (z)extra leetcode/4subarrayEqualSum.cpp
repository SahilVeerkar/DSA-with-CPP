#include <iostream>
using namespace std;
int main()
{
  int arr[4] = {2, 1, 2, 1};
  int n = 4;
  int totalsum = 0;

  for (int i = 0; i < n; i++)
  {
    totalsum += arr[i];
  }
  int prefix = 0;
  for (int i = 0; i < n - 1; i++)
  {
    prefix += arr[i];
    int ans = totalsum - prefix;
    if (ans == prefix)
    {
      cout << "subarray with equal sum is possible";
    }
  }
}
