class aClass
{
private:
	int alpha;
public:
	void nonFunc()
	{
		alpha = 99;
	}
	void conFunc() const
	{
		//alpha = 99; // error!!!!!!!
	}
};