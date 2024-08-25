#include <iostream>
using namespace std;
#include <string>
#include <vector>
int kthSmallest(vector<int> &arr, int k)
{
  int j = 0;
  while (k)
  {
    int index;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[j] > arr[i])
      {
        index = i;
      }
    }
    j++;
    swap(arr[j], arr[index]);
    k--;
  }

  return (arr[j]);
}
int main()
{
  return 0;
}