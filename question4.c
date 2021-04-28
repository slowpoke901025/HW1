#include<stdio.h> 
int freqTrans(char *str)
{
	int i=0,j,max=0,count=0;
	char n1,n2;
	while(str[i+1]!='\0')//外圈 base
	{
			for(j=i;str[j+1]!='\0';j++)//內圈
			{
				if(str[i]==str[j]&&str[i+1]==str[j+1])//內圈值=base 
				{
					count++;//轉換次數 
				}
			}
		if(count>max)
		{
			max=count;
			n1=str[i]; //存入被轉換值 
			n2 =str[i+1];//存入轉換值 
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
