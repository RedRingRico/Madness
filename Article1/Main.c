#include <ncurses.h>

int main( int p_Argc, char **p_ppArgv )
{
	initscr( );
	printw( "Hello, there, Pandora!\n" );
	refresh( );
	getch( );
	endwin( );

	return 0;
}

