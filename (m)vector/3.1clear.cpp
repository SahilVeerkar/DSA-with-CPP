#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> a = {1, 2, 3, 4};
  a.clear(); // all element is remove after using clear
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
  }
}