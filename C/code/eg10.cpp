#include<stdio.h>
#include <tchar.h>
#include<string.h>
main()
{
    int n=5,i,j,k,t;
    t=0;
    for(i=1;i<=n;i=i+1)
    for(j=1;j<=n;j=j+1)
    for(k=1;k<=n;k=k+1)
    if((j<j)and (j<k))
    {
        t=t+1;
        printf(i,j,k);
    }
    printf(_T('total=t'),t);
}