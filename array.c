#include<stdio.h>
void main(){
    int n,num,in,c;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter 1 for insertion and 2 for deletion : ");
    scanf("%d",&c);

    if(c==1)
    {
    int a[n+1];
     printf("Enter the number : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number that is to be inserted : ");
    scanf("%d",&num);

     printf("Enter the index where the number is to be inserted : ");
     scanf("%d",&in);

     if(in>n||in<0)
     printf("Invalid index");
     else{
        for(int i=n+1;i>in;i--)
        a[i]=a[i-1];

        a[in]=num;

        for (int i = 0; i < n+1; i++)
        {
           printf("%d, ",a[i]);
        }
     }
    }
    
   
    else if(c==2)
    {
        int a[n];
         printf("Enter the number : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     printf("Enter the index of the number that is to be deleted : ");
     scanf("%d",&in);
     
     if(in<n && in>0)
     {
        for(int i=in;i<n-1;i++)
        {
        a[i]=a[i+1];
        }
        for (int i = 0; i<n-1; i++)
        {
           printf("%d, ",a[i]);
        }
     }

     else
     printf("Invalid");
    }

    else
    printf("Invalid choice");
}