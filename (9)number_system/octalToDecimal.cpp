#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n = 13;
  int ans = 0;
  int i = 0;
  while (n != 0)
  {
    int rem = n % 8;
    ans = (rem * pow(10, i)) + ans;
    i++;
    n = n / 8;
  }
  cout << ans;
}