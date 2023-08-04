#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand((unsigned)time(NULL));

	int level=0;
	int range=0;
	
	int players=0;
	while(players==0){
		printf("Number of Players\t: ");
		scanf("%d",&players);
		if(players<0){
			printf("Pleas enter the number of players at least 1");
		}
	}

	while(range==0)
	{
		printf("level(1~5)\t\t:	");
		scanf("%d",&level);
		
		switch(level){
			case 1:
				range=30;
				break;
			case 2:
				range=50;
				break;
			case 3:
				range=100;
				break;
			case 4:
				range=200;
				break;
			case 5:
				range=500;
				break;
			default:
				printf("Prease enter a level from 1 to 5");
				continue;
		}
	}
	
	printf("%d players\nlevel %d\n",players,level);

	int ans=rand()%range+1;

	int player =1;
	
	while(1==1){
		printf("\nPlayer %d\nYoure answer: ",player);
		int playerAns=0;
		scanf("%d",&playerAns);
	   	
		if(playerAns==ans){
			printf("CORRECT!!\n");
			break;
		}
		else if(playerAns>ans){
			printf("The correct answer is smaller\n");
		}
		else if(playerAns<ans){
			printf("The correct answer is bigger\n");
		}
		player++;
		if(player>players){
			player=1;
		}
	}

	printf("Winner player %d\n",player);
	return 0;
}
