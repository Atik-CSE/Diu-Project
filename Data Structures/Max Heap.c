#include <stdio.h>
  int main()
  {
  int arr[10]={0,0,0,0,0,0,0,0,0,0}, no, p,  i, c, heap_root, temp;
  printf("Input number of elements: ");
  scanf("%d", &no);
  for (p=0;p<no;p++)
    {
    printf("\nInput one values for tree : ");
    scanf("%d", &arr[p]);
    for (i = 1; i <  no; i++)
  {
  c = i;
  do
  {
  heap_root  = (c - 1) / 2;
  if  (arr[heap_root] < arr[c])
  {
  temp =  arr[heap_root];
  arr[heap_root] = arr[c];
  arr[c]  = temp;
  }
  c =  heap_root;
  }
  while (c !=  0);
  }
  printf("Heap  array : ");
  for (i = 0; i <  no; i++)
  printf("%d\t ", arr[i]);
  }
return 0;
  }
