#include<stdio.h> 
int freqTrans(char *str)
{
	int i=0,j,max=0,count=0;
	char n1,n2;
	while(str[i+1]!='\0')//�~�� base
	{
			for(j=i;str[j+1]!='\0';j++)//����
			{
				if(str[i]==str[j]&&str[i+1]==str[j+1])//�����=base 
				{
					count++;//�ഫ���� 
				}
			}
		if(count>max)
		{
			max=count;
			n1=str[i]; //�s�J�Q�ഫ�� 
			n2 =str[i+1];//�s�J�ഫ�� 
		}
		count=0;
		i++;
	}
	printf("%c->%c, Frequency: %d\n",n1,n2,max);
	
}
int main()
{
	freqTrans("zzzzababdcdczz");
	freqTrans("abcdabcdada");
	
	return 0;
}
