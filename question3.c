#include<stdio.h>
int primeOrNot(num)//判斷是否為質數 
{
	int j;
	
	for(j=2;j<num;j++)
	{
		if(num%j==0)
		{
			return 0;//非質數 
		}
	}
	
	return 1;//是質數 
	
	
	
}
int listSumOfPrimePairs(int k)
{
	int i;
	for(i=3;i<=k/2;i++)
	{
		if(primeOrNot(i)&&primeOrNot(k-i)) //當i與k-i皆為質數 
		{
			printf("%d = %d + %d\n",k,i,k-i);
		}
		
	}

	
}

int main()
{
	int k;
	printf("Input the number: ");
	scanf("%d",&k);
	
	if(k%2!=0||k<8)//輸入值為奇數或小於8 
	{
		printf("k must be an even number and >= 8.");
	}
	else
	{
		listSumOfPrimePairs(k);//執行函式 
	}
	
	return 0;
	
}
