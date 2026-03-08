
#include <iostream>
#include <utility>
using namespace std;
pair<int, int> Occ(int arr[], int n, int key)
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
  return {first, last};
}

int main()
{
  int n = 5;
  int key = 3;

  int arr[5] = {1, 2, 3, 3, 5};

  pair<int, int> ans = Occ(arr, n, key);
  cout << ans.first;
  cout << ans.second;
}