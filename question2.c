#include<stdio.h>
int reverseNum(int num)
{
	if(num>0)
	{
		printf("%d",9-num%10);//�L�X��enum����Ƥ�9�ɼ� 
		reverseNum(num/10);//�I�s�禡(num�h������) 
	}
	else
	{
		return 0;//�����I�s 
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
