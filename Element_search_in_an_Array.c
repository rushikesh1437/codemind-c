#include<stdio.h>
int main()
{
    int n,i,se;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    scanf ("%d",&se);
    int flag=0;
    for (i=0;i<n;i++)
    {
    if (arr[i]==se)
    {
        flag=1;
        break;
    }
    }
    if (flag==1)
    {
        printf ("True");
    }
    else
    {
        printf ("False");
    }
}