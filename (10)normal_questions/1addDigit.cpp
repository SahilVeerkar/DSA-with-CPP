// 258. Add Digits (leetcode question)

// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:

// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2
// Since 2 has only one digit, return it.
// Example 2:

// Input: num = 0
// Output: 0

// Constraints:

// 0 <= num <= 231 - 1
#include <iostream>
using namespace std;
int main()
{
  int rem;
  int n = 55;
  while (n > 9)
  {
    int ans = 0;
    while (n != 0)
    {
      rem = n % 10;
      ans = rem + ans;
      n = n / 10;
    }
    n = ans;
  }
  cout << n;
}