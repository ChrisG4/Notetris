#pragma once
#include "CoreMinimal.h"

//BLOCK AND GRID DEFINITIONS
#define BLOCK_SIZE 52
#define WALL_LENGTH 12
#define WALL_HEIGHT 25

//GAMEPLAY 
#define GAME_OVER_HEIGHT 20
#define MOVE_DOWN_RATE 1.0f

//UPCOMING BLOCK FORMATS
#define UPCOMING_BLOCKS_NUMBER 4
#define UPCOMING_BLOCK_GAP 4

//ROW SCORES
#define ROW_FILLED_SCORE 100
#define TWO_ROWS_FILLED_SCORE 250
#define THREE_ROWS_FILLED_SCORE 500
#define FOUR_ROWS_FILLED_SCORE 1000

//SAVE DATA
#define HIGH_SCORE_SIZE 5
#define SAVE_DATA_NAME "SaveDataName"
#define SAVE_DATA_USER_INDEX 0

#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, text);