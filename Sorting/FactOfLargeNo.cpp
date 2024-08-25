#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
vector<int> factorial(int N)
{
  vector<int> ans;
  int j = 0;
  ans.push_back(1);
  int carry = 0;
  for (int i = 2; i < N; i++)
  {
    int num = ans[j] * i + carry;
    ans.push_back(num % 10);
    carry = num / 10;
    j++;
  }
  while (carry)
  {
    ans.push_back(carry % 10);
    carry = carry / 10;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int main()
{
  vector<int> arr = factorial(5);
  for (int e : arr)
  {
    cout << e << " ";
  }
  return 0;
}