/* This is the start of Connect Four. Complete this by the end of the semester
   for extra credit. */

#include "ConnectFour.h"

int main (void)
{
	Cell game_board[6][7];
	Cell slot;
	int end = 0;
	Token_color new_color = RED;
	srand(time(NULL));

	initialize_game_board (game_board);
	print_game_board (game_board);

	//do{
	//system("Pause");
	new_color = RED;
	printf("Enter slot number: \n");
	scanf("%d", &slot.location.row);
	place_token (game_board, new_color, slot.location.row);
	print_game_board (game_board);
	end = check_end_game(game_board);

	new_color = BLACK;
	slot.location.row = rand() % 6;
	place_token (game_board, new_color, slot.location.row);
	print_game_board (game_board);
	end = check_end_game(game_board);

	//}while(end == 0);

	//new_color = BLACK;
	//place_token (game_board, new_color, 0);
	//print_game_board (game_board);


	return 0;
}