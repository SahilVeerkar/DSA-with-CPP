#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> arr = {
      {1, 2, 3, 4, 5, 6},
      {7, 8, 9, 10, 11, 12},
      {13, 14, 15, 16, 17, 18},
      {19, 20, 21, 22, 23, 24},
      {25, 26, 27, 28, 29, 30},
      {31, 32, 33, 34, 35, 36}};
  int top = 0;
  int right = 5;
  int bottom = 5;
  int left = 0;
  while (top <= bottom && left <= right)
  {
    for (int i = left; i <= right; i++)
    {
      cout << arr[top][i] << endl;
    }
    top++;
    for (int j = top; j <= bottom; j++)
    {
      cout << arr[j][right] << endl;
    }
    right--;
    for (int k = right; k >= left; k--)
    {
      cout << arr[bottom][k] << endl;
    }
    bottom--;
    for (int l = bottom; l >= top; l--)
    {
      cout << arr[l][left] << endl;
    }
    left++;
  }
}