#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Defining Boolean variables  */
#define TRUE 1
#define FALSE 0
#define true TRUE
#define false FALSE

/* Define Plays  */
#define CROSS 'x'
#define CIRCLE 'O'

/* Global Variables  */
char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int coord_x;
int coord_y;

/* Function Prototypes  */
void printBoard();
void initMenu();
void gameMenu();
int cpuDecision();
void play(int x, int y, char element);

void main(void)
{
	coord_x=-1;
	coord_y=-1;
	//gameMenu();
	//printf("%d\n", cpuDecision());
	while(1){
		printf("Enter x coordinates\n");
		scanf("%d" , &coord_x);
		printf("Enter y coordinates\n");
		scanf("%d", &coord_y);
		play(coord_x,coord_y,CROSS);
	}
}

void printBoard()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%c|", board[i][j]);
		}
		printf("\n");
	}
}

void initMenu()
{
	printf(" _________  ________  ______       _________  ________   ______       _________  ______   ______      \n");
	printf("/________/\\/_______/\\/_____/\\     /________/\\/_______/\\ /_____/\\     /________/\\/_____/\\ /_____/\\      \n");
	printf("\\__.::.__\\/\\__.::._\\/\\:::__\\/     \\__.::.__\\/\\::: _  \\ \\\\:::__\\/     \\__.::.__\\/\\:::_ \\ \\\\::::_\\/_      \n");
	printf("   \\::\\ \\     \\::\\ \\  \\:\\ \\  __      \\::\\ \\   \\::(_)  \\ \\\\:\\ \\  __      \\::\\ \\   \\:\\ \\ \\ \\\\:\\/___/\\      \n");
	printf("    \\::\\ \\    _\\::\\ \\__\\:\\ \\/_/\\      \\::\\ \\   \\:: __  \\ \\\\:\\ \\/_/\\      \\::\\ \\   \\:\\ \\ \\ \\\\::___\\/_      \n");
	printf("     \\::\\ \\  /__\\::\\__/\\\\:\\_\\ \\ \\      \\::\\ \\   \\:.\\ \\  \\ \\\\:\\_\\ \\ \\      \\::\\ \\   \\:\\_\\ \\ \\\\:\\____/\\      \n");
	printf("      \\__\\/  \\________\\/ \\_____\\/       \\__\\/    \\__\\/\\__\\/ \\_____\\/       \\__\\/    \\_____\\/ \\_____\\/       \n");
	printf("\t Author: Ricardo Duarte \t All Rights Reserved 2019 ® \n\n");
	printf("\n");
}

void gameMenu()
{
	initMenu();
	char option = ' ';
	printf("\t\tGameMenu:\n");
	printf("\t\t\t[1] Play\n");
	printf("\t\t\t[2]Change Difficulty\n");
	printf("\t\t\t[3]Show Leaderboards\n");
	printf("\t\t\t[0]Exit\n");
	scanf("%c", &option);
	switch(option){
		case('1'):
			//TODO
			break;
		case('2'):
			//TODO
			break;
		case('3'):
			//TODO
			break;
		case('0'):
			printf("You decided to exit goodbye\n");
			exit(0);
		default:
			printf("Please select a valid option\n");
			gameMenu(0);
	}
}

int cpuDecision()
{
	int decision=0;
	srand(time(NULL)); //seeds random number in time now
	decision = (rand() %  (2 - 0 + 1)) + 0;
}

void play(int x, int y,char element)
{

	if(x<0 && x>2 || y<0 && y>2 || board[x][y] != ' ')
	{
		printf("Please choose valid coordinates\n");
	}
	else
	{
		board[x][y] = element;
		printBoard();
	}
}
