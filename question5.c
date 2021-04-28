#include<stdio.h>
#define size 10
int printSeat(int *seating)//印出當前座位資訊 
{
	int i=0;
	puts("*seating*");
	for(i=0;i<size;i++)
	{
		printf("%d ",seating[i]);
	}
	puts("\n**********");
}
int bubble(int *seating)//排序 
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(seating[j]==0)//跳過0 
			{
				continue;
			}
			int k=j+1;
			while(seating[k]==0)//找到非0項 
			{
				k++;
			}
			if(seating[j]>seating[k] && k<size)//交換 (k>9時不換(末項為0之情況) ) 
			{
				int temp=seating[j];
				seating[j]=seating[k];
				seating[k]=temp;
			}
		}
		
	}
	
}
int main()
{
	int seating[]={99,0,10,31,0,42,70,67,0,0},i,seat,id;
	printSeat(seating);
	puts("Please input the seat(1~10) and 2-digit number (0 to end)");
	scanf("%d %d",&seat,&id);
	do 
	{
		
	if(seating[seat-1]==0)//有空位 
	{
		seating[seat-1]=id;//存入id值 
		printSeat(seating);
		puts("Please input the seat(1~10) and 2-digit number (0 to end)");
		scanf("%d %d",&seat,&id);//再次輸入
	}
	else//沒空位 
	{
		puts("Sorry, the seat is taken.");
		scanf("%d %d",&seat,&id);	//再次輸入 
	}
	}
	while(seat!=0&&id!=0);//輸入0結束 
	
	bubble(seating);//排序 
	printSeat(seating);//印出結果 
	
	return 0;
}
