#include <iostream>
#include <string>
using namespace std;

int fib(int n)
{
  // base case
  if(n == 0 || n == 1)
  {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  int entry;
  while(1)
  {
    cout << "Enter nth number:";
    cin >> entry;
    cout << "ANSWER: " << fib(entry) << endl;
  }

  return 0;
}
