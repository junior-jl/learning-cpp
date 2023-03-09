double average (double marks[], int size){
  double average = 0;
  for (int i = 0; i < size; i++)
  {
    average += marks[i] / size;
  }
  // Write your code here
  return average;
}