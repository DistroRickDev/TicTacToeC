#include <stdio.h>
#include <stdlib.h>

/* Defining Boolean variables  */
#define TRUE 1
#define FALSE 0
#define true TRUE
#define false FALSE

/* Global Variables  */
char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

/* Function Prototypes  */
void printBoard();
void initMenu();
void gameMenu();

void main(void)
{
	gameMenu();
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
