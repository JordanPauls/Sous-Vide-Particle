#ifndef Sous_h
#define Sous_h


// commands
#define LCD_CLEARDISPLAY 0x01
#define LCD_RETURNHOME 0x02


class Sous {
public:
  FuncOne(uint8_t rs, uint8_t enable,
		uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
		uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);
  FuncOne(uint8_t rs, uint8_t rw, uint8_t enable,
		uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
		uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);

  void FuncTwo(uint8_t fourbitmode, uint8_t rs, uint8_t rw, uint8_t enable,
	    uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
	    uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);

  double FuncThree(uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS);

private:
  void send(uint8_t, uint8_t);

};

#endif
