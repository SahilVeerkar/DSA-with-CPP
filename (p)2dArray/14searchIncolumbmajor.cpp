#include <iostream>
using namespace std;
int main()
{
  int arr[3][3] = {4, 8, 15, 25, 60, 18, 22, 26, 42};
  int i = 0;
  int x = 22;
  int j = 3 - 1;
  while (i < 3 && j >= 0)
  {
    if (arr[i][j] == x)
    {
      cout << i;
      cout << j;
      break;
    }
    else if (arr[i][j] < x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
}