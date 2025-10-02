#include<stdio.h>
void divide(int a[],int l,int u)
{
    int m;
    if (l==u)
        return a[l];
        else
        {
            m=(l+u)/2;
            divide(a,l,m);
            divide(a,m+1,u);
        }
}
