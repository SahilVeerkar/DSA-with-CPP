#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {2, 3, 5, 10, 50, 80};
  int s = 0;
  int e = s + 1;
  int target = 45;
  while (s < e)
  {
    if (arr[e] - arr[s] == target)
    {
      cout << arr[e] << "-" << arr[s];
      break;
    }
    else if (arr[e] - arr[s] < target)
    {
      e++;
    }
    else
    {
      s++;
    }
  }
}