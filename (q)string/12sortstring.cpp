#include <iostream>
#include <vector>
using namespace std;
int main()
{
  string s = "bcdea";
  vector<int> count(26, 0);
  for (int i = 0; i < s.size(); i++)
  {
    count[s[i] - 'a']++;
  }
  int j = 0;
  for (int i = 0; i < 26; i++)
  {
    char c = 'a' + i;
    while (count[i])
    {
      s[j] = c;
      j++;
      count[i]--;
    }
  }
  cout << s;
}