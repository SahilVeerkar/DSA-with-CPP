// XOR Trick Tabhi Kaam Karti Hai Jab

// Numbers range me ho → 1 se n-1

// Sirf 1 duplicate ho

// Baaki saare numbers complete ho

// Matlab structure fixed hona chahiye.

#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int arr[5] = {1, 2, 3, 3, 4};
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ i;
  }
  cout << ans;
  return 0;
}