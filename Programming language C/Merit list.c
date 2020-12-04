#include<stdio.h>
typedef struct
{
int roll;
char name[20];
float cgpa;
}
student;

void main()
{
student s[1000];
int i,roll,name,n;
char ch;


printf("Enter Student No: ");
scanf("%d" ,&n);
for(i=0;i<n;i++)
{
    label:
        printf("For roll number: ");
       scanf ("%d",&s[i].roll);

        if(s[i].roll==0)
        {
            printf("Pless Enter the roll gaterthan 0 ,");
            goto label;
            }

        printf("Enter name: ");
        scanf("%s",s[i].name);

       label1:
        printf("Enter CGPA: ");
        scanf("%f",&s[i].cgpa);
         if(s[i].cgpa>4)
        {
            printf("Pless Enter the cgpa out of 4 ,");
            goto label1;
            }
        printf("\n");
    }

student temp;
int j;
for(i=0;i<n-1;i++)
          {
            for(j=i+1;j<n;j++)
            {
                if(s[i].cgpa<s[j].cgpa)
                {
                  temp=s[i];
                  s[i]=s[j];
                  s[j]=temp;
                }
            }
          }
printf("Roll\tName\tCGPA\n");
for(i=0;i<n;i++)
printf("%d\t%s\t%.2f\n", s[i].roll,s[i].name,s[i].cgpa);
}
