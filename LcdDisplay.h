/**
 * Include Libraries 
 */
#include "LiquidCrystal.h"
#include "String.h"




#pragma once

class LcdDisplay
{
	

	public:
		LcdDisplay(void);
		~LcdDisplay(void);
	protected:
		bool move(int lcdId, int x, int y);
		bool setBlock(int block);
		bool print(String string, int block);
	public:
		//Set up LCD ID for blocks
		int BLOCK_LCD_IDS[16];
		//Set up LCD ID for blocks
		int BLOCK_ROWS[16];
		//Set up LCD ID for blocks
		int BLOCK_COLS[16];
		LiquidCrystal* lcd[2];
		bool show(String toShow, int block);
	
};
