
//CDE Basic Class
class CBasic
{
	public:
		SetOutputPos(short,short);
		SetOutputColor(char);
};

CBasic::SetOutputPos(short x,short y)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}

CBasic::SetOutputColor(char color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}


