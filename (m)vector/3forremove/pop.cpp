#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> a = {1, 2, 3, 4};
  a.pop_back(); // use for last element after using pop_back vector is 1 2 3
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
  }
}