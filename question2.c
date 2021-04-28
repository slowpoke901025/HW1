#include<stdio.h>
int reverseNum(int num)
{
	if(num>0)
	{
		printf("%d",9-num%10);//讽玡numソ计ぇ9干计 
		reverseNum(num/10);//㊣ㄧΑ(num埃Ю计) 
	}
	else
	{
		return 0;//挡㊣ 
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
