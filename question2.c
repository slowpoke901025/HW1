#include<stdio.h>
int reverseNum(int num)
{
	if(num>0)
	{
		printf("%d",9-num%10);//印出當前num末位數之9補數 
		reverseNum(num/10);//呼叫函式(num去除尾數) 
	}
	else
	{
		return 0;//結束呼叫 
	}
	
	
}
int main()
{
	int num;
	
	printf("Input the number: ");
	scanf("%d",&num);
	
	printf("The reverse number: ");
	reverseNum(num);
	
	return 0;
}
