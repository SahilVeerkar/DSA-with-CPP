#include <iostream>
using namespace std;
int main()
{
  int arr[8] = {9, 5, 8, 12, 2, 3, 7, 4};
  int dif = 0;
  int n = 8;
  int suffix = n - 1;
  for (int i = n - 2; i >= 0; i--)
  {
    dif = max(dif, suffix - arr[i]);

    suffix = max(suffix, arr[i]);
  }
  cout << dif;
}