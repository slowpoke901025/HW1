#include<stdio.h>
int primeOrNot(num)//�P�_�O�_����� 
{
	int j;
	
	for(j=2;j<num;j++)
	{
		if(num%j==0)
		{
			return 0;//�D��� 
		}
	}
	
	return 1;//�O��� 
	
	
	
}
int listSumOfPrimePairs(int k)
{
	int i;
	for(i=3;i<=k/2;i++)
	{
		if(primeOrNot(i)&&primeOrNot(k-i)) //��i�Pk-i�Ҭ���� 
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
	
	if(k%2!=0||k<8)//��J�Ȭ��_�ƩΤp��8 
	{
		printf("k must be an even number and >= 8.");
	}
	else
	{
		listSumOfPrimePairs(k);//����禡 
	}
	
	return 0;
	
}
