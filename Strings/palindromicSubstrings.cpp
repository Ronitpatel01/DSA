#include <iostream>
using namespace std;
#include <string>
#include <vector>f
int expand(string s, int i, int j)
{
  int count = 0;
  while (i >= 0 && j < s.length() && s[i] == s[j])
  {
    count++;
    i--;
    j++;
  }
  return count;
}

int countSubstrings(string s)
{
  unsigned int totalCount = 0;
  for (int center = 0; center < s.length(); center++)
  {
    // ODD
    int ansOdd = expand(s, center, center);

    // EVEN
    int ansEven = expand(s, center, center + 1);

    totalCount += ansOdd + ansEven;
  }
  return totalCount;
}

int main()
{
  int print = countSubstrings("aaa");
  cout << print << endl;
  return 0;
}