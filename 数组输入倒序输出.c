#include <stdio.h>
int main()
{
	int i,n,a[10],b[10];
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	scanf("%d",&a[i]);
	for(i = 0;i < n;i++){
		b[n-i-1]=a[i];
	}
	printf("%d",b[0]);
	for(i = 1;i < n;i++)
	printf(" %d",b[i]);
	
	return 0;
} 
