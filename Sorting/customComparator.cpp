// STL sorting function
using namespace std;
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
void print(vector<int> &arr)
{
  for (int a : arr)
  {
    cout << a << " ";
  }
  cout << endl;
}
bool comp(int &a, int &b)
{
  // return a < b; increasing order sorting
  return a > b; // decreasing order sorting
}
int main()
{
  vector<int> arr = {42, 6534, 14, 63, 51, 58, 71, 645};
  print(arr);
  sort(arr.begin(), arr.end(), comp);
  print(arr);
}