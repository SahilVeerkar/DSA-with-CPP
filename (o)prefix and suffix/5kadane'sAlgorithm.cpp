#include <iostream>
#include <climits>
using namespace std;
int main()
{
  int arr[5] = {1, -2, 1, -3, 5};
  int prefix = 0;
  int maxi = INT_MIN;
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    prefix += arr[i];
    maxi = max(prefix, maxi);
    if (prefix < 0)
    {
      prefix = 0;
    }
  }
  cout << maxi;
}