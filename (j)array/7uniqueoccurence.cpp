// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true

// Constraints:

// 1 <= arr.length <= 1000
// -1000 <= arr[i] <= 1000

#include <iostream>
using namespace std;
int uniqueOccurrences(int arr[], int n)
{
  int freq[2001] = {0};
  for (int i = 0; i < n; i++)
  {
    freq[arr[i] + 1000]++;
  }
  for (int i = 0; i < 2001; i++)
  {
    if (freq[i] == 0)
    {
      continue;
    }
    for (int j = i + 1; j < 2001; j++)
    {
      if (freq[i] == freq[j] && freq[j] != 0)
      {
        return -1;
      }
    }
  }
  return 1;
}

int main()
{
  int arr[10] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
  int n = 10;
  cout << uniqueOccurrences(arr, n);
}
