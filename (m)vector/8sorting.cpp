#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> a = {4, 2, 3, 1};
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
  }
}