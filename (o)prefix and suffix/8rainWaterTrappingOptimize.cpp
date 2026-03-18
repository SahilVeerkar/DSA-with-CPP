#include <iostream>
using namespace std;
int main()
{
  int arr[8] = {4, 2, 0, 5, 2, 6, 2, 3};
  int n = 8;
  int leftmax = 0;
  int rightmax = 0;
  int water = 0;
  int index = 0;
  int maxH = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxH)
    {
      maxH = arr[i];
      index = i;
    }
  }
  for (int i = 0; i < index; i++)
  {
    if (leftmax > arr[i])
    {
      water += leftmax - arr[i];
    }
    else
    {
      leftmax = arr[i];
    }
  }
  for (int i = n - 1; i > index; i--)
  {
    if (rightmax > arr[i])
    {
      water += rightmax - arr[i];
    }
    else
    {
      rightmax = arr[i];
    }
  }
  cout << water;
}