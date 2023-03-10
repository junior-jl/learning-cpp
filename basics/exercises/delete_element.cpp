void delete_element(int * & arr, int size, int index) {
  // Write your code here
  int *resize_array = new int[size - 1];
  for (int i = 0; i < size - 1; i++)
  {
    if (i < index)
    {
      resize_array[i] = arr[i];
    }
    else
    {
      resize_array[i] = arr[i + 1];
    }
  }
  delete[] arr;
  arr = resize_array;
}