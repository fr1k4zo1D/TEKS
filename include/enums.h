#ifndef _TEKS_INCLUDE_COMMANDS_H_
#define _TEKS_INCLUDE_COMMANDS_H_
typedef enum E_COMMANDS
{
	CREATE_WINDOW,
	CLOSE_WINDOW,
 
	CURSORE_DOWN, 
	CURSORE_UP, 
	CURSOR_LEFT, 
	CURSOR_RIGHT, 

	CHANGE_MODE, 

	INPUT, 
	
	EXIT_TO_MAIN_MENU,
 
	QUIT
} COMMANDS;

typedef enum E_INPUT_TYPE
{
	CHOOSE
	INPUT_CHAR, 
	INPUT_CMD
} INPUT_TYPE;

typedef enum E_WINDOW_TYPE
{
	EDIT_FILE, 
	MAIN_MENU, 
	CHOOSE_FILE 
} WINDOW_TYPE; 
#endif

