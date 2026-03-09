#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {0, 0, 0, 0, 3};
  int n = 5;
  int s = 0;
  int e = n - 1;
  int mid;
  int count = 0;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] == 0)
    {
      count = mid;
      s = mid + 1;
    }
    else if (arr[mid] >= 0)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  cout << count + 1;
}
