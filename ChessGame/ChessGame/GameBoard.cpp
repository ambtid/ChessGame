#include "GameBoard.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"

GameBoard::GameBoard()
{

	 tools = new BasicTool * *[BOARDSIZE];
	 for (int i = 0; i < BOARDSIZE; ++i)
	 {
		 tools[i] = new BasicTool * [BOARDSIZE];

	 }
	 tools[0][0] = new Rook((int)0, (int)0, BLACK);
	 tools[0][7] = new Rook((int)0, (int)7, BLACK);
	 tools[0][1] = new Knight((int)0, (int)1, BLACK);
	 tools[0][6] = new Knight((int)0, (int)6, BLACK);
	 tools[0][2] = new Bishop((int)0, (int)2, BLACK);
	 tools[0][5] = new Bishop((int)0, (int)5, BLACK);
	 tools[0][3] = new King((int)0, (int)3, BLACK);
	 tools[0][4] = new Queen((int)0, (int)4, BLACK);
	 for (size_t i = 0; i < BOARDSIZE; i++)
	 {
		 tools[1][i] = new Pawn((int)0, (int)i, BLACK);

		 tools[6][i] = new Pawn((int)0, (int)0, WHITE);
	 }
	 tools[7][0] = new Rook((int)7, (int)0, WHITE);
	 tools[7][7] = new Rook((int)7, (int)7, WHITE);
	 tools[7][1] = new Knight((int)7, (int)1, WHITE);
	 tools[7][6] = new Knight((int)7, (int)6, WHITE);
	 tools[7][2] = new Bishop((int)7, (int)2, WHITE);
	 tools[7][5] = new Bishop((int)7, (int)5, WHITE);
	 tools[7][3] = new King((int)7, (int)3, WHITE);
	 tools[7][4] = new Queen((int)7, (int)4, WHITE);

}