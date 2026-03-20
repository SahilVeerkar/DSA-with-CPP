#include <iostream>
using namespace std;
int main()
{
  int arr[3][4] = {2, 3, 4, 5, 0, 1, 2, 3, 1, 2, 6, 4};
  int arr1[3][4] = {3, 4, 1, 2, 2, 1, 2, 6, 4, 1, 3, 4};
  int ans[3][4];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      ans[i][j] = arr[i][j] + arr1[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << ans[i][j];
      cout << ",";
    }
  }
}