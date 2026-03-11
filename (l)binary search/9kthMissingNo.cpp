// 1539. Kth Missing Positive Number

// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

// Example 1:

// Input: arr = [2,3,4,7,11], k = 5
// Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
// Example 2:

// Input: arr = [1,2,3,4], k = 2
// Output: 6
// Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.

// Constraints:

// 1 <= arr.length <= 1000
// 1 <= arr[i] <= 1000
// 1 <= k <= 1000
// arr[i] < arr[j] for 1 <= i < j <= arr.length

#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {2, 3, 5, 6, 7};
  int n = 5;
  int ans = 5;
  int s = 0;
  int e = n - 1;
  int k = 4;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] - mid - 1 >= k)
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  cout << ans + k;
}
