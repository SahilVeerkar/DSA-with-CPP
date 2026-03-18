#include <iostream>
using namespace std;
int main()
{
  int arr[8] = {4, 2, 0, 5, 2, 6, 2, 3};
  int n = 8;
  int leftmax[n];
  int rightmax[n];
  leftmax[0] = 0;
  for (int i = 1; i < n; i++)
  {
    leftmax[i] = max(leftmax[i - 1], arr[i - 1]);
  }
  rightmax[n - 1] = 0;
  for (int i = n - 2; i >= 0; i--)
  {
    rightmax[i] = max(rightmax[i + 1], arr[i + 1]);
  }
  int water = 0;
  int minh = 0;
  for (int i = 0; i < n; i++)
  {
    minh = min(leftmax[i], rightmax[i]);
    if (minh - arr[i] >= 0)
    {
      water += minh - arr[i];
    }
  }
  cout << water;
}