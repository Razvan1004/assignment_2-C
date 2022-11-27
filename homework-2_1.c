#include <stdio.h>

int main()
{
int n,a[100000],max1=-999999999;
scanf("%d",&n);
for( int i = 1; i <= n; i ++)
{
	scanf("%d",&a[i]);
	if( a[i] > max1) max1 = a[i];
}
printf("%d",max1);
}
