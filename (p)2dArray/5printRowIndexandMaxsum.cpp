#include <iostream>
using namespace std;
int main()
{
  int arr[3][3] = {1, 2, 3, 4, 1, 1, 2, 3, 4};
  int index = 0;
  int ans = 0;
  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
      sum = sum + arr[i][j];
    }
    ans = max(sum, ans);
    index++;
  }
  cout << ans << endl;

  cout << index;
}
