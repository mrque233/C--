#include<stdio.h>
int main()
{
	int n,m,i=0,j=0,s=0;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
		 }
	 }
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	 {
	 	 	s=s+a[i][j];
		 }
		 printf("%d\n",s);
		 s=0;
	 } 
	return 0; 
}