#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> a = {1, 2, 3, 4};
  cout << "index of target is : " << binary_search(a.begin(), a.end(), 2);
}