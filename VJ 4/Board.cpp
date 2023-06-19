#include "Board.h"


Board::Board(int M, int N, char B)
{
	m = M;
	n = N;
	border = B;
	matrix = new char[m * n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
			{
				matrix[i * n + j] = border;
			}
			else
			{
				matrix[i * n + j] = ' ';
			}
		}
		std::cout << std::endl;
	}
}

Board::Board(const Board& other)
{
	m = other.m;
	n = other.n;
	border = other.border;
	matrix = new char[(m * n)];
	memcpy(matrix, other.matrix, (m * n) * sizeof(char));
}

Board::Board(Board&& other)
{	m = other.m;
	n = other.n;
	border = other.border;
	matrix = new char[(m * n)];
	matrix = other.matrix;
	other.m = 0;
	other.n = 0;
	other.border = '0';
	delete[](other.matrix);
	other.matrix = nullptr;
}

void Board::draw_char(Point p, char ch)
{
	if (p.x > m || p.y > n)
	{
		std::cout << "Pogresan unos!" << std::endl;
		return;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == p.x && j == p.y)
			{
				matrix[i * n + j] = ch;
			}
		}
	}

}

void Board::draw_up_line(Point p, char ch)
{
	if (p.x > m || p.y > n)
	{
		std::cout << "Pogresan unos!" << std::endl;
		return;
	}
	for (int i = 1; i < m-1; i++)
	{
		for (int j = 1; j < n-1; j++)
		{
			if ((j == p.x) && (i <=p.y))
			{
				matrix[i * n + j] = ch;
			}
		}
	}
}


int Sign(int x) {
	if (x < 0)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

void Board::draw_line(Point p1, Point p2, char ch)
{
	{
		int x1 = p1.x;
		int y1 = p1.y;
		int x2 = p2.x;
		int y2 = p2.y;
		int dy = y2 - y1;
		int dx = x2 - x1;

		if (fabs(dy) > fabs(dx))
		{
			for (p2.y = y1; p2.y != y2; p2.y += Sign(dy))
			{
				p2.x = x1 + (p2.y - y1) * dx / dy;
				matrix[p2.x * n + p2.y] = ch;

			}
		}

		else
		{
			for (p2.x = x1; p2.x != x2; p2.x += Sign(dx))
			{
				p2.y = y1 + (p2.x - x1) * dy / dx;
				matrix[p2.x * n + p2.y] = ch;
			}
		}

		// draw the last point
		matrix[x2 * n + y2] = ch;
	}
}

void Board::display()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << (char)matrix[i * n + j];
		}
		std::cout << std::endl;
	}
}

