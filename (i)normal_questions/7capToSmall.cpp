#include <iostream>
using namespace std;
char convert(char n)
{
  char ans;
  ans = n - 'a' + 'A';
  return ans;
}
int main()
{
  char n;
  cin >> n;
  cout << convert(n);
}