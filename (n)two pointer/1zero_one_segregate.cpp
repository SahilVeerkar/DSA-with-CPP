#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v = {0, 1, 0, 1, 0, 1};
  int s = 0;
  int e = v.size() - 1;
  while (s < e)
  {
    if (v[s] == 0)
    {
      s++;
    }
    else
    {
      if (v[e] == 0)
      {
        swap(v[s], v[e]);
        s++;
        e--;
      }
      else
      {
        e--;
      }
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i];
  }
}