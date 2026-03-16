#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> a = {1, 2, 3, 4};
  a.erase(a.begin() + 1); // after its use specific element is remove
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
  }
}