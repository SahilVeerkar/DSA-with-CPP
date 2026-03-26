#include <iostream>
using namespace std;
int main()
{
  string add = "1.1.1.1";
  string ans;
  int i = 0;
  while (i < add.size())
  {
    if (add[i] == '.')
    {
      ans += "[.]";
    }
    else
    {
      ans += add[i];
    }
    i++;
  }
  cout << ans;
}