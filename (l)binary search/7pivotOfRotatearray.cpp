#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {4, 5, 6, 1, 2};
  int n = 5;
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s < e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {

      e = mid;
    }
  }
  cout << s;
}