#include<stdio.h>
int isLetter(char c)//判斷字元是否為字母 
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
int longestWord(char *sentence)//印出最長單字,並回傳其位置 
{
	int max=0,position=0,max_position=0,i;
	char *start,longest[20]={};//存取最長單字 
	
	while(*sentence != '\0')
	{
		int count = 0; 
		while(isLetter(*sentence))//傳入字元符合單字(屬於字母)時 重複執行 
		{
			count++; //單字字元數 
			sentence++; //下一字元 
		}
		if(count>0)
		{
			position++;//單字數 
		}
		if(count>max)
		{
			max = count;//最長單字長度 
			max_position = position;//最長單字位置
			start = sentence - count; //最長單字字首位置 
		}
		sentence++;
	}
	for(i=0;i<max;i++)
		{
			longest[i]=*(start++);//最長單字存入陣列 
		}
	
	printf("\"%s\" is the longest word in the sentence.\n",longest);//印出結果 
	return max_position;//回傳位置 
		
}
//	return max_position;

	


int main()
{
	char input[]="There are 6 words in this sentence.";
	printf("Input: %s\n",input);	
	printf("Position of the word: %d",longestWord(input));
	
	return 0;
	
}
