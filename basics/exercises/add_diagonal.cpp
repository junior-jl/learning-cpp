int add_diagonal(int arr[3][3], int row, int col) {
  int sum = 0;
  // Write your code here
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i == j)
      {
        sum += arr[i][j];
      }
    }
  }
  return sum;
}