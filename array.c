

#include <stdio.h>
int main() {
 int N,i;
 printf("enter the value for N");
   scanf("%d", &N);
    int arr[N];

  printf("Enter  integers: ");
   for(i = 0; i <= N; ++i)
   {
    scanf("%d", &arr[i]);
  

  printf("Displaying integers: ");


  for( i = 0; i < N; ++i) 
     printf("%d\n", arr[i]);
  }
  return 0;
}

