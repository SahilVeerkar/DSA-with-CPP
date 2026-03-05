#include <iostream>
#include <math.h>
using namespace std;
int count(int num)
{
  int count = 0;
  while (num)
  {
    count++;
    num = num / 10;
  }
  return count;
}

int power(int base, int exp)
{
  int result = 1;
  for (int i = 0; i < exp; i++)
  {
    result *= base;
  }
  return result;
}

int armstrong(int num, int count)
{

  int rem;
  int ans = 0;
  int n = num;
  while (num)
  {
    rem = num % 10;
    num = num / 10;
    ans = ans + power(rem, count);
  }
  if (n == ans)
  {
    cout << "armstrong no.";
  }
  else
  {
    cout << "not armstrong no.";
  }
}
int main()
{
  int num;
  cin >> num;
  int c = count(num);
  armstrong(num, c);
}