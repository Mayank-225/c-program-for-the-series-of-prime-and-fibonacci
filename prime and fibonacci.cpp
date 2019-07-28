#include<stdio.h>
int fibo(int a)
{
	int b[a],i;
	b[0]=1;
	b[1]=1;
	for(i=2;i<=a;i++)
	b[i]=b[i-1]+b[i-2];
	printf("%d",b[a-1]);
	return 0;
}
int prime(int a)
{
	int i,b=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		b++;
	}
	if(b==2)
	return 1;
	else
	return 0;
}
int main()
{
	//int a[]={1,2,1,3,2,5,3,7,5,11,8,13,13,17,21  this is the series of alternative fibonacci and prime number 
	int n,i=2;
	scanf("%d",&n);
	if(n%2==0)
	{
		n=n/2;
		while(n)
		{
			if(prime(i))
			{i++;n--;				
			}
			else i++;
		}
		printf("%d",i-1);
	}
	else
	{
		n=n/2+1;
		fibo(n);
	}
	return 0;
}
