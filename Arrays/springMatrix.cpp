#include <iostream>
using namespace std;
#include <string>
#include <vector>

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  vector<int> ans;
  int firstRow = 0;
  int firstColumn = 0;
  int lastRow = n - 1;
  int lastColumn = m - 1;
  int count = 0;
  int totalElements = m * n;
  while (count < totalElements)
  {
    for (int i = firstColumn; i <= lastColumn && count < totalElements; i++)
    {
      cout << matrix[firstRow][i] << " ";
      count++;
    }
    firstRow++;
    for (int i = firstRow; i <= lastRow && count < totalElements; i++)
    {
      cout << matrix[i][lastColumn] << " ";
      count++;
    }
    lastColumn--;
    for (int i = lastColumn; i >= firstColumn && count < totalElements; i++)
    {
      cout << matrix[lastRow][i] << " ";
      count++;
    }
    lastRow--;
    for (int i = lastRow; i <= firstRow && count < totalElements; i++)
    {
      cout << matrix[i][firstColumn] << " ";
      count++;
    }
    firstColumn++;
  }
  return ans;
}
int main()
{
  vector<vector<int>> matrix;
  matrix = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}};
  vector<int> ans = spiralOrder(matrix);
  for (int print : ans)
  {
    cout << print << "";
  }

  return 0;
}