//cdebutton.h

//Build a class for button
class CButton:public CBasic
{
	private:
		int top,buttom;
		int left,right;
		charmatrix color;
		charmatrix fill;
	public:
		CButton(int,int,int,int,charmatrix,charmatrix);
		~CButton();
		void ShowCondow();
};


//cdebutton.cpp
CButton::CButton(int t,int b,int l,int r,charmatrix clr,charmatrix fill):top(t),buttom(b),left(l),right(r),
color(r-l+1,b-t+1),fill(r-l+1,b-t+1)
{
//	for(int i=0;i<=b-t;i++)
//		for(int j=0;j<=r-l;j++)
//		{
//			this->color[i][j]=clr[i][j];
//			this->fill[i][j]=fill[i][j];
//		}
	this->color=clr;
	this->fill=fill;
}

void CButton::ShowCondow()
{
	for(int i=top;i<=buttom;i++)
		for(int j=left;j<=right;j++)
		{
			SetOutputPos(j,i);
			SetOutputColor(color[i][j]);
			printf("%c",fill[i][j]);
		}
}

CButton::~CButton()
{
}
 
