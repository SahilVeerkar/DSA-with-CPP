#include <iostream>
#include <vector>
using namespace std;
int main()
{
  string s = "is2 sentence4 this1 a3";
  vector<string> ans(10);
  string temp;
  int count = 0;
  int i = 0;
  while (i < s.size())
  {
    if (s[i] == ' ')
    {
      int pos = temp[temp.size() - 1] - '0';
      temp.pop_back();
      ans[pos] = temp;
      temp.clear();
      count++;
    }
    else
    {
      temp += s[i];
    }
    i++;
  }
  int pos = temp[temp.size() - 1] - '0';
  temp.pop_back();
  ans[pos] = temp;
  temp.clear();
  count++;
  for (int i = 0; i <= count; i++)
  {
    temp += ans[i];
    temp += " ";
  }

  int n = temp.size();
  cout << temp;
}