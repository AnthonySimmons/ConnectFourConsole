#include "ConnectFour.h"


void initialize_game_board (Cell game_board [6][7])
{
	int row_index = 0, col_index = 0;

	for (row_index = 0; row_index < 6; row_index++)
	{
		for (col_index = 0; col_index < 7; col_index++)
		{
			game_board[row_index][col_index].color = NONE;
			game_board[row_index][col_index].occupied = FALSE;
			game_board[row_index][col_index].location.row = row_index;
			game_board[row_index][col_index].location.column = col_index;
		}
	}
}

void print_game_board (Cell game_board [6][7])
{
	int row_index = 0, col_index = 0;

	printf ("0 1 2 3 4 5 6\n");

	for (row_index = 0; row_index < 6; row_index++)
	{
		for (col_index = 0; col_index < 7; col_index++)
		{
			switch (game_board[row_index][col_index].color)
			{
				case NONE: printf ("- ");
					       break;
				case RED: printf ("r ");
					      break;
				case BLACK: printf ("b ");
					        break;
			}
		}
		putchar ('\n');
	}
}

void place_token (Cell game_board [6][7], Token_color new_color, int column)
{
	int row_index = 0;

	for (row_index = 0; (row_index <= 5) && (game_board[row_index][column].occupied == FALSE); row_index++)
	{
		// No need for a body here
	}

	switch (new_color)
	{
		case RED: game_board[row_index - 1][column].color = RED;
			      game_board[row_index - 1][column].occupied = TRUE;
				  break;
		case BLACK: game_board[row_index - 1][column].color = BLACK;
			        game_board[row_index - 1][column].occupied = TRUE;
				    break;
	}	
}
int check_end_game(Cell game_board[6][7])
{
	int x = 0, y = 0, end = 0;	
	for(x = 0; x < 7; x++)
	{
		for(y = 0; y < 8; y++)
		{
			if((game_board[x][y].color = RED)&&(game_board[x][y+1].color = RED)&&(game_board[x][y+2].color = RED)&&
				(game_board[x][y].color = RED))
			{
				end = 1;
			}
			if((game_board[x][y].color = BLACK)&&(game_board[x][y+1].color = BLACK)&&(game_board[x][y+2].color = BLACK)&&
				(game_board[x][y].color = BLACK))
			{
				end = -1;
			}
		}	
	}
	return end;
}