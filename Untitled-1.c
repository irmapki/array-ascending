#include <stdio.h>

int main() {

  int arr[] = {24, 13 , 36, 1, 17, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  int i, j, tmp;

  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
   
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  

  printf("\nArray setelah diurutkan: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}
