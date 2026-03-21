#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> arr = {{3, 6, 4, 2}, {7, 8, 11, 5}, {9, 3, 2, 1}, {17, 8, 5, 9}};
  int row = arr.size();
  int col = arr[0].size();
  for (int i = 0; i < col; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < row; j++)
      {
        cout << arr[j][i];
        cout << ",";
      }
    }
    else
    {
      for (int j = row - 1; j >= 0; j--)
      {
        cout << arr[j][i];
        cout << ",";
      }
    }
  }
}