#include<stdio.h>
#define size 10
int printSeat(int *seating)//�L�X��e�y���T 
{
	int i=0;
	puts("*seating*");
	for(i=0;i<size;i++)
	{
		printf("%d ",seating[i]);
	}
	puts("\n**********");
}
int bubble(int *seating)//�Ƨ� 
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(seating[j]==0)//���L0 
			{
				continue;
			}
			int k=j+1;
			while(seating[k]==0)//���D0�� 
			{
				k++;
			}
			if(seating[j]>seating[k] && k<size)//�洫 (k>9�ɤ���(������0�����p) ) 
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
		
	if(seating[seat-1]==0)//���Ŧ� 
	{
		seating[seat-1]=id;//�s�Jid�� 
		printSeat(seating);
		puts("Please input the seat(1~10) and 2-digit number (0 to end)");
		scanf("%d %d",&seat,&id);//�A����J
	}
	else//�S�Ŧ� 
	{
		puts("Sorry, the seat is taken.");
		scanf("%d %d",&seat,&id);	//�A����J 
	}
	}
	while(seat!=0&&id!=0);//��J0���� 
	
	bubble(seating);//�Ƨ� 
	printSeat(seating);//�L�X���G 
	
	return 0;
}
