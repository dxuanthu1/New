#ifndef stockfish1_MY_CONST_H
#define stockfish1_MY_CONST_H



#define King_4_Side(p90)       _KingSide[p90]
#define spoint(opening,endgame) Score(((opening) << 16) + (endgame))
#define Mirror(s) XYtoS(8-StoX(s),StoY(s))



static const uint8 _stox[90] = {
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	

	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,	
	0,    1,    2,    3,    4,    5,    6,    7,    8,
};

static const uint8 _stoy[90] = {
	0,    0,    0,    0,    0,    0,    0,    0,    0,	
	1,    1,    1,    1,    1,    1,    1,    1,    1,	
	2,    2,    2,    2,    2,    2,    2,    2,    2,	
	3,    3,    3,    3,    3,    3,    3,    3,    3,	
	4,    4,    4,    4,    4,    4,    4,    4,    4,	

	5,    5,    5,    5,    5,    5,    5,    5,    5,	
	6,    6,    6,    6,    6,    6,    6,    6,    6,	
	7,    7,    7,    7,    7,    7,    7,    7,    7,	
	8,    8,    8,    8,    8,    8,    8,    8,    8,	
	9,    9,    9,    9,    9,    9,    9,    9,    9,
};


static const uint8 _KingSide[90] = {
	0,    0,    0,    0,    4,    1,    1,    1,    1,	
	0,    0,    0,    0,    4,    1,    1,    1,    1,	
	0,    0,    0,    0,    4,    1,    1,    1,    1,	
	0,    0,    0,    0,    4,    1,    1,    1,    1,	
	0,    0,    0,    0,    4,    1,    1,    1,    1,	

	2,    2,    2,    2,    4,    3,    3,    3,    3,	
	2,    2,    2,    2,    4,    3,    3,    3,    3,	
	2,    2,    2,    2,    4,    3,    3,    3,    3,	
	2,    2,    2,    2,    4,    3,    3,    3,    3,	
	2,    2,    2,    2,    4,    3,    3,    3,    3,	
};


#include "endgame\\残局加分_0车.h"
#include "endgame\\残局加分_1车.h"
#include "endgame\\残局加分_2车.h"

#endif