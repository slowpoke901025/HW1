#include<stdio.h>
int isLetter(char c)//�P�_�r���O�_���r�� 
{
	if(c>='A' && c<='z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int longestWord(char *sentence)//�L�X�̪���r,�æ^�Ǩ��m 
{
	int max=0,position=0,max_position=0,i;
	char *start,longest[20]={};//�s���̪���r 
	
	while(*sentence != '\0')
	{
		int count = 0; 
		while(isLetter(*sentence))//�ǤJ�r���ŦX��r(�ݩ�r��)�� ���ư��� 
		{
			count++; //��r�r���� 
			sentence++; //�U�@�r�� 
		}
		if(count>0)
		{
			position++;//��r�� 
		}
		if(count>max)
		{
			max = count;//�̪���r���� 
			max_position = position;//�̪���r��m
			start = sentence - count; //�̪���r�r����m 
		}
		sentence++;
	}
	for(i=0;i<max;i++)
		{
			longest[i]=*(start++);//�̪���r�s�J�}�C 
		}
	
	printf("\"%s\" is the longest word in the sentence.\n",longest);//�L�X���G 
	return max_position;//�^�Ǧ�m 
		
}
//	return max_position;

	


int main()
{
	char input[]="There are 6 words in this sentence.";
	printf("Input: %s\n",input);	
	printf("Position of the word: %d",longestWord(input));
	
	return 0;
	
}
