// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/21 12:38:55 by kradoste          #+#    #+#             //
//   Updated: 2020/03/10 13:26:00 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include <curses.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctime>

#define STARS	'*'
#define EMPTY	' '
#define H_BORD	'-'
#define V_BORD	'|'
#define PLAYER	'^'
#define ENEMY	'#'
#define BULLET	'.'

#define DELAY	15000

int is_move_okay(int y, int x);
void draw_map(void);

int main(void)
{
    int y, x;
    int ch;

	srand( time(NULL) );
    /* initialize curses */

    initscr();
	noecho();
	curs_set(FALSE);

    keypad(stdscr, TRUE);
    cbreak();

	clear();
    /* initialize the quest map */

    draw_map();

    /* start player at these coordinates */

    x = COLS / 2;
    y = LINES - 14;

	/* random enemy generator */

	int enemy_x = (rand() % COLS - 1);
	int enemy_y = 1;

	do{
/* enemy attachment */
		if (enemy_y < LINES - 12)
		{
			mvaddch(enemy_y, enemy_x, ENEMY);
//			mvaddch(enemy_y - 1, enemy_x, EMPTY);
		}
		else if (enemy_y == LINES - 12)
		{
			mvaddch(enemy_y, enemy_x, EMPTY);
			enemy_y = 1;
		}
		usleep(DELAY);
//		mvaddch(enemy_y, enemy_x, EMPTY);
		enemy_y++;
/////////////////////			
		mvaddch(y, x, PLAYER);
		move(y, x);
		refresh();
		
		ch = getch();

		/* test inputted key and determine direction */
		
		switch (ch) {
		case KEY_UP:
		case 'w':
				if ((y > 0) && is_move_okay(y - 1, x)) {
					mvaddch(y, x, EMPTY);
					y = y - 1;
				}
				break;
			case KEY_DOWN:
		case 's':
			if ((y < LINES - 1) && is_move_okay(y + 1, x)) {
				mvaddch(y, x, EMPTY);
				y = y + 1;
			}
				break;
		case KEY_LEFT:
		case 'a':
			if ((x > 0) && is_move_okay(y, x - 1)) {
				mvaddch(y, x, EMPTY);
				x = x - 1;
				}
			break;
		case KEY_RIGHT:
		case 'd':
			if ((x < COLS - 1) && is_move_okay(y, x + 1)) {
				mvaddch(y, x, EMPTY);
				x = x + 1;
			}
			break;
		}			
	}
	while ((ch != 'q') && (ch != 'Q'));
	endwin();
	exit(0);
}

int is_move_okay(int y, int x)
{
    int testch;

    /* return true if the space is okay to move into */

    testch = mvinch(y, x);
    return (testch == EMPTY);
}

#include <iostream>

void draw_map(void)
{
	mvvline(1, 0, V_BORD, LINES - 1);
	mvhline(0, 0, H_BORD, COLS);
	mvvline(1, COLS - 1, V_BORD, LINES - 1);
	mvhline(LINES - 1, 0, H_BORD, COLS);
//	mvhline(LINES - 10, 0, H_BORD, COLS);
}
