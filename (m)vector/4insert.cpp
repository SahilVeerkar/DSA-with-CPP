#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> a = {1, 2, 3, 4};
  a.insert(a.begin() + 1, 2); // insert 2 in index 1 using insert
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
  }
}