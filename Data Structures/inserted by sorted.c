#include <stdio.h>
int main()
{
    FILE *myFile;
    myFile = fopen("d:\\somenumbers.txt", "r");
int array[100],i,n,p,inst;
printf("Input the size of array : ");
scanf("%d",&n);
    for (i = 0; i < n; i++){
        fscanf(myFile, "%d", &array[i]);

 printf("%d ", array[i]);}
   printf("\n\nInput the value to be inserted : ");
   scanf("%d",&inst);
   for(i=0;i<n;i++)
     if(inst<array[i]){
       p = i;
       break;
     }
else{
  p=i+1;
}
for(i=n;i>=p;i--)
      array[i]= array[i-1];
      array[p]=inst;
      printf("\n\nAfter Insert the list is :\n ");
   for(i=0;i<=n;i++)
      printf("%d ",array[i]);
	  printf("\n");
	  return 0;
}
