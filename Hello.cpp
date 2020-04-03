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

