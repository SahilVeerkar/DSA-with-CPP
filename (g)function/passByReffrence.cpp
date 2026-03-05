#include <iostream>
using namespace std;
void passByReffrence(int &a)
{
  a++;
}
int main()
{
  int a = 5;
  passByReffrence(a);
  cout << a;
}