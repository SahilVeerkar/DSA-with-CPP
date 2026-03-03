#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int bin = 1010;
  int ans = 0;
  int i = 0;
  while (bin != 0)
  {
    int dig = bin % 10;
    if (dig == 1)
    {
      ans = ans + pow(2, i);
    }
    i++;
    bin = bin / 10;
  }
  cout << ans;
}