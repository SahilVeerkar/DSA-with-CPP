#include <iostream>
using namespace std;
int main()
{
  int arr[4][5] = {2, 6, 10, 14, 18, 20, 24, 27, 29, 38, 47, 52, 78, 98, 102, 108, 111, 200, 218, 320};
  int n = 4;
  int m = 5;
  int x = 52;
  for (int i = 0; i < n; i++)
  {
    if (arr[i][0] <= x && arr[i][m - 1] >= x)
    {
      int s = 0;
      int e = m - 1;
      while (s <= e)
      {
        int mid = (s + e) / 2;
        if (arr[i][mid] == x)
        {
          cout << "row" << i << endl;
          cout << "col" << mid;
          break;
        }
        else if (arr[i][mid] < x)
        {
          s = mid + 1;
        }
        else
        {
          e = mid - 1;
        }
      }
    }
  }
}