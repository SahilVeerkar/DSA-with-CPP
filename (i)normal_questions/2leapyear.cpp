#include <iostream>
using namespace std;
int main()
{
  int year;
  cout << "enter the year :";
  cin >> year;
  if (year % 400 == 0)
  {
    cout << "this is leap year";
  }
  else if (year % 4 == 0 && year % 100 != 0)
  {
    cout << "this is leap year";
  }
  else
  {
    cout << "this is not leap year";
  }
  cout << endl;
  return 0;
}