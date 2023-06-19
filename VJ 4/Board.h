#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <string.h>
#include "Point.h"


class Board {
	int m, n;
	char border;
	char* matrix;
public:
	Board(int M = 0, int N = 0, char B = 'o');
	Board(const Board& other);
	Board(Board&& other);
	~Board() { delete[] matrix; }

	void draw_char(Point p, char ch);
	void draw_up_line(Point p,char ch);
	void draw_line(Point p1, Point p2, char ch);

	void display();
};

#endif // !BOARD_H

