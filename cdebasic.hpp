//cdebasic.h

//CDE Basic Class
class CBasic
{
	private:
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		char color;
		short x;
		short y;
	public:
		void GetOutputInfo(CONSOLE_SCREEN_BUFFER_INFO*);
		void TranslateOutputInfo();
		CBasic();
		void SetOutputPos(short,short);
		void SetOutputColor(char);
		void ShowCondow();
};


//cdebasic.cpp
CBasic::CBasic()
{
	GetOutputInfo(&csbi);
	TranslateOutputInfo();
}

void CBasic::SetOutputPos(short x,short y)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}

void CBasic::SetOutputColor(char color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void CBasic::GetOutputInfo(CONSOLE_SCREEN_BUFFER_INFO* csbi)
{
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&this->csbi);
}

void CBasic::TranslateOutputInfo()
{
	color=csbi.wAttributes&0xff;
	x=csbi.dwCursorPosition.X;
	y=csbi.dwCursorPosition.Y;
}

void ShowCondow(){}

