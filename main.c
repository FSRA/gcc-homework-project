#include<stdio.h>
#include"include/insert_sort.h"

int main()
{
    int N;
    scanf("%d",&N);
    int a[N+1];
    int i;
    for(i=1;i<=N;i++)
    {scanf("%d",&a[i]);}
    insert_sort(a,N);
    printf("%d",a[1]);
    for(i=2;i<=N;i++)
    {printf(" %d",a[i]);}
    printf("\n");
    return 0;
}
