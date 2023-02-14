#include<stdio.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		
			if( a[i]>a[j]){
			int x=a[i];
			a[i]=a[j];
			a[j]=x;}
		}
	}printf("%d",a[n-1]);
}