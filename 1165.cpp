#include <stdio.h>

int main(void)

{

    int a[3][3]={1,3,6,7,9,11,14,15,17};

    int sum=0,i=0,j=0;                             /*$ERROR$*/

    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
        {
           if(i==j&&i!=2) sum=a[i][j]+sum;        /*$ERROR$*/	
		}    
           
	} 
        

    printf("sum=%d\n",sum);

    return 0;

} 
