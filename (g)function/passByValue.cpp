#include <iostream>
using namespace std;
void passByValue(int a)
{
  a++;
}
int main()
{
  int a = 5;
  passByValue(a);
  cout << a;
}