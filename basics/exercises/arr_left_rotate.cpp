void left_rotate(int arr[], int size) {
  // Write your code here
  int temp = arr[0];
  for (int i = 0; i < size; i++)
  {
    arr[i] = (i == size - 1) ? temp : arr[i + 1];
  }
}