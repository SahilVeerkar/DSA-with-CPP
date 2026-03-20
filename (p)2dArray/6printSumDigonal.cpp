#include <iostream>
using namespace std;
int main()
{
  int arr[3][3] = {1, 2, 3, 4, 1, 1, 2, 3, 4};
  int row = 3;
  int col = 3;
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = col - i - 1; j > col - i - 2; j--)
    {
      sum = sum + arr[i][j];
    }
  }
  cout << sum;
}