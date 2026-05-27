#include <iostream>
class logic
{
public:
	void setup();
	bool set_x(int x, int y);
	bool set_o(int x, int y);
	void done(bool &tie, bool &xwon, bool &owon);
	char getChar(int x, int y);
private:
	char board[3][3];
};

