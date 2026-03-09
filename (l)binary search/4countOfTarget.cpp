
#include <iostream>
using namespace std;
int Occ(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid;
  int first = -1;
  int last = -1;

  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
      first = mid;
      e = mid - 1;
    }
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
  s = 0;
  e = n - 1;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
      last = mid;
      s = mid + 1;
    }
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    else if (key < arr[mid])
    {
      e = mid - 1;
    }
  }

  int ans = (last - first) + 1;
  return ans;
}

int main()
{
  int n = 5;
  int key = 3;

  int arr[5] = {1, 2, 3, 3, 5};

  cout << Occ(arr, n, key);
}