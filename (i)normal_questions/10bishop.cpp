#include <iostream>
using namespace std;
int bishop(int a, int b)
{
  int count = 0;
  count = count + min(8 - a, 8 - b);
  count = count + min(8 - a, b - 1);
  count = count + min(a - 1, 8 - b);
  count = count + min(a - 1, b - 1);
  return count;
}
int main()
{
  int a = 3;
  int b = 4;
  cout << bishop(a, b);
}