#include<stdio.h>
#include<string.h>
#define MAX 100
void reverse(char *a)
{
	FILE *fp = fopen(a,"a+");
	if(fp==NULL)
	{
		printf("Unable to open file\n");
		return;
	}
	char b[100];
	int c[MAX],s=0,d=0,l;
	fprintf(fp,"\n");
	rewind(fp);
	while(!feof(fp))
	{
		fgets(b,sizeof(b),fp);
		l=strlen(b);
		s += l;
		c[MAX]=s;
	}
	rewind(fp);
	d-=l;
	while(d>=0)
	{
		fseek(fp, c[MAX], 0);
		fgets(b,size(b),fp);
		printf("%s",b);
		c[MAX]--;
	}
}
int main()
{
	char a[]="file1.txt";
	reverse(a);
	return 0;	
}
