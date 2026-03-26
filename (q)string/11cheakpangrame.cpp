#include <iostream>
#include <vector>
using namespace std;
int main()
{
  string sen = "thequickbrownfoxjumpsthelazydog";
  vector<int> alpha(26, 0);
  for (int i = 0; i < sen.size(); i++)
  {
    alpha[sen[i] - 'a'] = 1;
  }
  for (int i = 0; i < alpha.size(); i++)
  {
    if (alpha[i] == 0)
    {
      cout << "this is not pangrame";
      return 0;
    }
  }
  cout << "this is pangrame";
}