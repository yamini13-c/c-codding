#include<stdio.h>
min(int n1,int n2)
{
	return n1>=n2?n2:n1;
}
LCM_Utility(int n1,int n2,int k)
{
	if(n1==1 || n2==1)
		return n1*n2;
	if(n1==n2)
		return n1;
	if(k<=min(n1,n2))
	{
		if(n1%k==0 && n2%k==0)
		{
			return k*LCM_Utility(n1/k,n2/k,2);
		}
		else
			return LCM_Utility(n1,n2,k+1);
	}
	else
		return n1*n2;	
}
void LCM(int p,int q)
{
	int lcm=LCM_Utility(p,q,2);
	printf("LCM of %d and %d=%d",p,q,lcm);
}
int main()
{
	int p,q;
	printf("Input first number:");
	scanf("%d",&p);
	printf("Input second number:");
	scanf("%d",&q);
	LCM(p,q);
}
