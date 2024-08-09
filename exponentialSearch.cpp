using namespace std;
#include <iostream>
/*Applications of Exponential Search:
Exponential Binary Search is particularly useful
for unbounded searches, where size of array is infinite.
It works better than Binary Search for bounded arrays,
 and also when the element to be searched is closer to the first element.*/
int bs(int a[], int start, int end, int find)
{
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (a[mid] == find)
    {
      return mid;
    }
    else if (find < a[mid])
    {
      end = mid - 1;
    }
    else
      start = mid + 1;
  }
  return -1;
}
int exponentialSearch(int a[], int size, int find)
{
  if (a[0] == find)
    return 0;
  int i = 1;
  while (i < size && find >= a[i])
  {
    i *= 2;
  }
  return bs(a, i / 2, min(i, (size - 1)), find);
}

int main()
{
  int arr[] = {3, 5, 6, 8, 9, 21, 23, 24, 46, 75, 86, 97};
  int n = sizeof(arr) / sizeof(int);
  int x = 3;
  int ans = exponentialSearch(arr, n, x);
  cout << ans << endl;
}