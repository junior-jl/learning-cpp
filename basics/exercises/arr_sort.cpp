void sort_elements(int arr[], int size) {
  // Write your code here
  int temp;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j] < arr[i])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}