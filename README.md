# 2D_Volleyball_Game - VOLLEY CHAMPZ #

* Introduction
	
	* Volley Champsz is a simple volley ball game encrypted with C++ language. In this game, there are two groups and there are six players for each side. The defense team is played automatically and the user has to play the other side.
</br>

* Procedure of the game

	* At the beginning of the game, the menu which contains the continue to the game, help and exit details are displaying and the user has to choose an option.

		* Play a new game &nbsp; - 1
		* Help&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; - 2
		* Quit&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; - 3

	* After giving an idea about the program, the program checks for the toss and the user may win or lose it. The team who win the toss will get the chance to serve the ball at first.

	* User can choose a player by pressing 1, 2, 3, 4, 5 or 6 key. To give the direction of the player, user has to give A, S, D and W keys.

		* A or a - Left
		* S or s - Down
		* D or d - Right
		* W or w - Up

	* By pressing key for once, the user can move the player by one step.

	* Here the rules of the game are,

		1. One team can get points, if one of the players in the opposing team goes outside from the ground.
		2. If the ball goes to the outside of the ground, opposing team can get points.
		3. If one team player goes to the side of the opposing team, then the opposing team can score one point.
	
	* The team which get 25 marks at first will be the winning team. If the user wants to quit the game, user have to press Q or q key.

</br>

* Techniques used in the game simultation

	* In this program we have used 11 functions to do specific tasks (Ex: we have used ‘draw’ function to set the ground and ‘marks’ function to calculate the points). Also we have used global variables (Ex: length and width)
	* In addition to that header files are also used in this program (Ex :#include <windows.h>, #include <conio.h>, #include<stdlib.h>). Also we have used enums to give ball directions, player directions to select players and to get the menu commands.
	* At the beginning of the program, the name of the game is displayed. After that the menu is displaying. Then the toss is checked using random numbers. Until the variable game over becomes true, the other functions are running. The ground and the players are placed using a for loop. Here in the code there are several paths for the ball and the path is chosen by using random numbers. If the ball’s coordinates equals to the player’s coordinates, the path of the ball is changing. For the players played by the computer, there are two paths. They are moving automatically. Score is calculated according to the above mentioned criteria. If the ball or the player goes to the outside of the ground, the layout is set according to the default values. If the user pressed a keyboard value, using input function, we check for keys and do the commands according to the keys.

</br>

* Challenges in the game simultation

	* When making the code of this game, we had problems of moving the ball in horizontal axis and vertical axis. Also moving the players around the ground and the players of computer randomly. Therefore we had to explore the scenario of ‘enum’ and use it. Also we had to use some new header functions like #include<windows.h>, #include<conio.h>. Also there was a bit challenge when updating the score board. To solve those problems we had to browse internet and get more details through it. Also at the beginning of the program there was a blink in the ground and we had to use some specific functions.