#include <iostream>
using namespace std;
void rotatecw(string &s)
{
  char last = s[s.size() - 1];
  int i = s.size() - 2;
  while (i >= 0)
  {
    s[i + 1] = s[i];
    i--;
  }
  s[0] = last;
}
void rotateacw(string &s)
{
  char first = s[0];
  int i = 1;
  while (i < s.size())
  {
    s[i - 1] = s[i];
    i++;
  }
  s[s.size() - 1] = first;
}
int main()
{
  string s1 = "leetcode";
  string s2 = "deleetco";
  string clockwise = s1;
  rotatecw(clockwise);
  rotatecw(clockwise);
  if (clockwise == s2)
  {
    cout << 1;
  }
  string anticlockwise = s1;
  rotateacw(anticlockwise);
  rotateacw(anticlockwise);
  if (anticlockwise == s2)
  {
    cout << 1;
  }
  return 0;
}