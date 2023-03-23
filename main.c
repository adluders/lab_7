#include <stdio.h>

void sortArray(int arr[], int n)
{
  int temp;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int swap_count(int arr[], int n)
{
  int temp, counter = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        counter = counter + 1;
      }
    }
  }
  return counter;
}

int main()
{
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int n = sizeof(arr);

  sortArray(arr, n);

  printf("swap counts: %d\n", swap_count(arr, n));
  return 0;
}