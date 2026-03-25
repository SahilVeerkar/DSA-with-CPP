#include <iostream>
using namespace std;
int main()
{
  string s = "namak";

  int start = 0;
  int end = s.size() - 1;
  while (start < end)
  {
    if (s[start] != s[end])
    {
      cout << "this is not pallindrome";
      return 0;
    }
    start++, end--;
  }
  cout << "this is pallindrome";
}