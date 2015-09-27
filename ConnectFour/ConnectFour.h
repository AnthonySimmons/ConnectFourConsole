#ifndef CONNECT_FOUR_H
#define CONNECT_FOUR_H

#include <stdio.h>

typedef enum boolean
{
	FALSE, TRUE
} Boolean;

typedef enum token_color
{
	NONE, RED, BLACK
} Token_color;

typedef struct position
{
	int row;
	int column;
} Position;

typedef struct cell
{
	Boolean occupied;
	Token_color color;
	Position location;
} Cell;

void initialize_game_board (Cell game_board [6][7]);
void print_game_board (Cell game_board [6][7]);
void place_token (Cell game_board [6][7], Token_color new_color, int column);
int check_end_game(Cell game_board[6][7]);

#endif