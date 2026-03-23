#include <iostream>
using namespace std;
int main()
{
  int arr[4][5] = {2, 6, 10, 14, 18, 20, 24, 27, 29, 38, 47, 52, 78, 98, 102, 108, 111, 200, 218, 320};
  int n = 4;
  int m = 5;
  int s = 0;
  int e = n * m - 1;
  int x = 47;
  while (s <= e)
  {
    int mid = (s + e) / 2;
    int row = mid / m;
    int col = mid % m;
    if (arr[row][col] == x)
    {
      cout << row;
      cout << col;
      break;
    }
    else if (arr[row][col] < x)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
}