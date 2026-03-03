#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int dec = 10;
  int ans = 0;
  ;

  int i = 0;
  while (dec != 0)
  {
    int rem = dec % 2;
    ans = (rem * pow(10, i)) + ans;
    i++;
    dec = dec / 2;
  }
  cout << ans;
}
....