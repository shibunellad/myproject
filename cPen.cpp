class MyPen
{
	public:
		MyPen();
		MyPen(char * Name);
		~MyPen();
	private:
		int m_PenType;
		char * m_Name;
		void GetPenName();
};

MyPen::MyPen
{
	m_Name = "Default";
}

MyPen::MyPen(char * Name)
{
	m_Name = Name;
}

void testPen()
{
	MyPen* ballPen= new MyPen;
	ballPen.m_Name = "Reynolds";
}