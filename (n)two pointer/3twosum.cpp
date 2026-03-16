#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {2, 7, 11, 15, 27};
  int n = 5;
  int s = 0;
  int e = n - 1;
  int target = 22;
  while (s < e)
  {
    if (arr[s] + arr[e] == target)
    {
      cout << arr[s];
      cout << "+";
      cout << arr[e];
      break;
    }
    else if (arr[s] + arr[e] < target)
    {
      s++;
    }
    else
    {
      e--;
    }
  }
}