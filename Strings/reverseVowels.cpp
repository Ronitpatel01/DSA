#include <iostream>
using namespace std;
#include <string>
#include <vector>

bool isVowel(char s)
{
  static const string vowels = "aeiouAEIOU";
  return vowels.find(s) != string::npos;
}

string reverseVowels(string &s)
{
  int i = 0;
  int j = s.length() - 1;

  while (i < j)
  {
    if (isVowel(s[i]) && isVowel(s[j]))
    {
      swap(s[i], s[j]);
      i++;
      j--;
    }
    else if (isVowel(s[i]))
    {
      j--;
    }
    else if (isVowel(s[j]))
    {
      i++;
    }
    else
    {
      i++;
      j--;
    }
  }

  return s;
}

int main()
{
  string s = "leetcode";
  string ans = reverseVowels(s);
  for (auto ch : ans)
  {
    cout << ch;
  }
  return 0;
}