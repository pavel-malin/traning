// not a working program

class AClass   // a class
{
public:
	class AnError  // exception class
	{

	};
	void Funcn()  // a member function
	{
		if (/* error condition */)
			throw AnError();  // tthrow exception
	}
};

int main()		// application
{
	try		 // try block
	{
		AClass obj1;  // interatct with AClass objects
		obj1.Funcn();  // may cause error
	}
	catch (AClass::AnError)  // exception handler 
	{				// (catch block)
			// tell  user about error, etc.
	}
	return 0;
}