#include <iostream>
#include <cstring>
#include <exception>
#include <string>

class my_exception:public std::exception
{
public:
	explicit my_exception(const std::string name1):name(name1)
	{};
	const char* what()const throw()
	{
		return name.c_str();
	}
	virtual ~my_exception()throw(){};


private:
	std::string name;
};

class string
{
int roz ;
char *wsk;
  // długość napisu

public:
	string():roz(0),wsk(NULL){};
	string(const char n[]):roz(strlen(n)),wsk(new char[strlen(n)])
	{
			for (int i = 0; i < roz; ++i)
		{
			wsk[i] = n[i];
		};

	};
	string(const string &str):roz(str.roz),wsk(new char[str.roz])
	{
		std::cout<<"konsturktor kopiujacy" << std::endl;
		for (int i = 0; i < roz; ++i)
		{
			wsk[i] = str.wsk[i];
		};
	};

	~string()
	{	
		if(wsk)
		{
			delete [] wsk;
			wsk = NULL;
		}


	};
	string& operator=(const char n[])
	{
		
		if(n[0] =='\0')
		{
			throw my_exception("Pusty lancuch1");
		}
		if(roz !=0)
		{
			delete [] wsk;
			roz = strlen(n);
			wsk = new char[strlen(n)];
			for (int i = 0; i < roz; ++i)
			{
				wsk[i] = n[i];
			};
		}
		else
		{

			roz = strlen(n);
			wsk = new char[strlen(n)];
			for (int i = 0; i < roz; ++i)
			{
				wsk[i] = n[i];
			};

		}

		return *this;
		
	};
	string& operator=(const string &str)
	{
		
		if(str.roz == 0)
		{
			throw my_exception("Pusty lancuch");
		}
		if(roz !=0)
		{
			delete [] wsk;
			roz = str.roz;
			wsk = new char[str.roz];
			for (int i = 0; i < roz; ++i)
			{
				wsk[i] = str.wsk[i];
			};
		}
		else
		{

			roz = str.roz;
			wsk = new char[str.roz];
			for (int i = 0; i < roz; ++i)
			{
				wsk[i] = str.wsk[i];
			};

		}

		return *this;
		
	};

	void print()const
	{
		for (int i = 0; i < roz; ++i)
		{
			std::cout << wsk[i];
		};

	};

};



int main()
{

  char *abc = new char('a');
  char **pointer = &abc;
  const int a = 5;
  const int* const pointer1 = &a;


  const char *ciag = "abxd";
  const char *ciag1 = "";
  string obj(ciag);
  obj.print();
  std::cout << std::endl;
  try
  {
  	  string obj2;
  	  obj2 = obj;
  	  obj2.print();
  	  std::cout << std::endl;
  	  obj2 = ciag1;
  	  obj2.print();
  }
  catch(my_exception &obj)
  {
  	std::cout << obj.what();
  }
  


	return 0;
}