//Header files

//Header file to get input and output
#include<iostream>

//To provide console to input and output
#include<conio.h>

//To use the sleep function
#include<windows.h>

//To get random numbers
#include<stdlib.h>

//To get the random numbers
#include<time.h>

//To get mathematical functions
#include<math.h>

//Declare the namespace
using namespace std;

//Declare functions to use
void setup();
void menu();
void help();
void draw();
void input();
void logic();
void crash();
void toss();
void marks();
void setLast();
void beginning();

//Declare global variables
bool gameover;

//Length and width of the ground
const int length = 110;
const int width = 20;
int x, y, defcnt = 0, sidecnt = 0, turn = 0;

//Declare initial player positions
int playerx[6] = { 9,9,9,33,33,33 }, playery[6] = { 15,10,5,3,8,13 };
int dplayerx[6] = { 75,75,75,99,99,99 }, dplayery[6] = { 15,10,5,3,8,13 };
int ballx = 55, bally = 10;
int l, k;

//Scores of two teams
int scorePlayer = 0, scoreDefence = 0, cnt = 0, check = 0;

//Enum to get the ball direction
enum ballDirection
{
	STOP1, left1, right1
};

// Declare enum element
ballDirection balldir;

//Enum to get the player direction
enum eDirection
{
	Stop = 0, Left, Right, Up, Down
};

//Declare enum element
eDirection dir;

//Enum to select the player
enum player
{
	playerr1 = 0, playerr2, playerr3, playerr4, playerr5, playerr6, dplayerr1, dplayerr2, dplayerr3, dplayerr4, dplayerr5, dplayerr6

};

//Declare enum element
player playerSelection;

//Function setup
void setup()
{
	dir = Stop;
}

//Function to display the menu
void menu()
{
	//Clear the screen
	system("cls");

	//Display the menu in console window
	cout << "\n\n\n\n\n\n\t\t\t\t";
	cout << "1.PLAY GAME....... ";
	cout << "\n\n\t\t\t\t";
	cout << "2.HELP............";
	cout << "\n\n\t\t\t\t";
	cout << "3.QUIT............" << endl << endl << endl;


	playerSelection = playerr4;

	//Call the input function to get inputs
	while (playerSelection != playerr1 && playerSelection != playerr2 && playerSelection != playerr3)
	{
		input();
	}

	//Play a new game if the player input 1 
	if (playerSelection == playerr1)
	{

	}

	//Display the help window if the player pressed key 2
	else if (playerSelection == playerr2)
	{
		help();
	}

	//Exit from the game if the user pressed key 3
	else if (playerSelection == playerr3)
	{
		system("cls");
		cout << endl << endl << endl;
		cout << "    EEEEEEEEEE         XXXX      XXXX           IIII           TTTTTTTTTTTTTT\n";
		cout << "    EEEEEEEEEE          XXXX    XXXX            IIII           TTTTTTTTTTTTTT\n";
		cout << "    EEEE                 XXXX  XXXX             IIII                TTTT\n";
		cout << "    EEEEEEEEEE            XXXXXXXX              IIII                TTTT\n";
		cout << "    EEEEEEEEEE            XXXXXXXX              IIII                TTTT\n";
		cout << "    EEEE                 XXXX  XXXX             IIII                TTTT\n";
		cout << "    EEEEEEEEEE          XXXX    XXXX            IIII                TTTT\n";
		cout << "    EEEEEEEEEE         XXXX      XXXX           IIII                TTTT\n";
		Sleep(2500);
		exit(0);
	}
}

//Functions to display commands to how to play the game
void help()
{
	//Clear the screen
	system("cls");

	//Show the help commands to play the game
	cout << "\t\t\t_____CHOOSE PLAYER______" << endl << endl << endl;
	cout << "\t\t\t Press 1 , 2, 3 , 4 , 5 , 6" << endl << endl << endl << endl << endl;

	cout << "\t\t\t_____GIVE DIRECTIONS______" << endl << endl << endl;
	cout << "\t\t\t W - Up" << endl << endl;
	cout << "\t\t\t S - Down" << endl << endl;
	cout << "\t\t\t A - Left" << endl << endl;
	cout << "\t\t\t D - Right" << endl << endl;
	cout << "\t\t\t Q - Exit" << endl << endl << endl << endl << endl;

	//Wait until the user's input
	system("pause");

	//Call the menu function
	menu();

}

//Display the logo and name of the game
void beginning()
{
	cout << endl << endl << endl << endl << endl << endl;
	cout << "VVVV          VVVV               OOO               LLLL            LLLL            EEEEEEEEE           YYYY      YYYY\n";
	cout << " VVVV        VVVV             OOO   OOO            LLLL            LLLL            EEEEEEEEE            YYYY    YYYY\n";
	cout << "  VVVV      VVVV             OOO     OOO           LLLL            LLLL            EEEE                  YYYY  YYYY\n";
	cout << "   VVVV    VVVV             OOO       OOO          LLLL            LLLL            EEEEEEEEE              YYYYYYYY\n";
	cout << "    VVVV  VVVV              OOO       OOO          LLLL            LLLL            EEEEEEEEE               YYYYYY\n";
	cout << "     VVVVVVVV                OOO     OOO           LLLL            LLLL            EEEE                     YYYY\n";
	cout << "      VVVVVV                  OOO   OOO            LLLLLLLLL       LLLLLLLLL       EEEEEEEEE                YYYY\n";
	cout << "       VVVV                      OOO               LLLLLLLLL       LLLLLLLLL       EEEEEEEEE                YYYY\n";


	cout << endl << endl << endl;
	cout << "                             CCCCCCCCCC\n";
	cout << "                             CCCCCCCCCC\n";
	cout << "                             CCCC                  HHHH    HHHH\n";
	cout << "                             CCCC                  HHHH    HHHH\n";
	cout << "                             CCCC                  HHHH    HHHH                AAAA\n";
	cout << "                             CCCC                  HHHHHHHHHHHH               AAAAAA\n";
	cout << "                             CCCCCCCCCC            HHHHHHHHHHHH              AAAAAAAA                MMMM          MMMM\n";
	cout << "                             CCCCCCCCCC            HHHH    HHHH             AAAA  AAAA               MMMMMM      MMMMMM\n";
	cout << "                                                   HHHH    HHHH            AAAAAAAAAAAA              MMMMMMMM  MMMMMMMM          PPPPPPPPPPP\n";
	cout << "                                                   HHHH    HHHH           AAAAAAAAAAAAAA             MMMMMMMMMMMMMMMMMM          PPPP   PPPP         ZZZZZZZZZZZZZ\n";
	cout << "                                                                         AAAA        AAAA            MMMM   MMMM   MMMM          PPPP   PPPP         ZZZZZZZZZZZZ\n";
	cout << "                                                                        AAAA          AAAA           MMMM          MMMM          PPPPPPPPPPP                ZZZZ\n";
	cout << "                                                                                                     MMMM          MMMM          PPPP                      ZZZZ\n";
	cout << "                                                                                                     MMMM          MMMM          PPPP                     ZZZZ\n";
	cout << "                                                                                                                                 PPPP                    ZZZZ\n";
	cout << "                                                                                                                                 PPPP                  ZZZZZZZZZZZ\n";
	cout << "                                                                                                                                                      ZZZZZZZZZZZZ\n";
	//Sleep
	Sleep(7000);

	//Clear the screen
	system("cls");
}

//Clear the system
void clear()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

//Set the ground
void draw()
{
	//Clear the screen
	clear();

	cout << endl << endl << endl << endl << endl;

	//Display the ground
	for (int a = 0; a < width; a++)
	{
		for (int b = 0; b < length; b++)
		{
			if (a == 0 || a == (width - 1) || b == 0 || b == (length - 1))
			{
				cout << "\xDB";
			}
			else
			{
				if (b == (length / 2) || b == (length / 2) - 1)
				{
					cout << "|";
				}

				//Display the players
				else if (a == playery[0] && b == playerx[0])
				{
					cout << "1";
				}

				else if (a == playery[1] && b == playerx[1])
				{
					cout << "2";
				}

				else if (a == playery[2] && b == playerx[2])
				{
					cout << "3";
				}

				else if (a == playery[3] && b == playerx[3])
				{
					cout << "4";
				}

				else if (a == playery[4] && b == playerx[4])
				{
					cout << "5";
				}

				else if (a == playery[5] && b == playerx[5])
				{
					cout << "6";
				}

				//Display the players played by the computer
				else if (a == dplayery[0] && b == dplayerx[0])
				{
					cout << "P";
				}

				else if (a == dplayery[1] && b == dplayerx[1])
				{
					cout << "P";
				}

				else if (a == dplayery[2] && b == dplayerx[2])
				{
					cout << "P";
				}

				else if (a == dplayery[3] && b == dplayerx[3])
				{
					cout << "P";
				}

				else if (a == dplayery[4] && b == dplayerx[4])
				{
					cout << "P";
				}

				else if (a == dplayery[5] && b == dplayerx[5])
				{
					cout << "P";
				}

				//Display the ball
				else if (a == bally && b == ballx)
				{
					cout << "O";
				}

				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}

	//Display the score board
	cout << "\n\n\t\tPLAYER SCORE :" << scorePlayer << "\t\tDEFENCE SCORE :" << scoreDefence << endl;
}

//Function to get the toss
void toss()
{
	//Clear the screen
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t";

	//Get the rand numbers and get the remainder by dividing from 2
	int num = rand() % 2;

	//Win the toss to the player team
	if (num == 1)
	{
		//Give the coordinates of the ball
		ballx = 2;
		bally = 9;

		//Give the direction of the ball to move
		balldir = left1;

		//Output to the console window
		cout << "CONGRATZZZ YOU WON THE TOSS :-D:-D:-D" << endl << endl;

	}

	//Win the toss to the opposing team
	else
	{
		//Give the coordinates of the ball
		ballx = 107;
		bally = 9;

		//Give the direction of the ball to move
		balldir = right1;

		//Output to the console window
		cout << "SORRY YOU LOSE THE TOSS :-(:-(:-(" << endl << endl << endl << endl;
	}

	cout << endl << endl << endl << endl << endl << endl;
	//Wait until user's input
	system("pause");

	//Clear the sceen
	system("cls");

}

//Function to detect the keyboard inputs
void input()
{
	//Checking for the conditions
	if (_kbhit())
	{
		//Checking for the conditions
		switch (_getch())
		{
		case 'a':
		case 'A':
		{
			//Give the direction of the player to left
			dir = Left;
			break;
		}

		case 'd':
		case 'D':
		{
			//Give the direction of the player to right
			dir = Right;
			break;
		}

		case 'w':
		case 'W':
		{
			//Give the direction of the player to down
			dir = Down;
			break;
		}

		case 's':
		case 'S':
		{
			//Give the direction of the player to up
			dir = Up;
			break;
		}

		case 'q':
		case 'Q':
		{
			//Clear the screen
			system("cls");

			//Over the game
			gameover = true;
			check == 1;

			//Output to the console window
			cout << "\n\n\n\n\n\n\n";
			cout << "    EEEEEEEEEE         XXXX      XXXX           IIII           TTTTTTTTTTTTTT\n";
			cout << "    EEEEEEEEEE          XXXX    XXXX            IIII           TTTTTTTTTTTTTT\n";
			cout << "    EEEE                 XXXX  XXXX             IIII                TTTT\n";
			cout << "    EEEEEEEEEE            XXXXXXXX              IIII                TTTT\n";
			cout << "    EEEEEEEEEE            XXXXXXXX              IIII                TTTT\n";
			cout << "    EEEE                 XXXX  XXXX             IIII                TTTT\n";
			cout << "    EEEEEEEEEE          XXXX    XXXX            IIII                TTTT\n";
			cout << "    EEEEEEEEEE         XXXX      XXXX           IIII                TTTT\n";
			cout << endl << endl << endl << endl << endl << endl << endl << endl;

			//Wait until the user's input
			Sleep(2000);

			//Exit from the programme
			exit(0);
		}

		//Keys to select the players
		//Select player1 by presseon key 1
		case '1':
		{
			playerSelection = playerr1;
			break;
		}

		//Select player2 by presseon key 2
		case '2':
		{
			playerSelection = playerr2;
			break;
		}

		//Select player3 by presseon key 3
		case '3':
		{
			playerSelection = playerr3;
			break;
		}

		//Select player4 by presseon key 4
		case '4':
		{
			playerSelection = playerr4;
			break;
		}

		//Select player5 by presseon key 5
		case '5':
		{
			playerSelection = playerr5;
			break;
		}

		//Select player6 by presseon key 6
		case '6':
		{
			playerSelection = playerr6;
			break;
		}

		//Do nothing if the player presses any other key
		default:
		{
		}
		}
	}
}

//Give the directions of the player
void logic()
{
	//Check for conditions of dir
	switch (dir)
	{
	case Left:
	{
		//Move the playes to left side by one point
		playerx[cnt]--;
		break;
	}

	case Right:
	{
		//Move the playes to right side by one point
		playerx[cnt]++;
		break;
	}

	case Up:
	{
		//Move the playes to up side by one point
		playery[cnt]++;
		break;
	}

	case Down:
	{
		//Move the playes to down side by one point
		playery[cnt]--;
		break;
	}

	default:
	{

	}
	}

	//Give numbers to the player to give directions for them
	if (playerSelection == playerr1)
	{
		cnt = 0;
	}
	else if (playerSelection == playerr2)
	{
		cnt = 1;
	}
	else if (playerSelection == playerr3)
	{
		cnt = 2;
	}
	else if (playerSelection == playerr4)
	{
		cnt = 3;
	}
	else if (playerSelection == playerr5)
	{
		cnt = 4;
	}
	else if (playerSelection == playerr6)
	{
		cnt = 5;
	}
}

//Functions to recognize hits and change the directions of the ball
void crash()
{
	//Declare a variable and get the current x and y coordinates of the ball
	int prevballx = ballx;
	int prevbally = bally;

	//Declare a variable to get the previous x and y coordinates of the players of the user
	int preplayerx[6], preplayery[6];

	//Declare a variable to get the previous x and y coordinates of the defense players
	int predefplayerx[6], predefplayery[6];

	//Get the corrent coordinates of the players
	for (int a = 0; a < 6; a++)
	{
		preplayerx[a] = playerx[a];
		preplayery[a] = playery[a];
		predefplayerx[a] = dplayerx[a];
		predefplayery[a] = dplayery[a];
	}

	//Increment the defcnt value
	defcnt++;

	//Assign some directions and assign the 
	if (defcnt % 8 == 0)
	{
		dplayery[0]++; dplayery[1]++; dplayery[2]++; dplayery[3]--; dplayery[4]--; dplayery[5]--;
	}

	if (defcnt % 8 == 1)
	{
		dplayery[0]++; dplayery[1]++; dplayery[2]++; dplayery[3]--; dplayery[4]--; dplayery[5]--;
	}

	if (defcnt % 8 == 2)
	{
		dplayery[0]--; dplayery[1]--; dplayery[2]--; dplayery[3]++; dplayery[4]++; dplayery[5]++;
	}

	if (defcnt % 8 == 3)
	{
		dplayery[0]--; dplayery[1]--; dplayery[2]--; dplayery[3]++; dplayery[4]++; dplayery[5]++;
	}

	if (defcnt % 8 == 4)
	{
		dplayery[0]--; dplayery[1]--; dplayery[2]--; dplayery[3]++; dplayery[4]++; dplayery[5]++;
	}

	if (defcnt % 8 == 5)
	{
		dplayery[0]--; dplayery[1]--; dplayery[2]--; dplayery[3]++; dplayery[4]++; dplayery[5]++;
	}

	if (defcnt % 8 == 7)
	{
		dplayery[0]++; dplayery[1]++; dplayery[2]++; dplayery[3]--; dplayery[4]--; dplayery[5]--;
	}

	if (defcnt % 8 == 6)
	{
		dplayery[0]++; dplayery[1]++; dplayery[2]++; dplayery[3]--; dplayery[4]--; dplayery[5]--;
	}

	//Give random numbers to give random directions to tha ball after hitting with the players

	//Change the ball direction when ball's coordinates equals to player1's coordinates
	if (ballx == preplayerx[0] && bally == preplayery[0])
	{
		balldir = left1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to player2's coordinates and gives an axial direction
	else if (ballx == preplayerx[1] && bally == preplayery[1])
	{
		balldir = left1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to player3's coordinates and gives an axial direction
	else if (ballx == preplayerx[2] && bally == preplayery[2])
	{
		balldir = left1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to player4's coordinates and gives an axial direction
	else if (ballx == preplayerx[3] && bally == preplayery[3])
	{
		balldir = left1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to player5's coordinates and gives an axial direction
	else if (ballx == preplayerx[4] && bally == preplayery[4])
	{
		balldir = left1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to player6's coordinates and gives an axial direction
	else if (ballx == preplayerx[5] && bally == preplayery[5])
	{
		balldir = left1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to defense player1's coordinates and gives an axial direction
	else if (ballx == predefplayerx[0] && abs(bally - predefplayery[0])<2)
	{
		balldir = right1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to defense player2's coordinates and gives an axial direction
	else if (ballx == predefplayerx[1] && abs(bally - predefplayery[1])<2)
	{
		balldir = right1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to defense player3's coordinates and gives an axial direction
	else if (ballx == predefplayerx[2] && abs(bally - predefplayery[2])<2)
	{
		balldir = right1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to defense player4's coordinates and gives an axial direction
	else if (ballx == predefplayerx[3] && abs(bally - predefplayery[3])<2)
	{
		balldir = right1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to defense player5's coordinates and gives an axial direction
	else if (ballx == predefplayerx[4] && abs(bally - predefplayery[4])<2)
	{
		balldir = right1;
		turn = rand() % 3;
	}

	//Change the ball direction when ball's coordinates equals to defense player6's coordinates and gives an axial direction
	else if (ballx == predefplayerx[5] && abs(bally - predefplayery[5])<2)
	{
		balldir = right1;
		turn = rand() % 3;
	}

	//Increment the value of sidecnt by 1
	sidecnt++;

	//Give random directions to the ball according to the balldir
	if (balldir == left1 && turn == 0)
	{
		ballx++;
		if (sidecnt % 10 == 0)
			bally--;
	}

	if (balldir == left1 && turn == 1)
	{
		ballx++;
		if (sidecnt % 10 == 0)
			bally++;
	}
	if (balldir == left1 && turn == 2)
	{
		ballx++;
	}
	else if (balldir == right1 && turn == 0)
	{
		ballx -= 1;
		if (sidecnt % 10 == 0)
			bally++;
	}
	else if (balldir == right1 && turn == 1)
	{
		ballx -= 1;
		if (sidecnt % 10 == 0)
			bally--;
	}
	else if (balldir == right1 && turn == 2)
	{
		ballx -= 1;
	}
}

//Function to calculate the marks of each team
void marks()
{
	//If one of the players goes out of the ground or the boundary the defense team will get a mark
	for (int a = 0; a < 6; a++)
	{
		if (playerx[a] == 0 || playerx[a] == length / 2 || playery[a] == 0 || playery[a] == width)
		{
			l = 1;

			//Increment the score of the defense team
			scoreDefence++;
			gameover = true;
		}

		//If one of the defense player goes out of the ground or the boundary the player team will get a mark
		else if (dplayerx[a] == 0 || dplayerx[a] == length / 2 || dplayery[a] == 0 || dplayery[a] == width)
		{
			l = 0;

			//Increment the score of the player team
			scorePlayer++;
			gameover = true;
		}
	}

	//If the ball goes out of the boundary the opposing team will get points
	if (ballx == 0 || (ballx <= ((length / 2) - 1) && bally == 0) || (ballx <= ((length / 2) - 1) && bally == width))
	{
		l = 1;
		scoreDefence++;
		gameover = true;
	}

	if (ballx == length || (ballx >= (length / 2) && bally == 0) || (ballx >= (length / 2) && bally == width))
	{
		l = 0;
		scorePlayer++;
		gameover = true;
	}

	//If one of the team's score gets 25 marks game will over
	if (scorePlayer >= 25)
	{
		//Over the game
		check = 1;

		//Clear the screen
		system("cls");
		cout << endl << endl << endl << endl;

		//Display win
		cout << "WWWW            WWWW          OOOOOOOOOOOO          NNNN     NNNN           !!!!\n";
		cout << "WWWW            WWWW          OOOOOOOOOOOO          NNNNN    NNNN           !!!!\n";
		cout << " WWWW          WWWW           OOOO    OOOO          NNNNNN   NNNN           !!!!\n";
		cout << " WWWW   wwww   WWWW           OOOO    OOOO          NNNNNNN  NNNN           !!!!\n";
		cout << "  WWWWWWWWWWwwWWWW            OOOO    OOOO          NNNNNNNN NNNN           !!!!\n";
		cout << "  WWWWWWWWWWWWwwWW            OOOO    OOOO          NNNN NNNNNNNN\n";
		cout << "   WWWWWW  WWWWWW             OOOOOOOOOOOO          NNNN  NNNNNNN           !!!!\n";
		cout << "   WWWW      WWWW             OOOOOOOOOOOO          NNNN   NNNNNN           !!!!\n";

	}

	if (scoreDefence >= 25)
	{
		check = 1;
		system("cls");
		cout << endl << endl << endl << endl;

		//Display lost
		cout << "LLLL                    OOOOOOOOOOOO            SSSSSSSSSSSS             SSSSSSSSSSSS           !!!!\n";
		cout << "LLLL                    OOOOOOOOOOOO            SSSSSSSSSSSS             SSSSSSSSSSSS           !!!!\n";
		cout << "LLLL                    OOOO    OOOO            SSSS                     SSSS                   !!!!\n";
		cout << "LLLL                    OOOO    OOOO            SSSSSSSSSSSS             SSSSSSSSSSSS           !!!!\n";
		cout << "LLLL                    OOOO    OOOO            SSSSSSSSSSSS             SSSSSSSSSSSS           !!!!\n";
		cout << "LLLL                    OOOO    OOOO                    SSSS                     SSSS\n";
		cout << "LLLLLLLLLLLL            OOOOOOOOOOOO            SSSSSSSSSSSS             SSSSSSSSSSSS           !!!!\n";
		cout << "LLLLLLLLLLLL            OOOOOOOOOOOO            SSSSSSSSSSSS             SSSSSSSSSSSS           !!!!\n";

	}
}

//Function to reset the ground if the ball or a player goes outside the ground
void setLast()
{
	//Clear the screen
	clear();
	int dplayerx[6] = { 75,75,75,99,99,99 }, dplayery[6] = { 15,10,5,3,8,13 };

	//Assign the player positions
	playerx[0] = 9; playerx[1] = 9; playerx[2] = 9; playerx[3] = 33; playerx[4] = 33; playerx[5] = 33;
	playery[0] = 15; playery[1] = 10; playery[2] = 5; playery[3] = 3; playery[4] = 8; playery[5] = 13;
	dplayerx[0] = 75; dplayerx[1] = 75; dplayerx[2] = 75; dplayerx[3] = 99; dplayerx[4] = 99; dplayerx[5] = 99;
	dplayery[0] = 15; dplayery[1] = 10; dplayery[2] = 5; dplayery[3] = 3; dplayery[4] = 8; dplayery[5] = 13;

	//Gives the ball to the pointed team side
	if (l == 1)
	{
		ballx = 107;
		bally = 9;
		balldir = right1;

	}

	else
	{
		ballx = 2;
		bally = 9;
		balldir = left1;
	}
}

//Declare main function
int main()
{
	//Change the color of the console window
	system("color f0");

	//Get the time to calculate the random numbers
	srand(time(0));

	//Call the function to display the logo
	beginning();

	//Function to set up the game
	setup();

	//Call the menu function
	menu();

	//Call the toss function
	toss();

	//Initialize the value of check
	check = 0;

	//Play the game until game over
	while (check == 0)
	{
		gameover = false;

		//Give random numbers to turn value
		turn = rand() % 3;

		while (!gameover)
		{
			//Call the set up function
			setup();

			//Set the ground
			draw();

			//Get key board inputs
			input();

			//Call the functions to play the game
			logic();
			marks();
			crash();
			Sleep(20);
		}

		//When a point collected set the ground
		setLast();
	}

	//Wait for the user's input
	system("pause");

	//Programme exit
	return (0);
}