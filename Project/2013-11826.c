#include <ncurses.h>

int key_in;

char cards[4][4];	

void initialize();
void display();
void display_gameboard();
int box_char(int x);
void draw_box(int line, int col, int height, int width);

int main(){	
	for(int i = 0; i < 4; i++){					// Initialize 16 cards	
		for(int j = 0; j < 4; j++){
			cards[i][j] = 'A' + (4 * i + j);
		}		
	}

	initialize();

	while(1) {
		key_in = getch();
		
		if(key_in == 'q' || key_in == 'Q') break;

		display();
	}

	endwin();	

	return 0;
}

void initialize(){
	initscr();	
	raw();
	keypad(stdscr, TRUE);
	curs_set(0);
	noecho();
	start_color();
	init_pair(1, 1, 0);

	display();
}

void display(){
	clear();
	display_gameboard();
	refresh();
}

void display_gameboard(){
	attron(A_BOLD);

	draw_box(LINES/2 - 9, COLS/2 - 15, 5, 7);	// A	
	draw_box(LINES/2 - 9, COLS/2 - 5, 5, 7);	// B
	draw_box(LINES/2 - 9, COLS/2 + 5, 5, 7);	// C
	draw_box(LINES/2 - 9, COLS/2 + 15, 5, 7);	// D
	draw_box(LINES/2 - 3, COLS/2 - 15, 5, 7);	// E
	draw_box(LINES/2 - 3, COLS/2 - 5, 5, 7);	// F
	draw_box(LINES/2 - 3, COLS/2 + 5, 5, 7);	// G
	draw_box(LINES/2 - 3, COLS/2 + 15, 5, 7);	// H
	draw_box(LINES/2 + 3, COLS/2 - 15, 5, 7);	// I
	draw_box(LINES/2 + 3, COLS/2 - 5, 5, 7);	// J
	draw_box(LINES/2 + 3, COLS/2 + 5, 5, 7);	// K
	draw_box(LINES/2 + 3, COLS/2 + 15, 5, 7);	// L
	draw_box(LINES/2 + 9, COLS/2 - 15, 5, 7);	// M
	draw_box(LINES/2 + 9, COLS/2 - 5, 5, 7);	// N
	draw_box(LINES/2 + 9, COLS/2 + 5, 5, 7);	// O
	draw_box(LINES/2 + 9, COLS/2 + 15, 5, 7);	// P
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			attron(COLOR_PAIR(1));
			mvaddch(LINES/2 - 9 + i * 6 + 2, COLS/2 - 15 + j * 10 + 3, (char)cards[i][j]);
			attroff(COLOR_PAIR(1));
		}
	}
}

int box_char(int x){
	switch(x) {
		case 1: return ACS_LLCORNER;
		case 2: return ACS_BTEE;
		case 3: return ACS_LRCORNER;
		case 4: return ACS_LTEE;
		case 5: return ACS_PLUS;
		case 6: return ACS_RTEE;
		case 7: return ACS_ULCORNER;
		case 8: return ACS_TTEE;
		case 9: return ACS_URCORNER;
		case 10: return ACS_HLINE;		// Horizontal Line	'-'
		case 11: return ACS_VLINE;		// Vertical Line	'|'
	}
	return 0;
}

void draw_box(int lines, int cols, int height, int width){
	mvaddch(lines, cols, box_char(7));
	
	for(int i = 1; i <= width - 2; i++){
		mvaddch(lines, cols + i, box_char(10));
	}
	
	mvaddch(lines, cols + width - 1, box_char(9));

	for(int i = 1; i <= height - 2; i++){
		mvaddch(lines + i, cols + width - 1, box_char(11));	
	}

	mvaddch(lines + height - 1, cols + width - 1, box_char(3));

	for(int i = 1; i <= width - 2; i++){
		mvaddch(lines + height - 1, cols + width - 1 - i, box_char(10));
	}

	mvaddch(lines + height - 1, cols, box_char(1));

	for(int i = 1; i <= height - 2; i++){
		mvaddch(lines + height -1 -i, cols, box_char(11));
	}
}
