#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0,sum1=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element-[%d],[%d]:",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	printf("The matrix is: ");
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
				sum1+=a[i][3-i-1];
			}
		}
	}
	printf("\n");
	printf("\ndisplay sum of diagonal= %d",sum);
	printf("\ndisplay sum of off diagonal= %d",sum1);
	return 0;
}
