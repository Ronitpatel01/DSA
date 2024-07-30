using namespace std;
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
vector<int> commonElements(vector<int> &a, vector<int> &b,
                           vector<int> &c)
{
  int i, j, k;
  i = j = k = 0;
  vector<int> ans;
  set<int> st;
  while (i < a.size() && j < b.size() && k < c.size())
  {
    if (a[i] == b[j] && b[j] == c[k])
    {
      st.insert(a[i]);
      i++;
      j++;
      k++;
    }
    else if (a[i] < b[j])
    {
      i++;
    }
    else if (b[j] < c[k])
    {
      j++;
    }
    else
    {
      k++;
    }
  }
  for (auto i : st)
  {
    ans.push_back(i);
  }
  return ans;
}