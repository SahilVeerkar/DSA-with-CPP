#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int target = 5;
  int arr[5] = {1, 2, 2, 4, 5};
  for (int i = 0; i < n; i++)
  {
    int s = i + 1;
    int e = n - 1;
    int ans = -1;

    while (s < e)
    {
      ans = target - arr[i];
      if (arr[s] + arr[e] == ans)
      {
        cout << arr[i];
        cout << arr[s];
        cout << arr[e];
        break;
      }
      else if (arr[s] + arr[e] > ans)
      {
        e--;
      }
      else
      {
        s++;
      }
    }
  }
}