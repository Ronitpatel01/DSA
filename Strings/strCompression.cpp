#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <bits/stdc++.h>
class Solution
{
public:
   int compress(vector<char> &s)
   {
      int count = 1, index = 0;
      char prev = s[0];
      for (int i = 1; i < s.size(); i++)
      {
         if (prev == s[i])
         {
            count++;
         }
         else
         {
            s[index++] = prev;
            if (count > 1)
            {
               int start = index;
               while (count)
               {
                  s[index++] = count % 10 + '0';
                  count /= 10;
               }
               reverse(s.begin() + start, s.begin() + index - 1);
            }
            prev = s[i];
            count = 1;
         }
      }
      s[index++] = prev;
      if (count > 1)
      {
         int start = index;
         while (count)
         {
            s[index++] = count % 10 + '0';
            count /= 10;
         }
         reverse(s.begin() + start, s.begin() + index);
      }
      return index;
   }
};
int main()
{
   return 0;
}