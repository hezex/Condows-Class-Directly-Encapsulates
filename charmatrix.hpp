//charmatrix.h

struct charmatrix
{
	int width,height;
	char **dat;
	charmatrix(int,int);
	~charmatrix();
	char *const operator [](const int);
	char *const operator =(const char**);
};


//charmatrix.cpp

charmatrix::charmatrix(int w,int h)
{
	width=w;height=h;
	dat=new char*[height];
	for(int i=0;i<height;i++) dat[i]=new char[w];
}

charmatrix::~charmatrix()
{
	for(int i=0;i<height;i++) delete[] dat[i];
	delete[] dat;
}

char *const charmatrix::operator [](const int i)
{
	return dat[i];
}

