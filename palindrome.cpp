
#include <iostream>
#include <string>
using namespace std;

bool is_string_palindrome(string str)
{
    int len = str.length();
    int back = len - 1;
    for(int i = 0; i < len; i++)
    {
      if(str[i] != str[back])
      {
        return false;
      }
      back--;
    }
    return true;
}

int main()
{
  string str;
  cout << "Enter something: ";
  cin >> str;
  bool x = is_string_palindrome(str);

  if(x == false)
    cout << "Not a palindrome :(" << endl;
  else
    cout << "Yay! A palindrome :)" << endl;

  return 0;
}
