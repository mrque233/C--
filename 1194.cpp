#include <stdio.h>
#define MAXN 10
int search( int list[], int n, int x );
int main()
{
    int i, index, n, x;
    int a[MAXN];
    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");
    return 0;
}
int search( int list[], int n, int x )
{
	int s,count=0,*p=list,i=0;
	while(i<n)
	 {
	 	if(x==*(p+i))
	 	 {
	 	 	count++;
			s=i;break;
		 }
		i++; 
	 }
	 if(count==0) return -1;
	 else return s; 
}
