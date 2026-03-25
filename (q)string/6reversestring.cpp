#include <iostream>
using namespace std;
int main()
{
  string s = "sahil";
  int start = 0;
  int end = s.size() - 1;
  while (start < end)
  {
    swap(s[start], s[end]);
    start++, end--;
  }
  cout << s;
}