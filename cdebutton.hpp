//cdebutton.h

//Build a class for button
class CButton:public CBasic
{
	private:
		int x,y;
		int height,width;
		char color;
		char **fill;
	public:
		CButton(int x,int y,int h,int w,int clr,char **fill);
		void ShowCondow();
};


//cdebutton.cpp
CButton::CButton(int x,int y,int h,int w,int clr,char **fill):x(x),y(y),height(h),width(w),color(clr),fill(fill)
{
	
}

void ShowCondow()
{
	this->SetOutputPos(x,y);
	for(int i=0;i<=)
}

