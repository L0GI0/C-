#ifndef _CFRACTION_H_
#define _CFRACTION_H_

#include <iostream>
#include <exception>

namespace OOP 
{
	class CFraction
	{
	public:

		class MianZero : public std::exception
		{ public: const char* what() const throw() {return "mianownik = 0"; }	};

		class ReadError : public std::exception
		{ public: const char* what() const throw() {return "blad odczytu lub konwersji"; }	};

		friend std::ostream& operator<<(std::ostream& o, const CFraction& K)
		{
			o << K.m_l << '/' << K.m_m << '\n';
			return o;
		}
		friend std::istream& operator>>(std::istream& i, CFraction& K) throw(CFraction::MianZero, CFraction::ReadError)
		{
			char znak;
			int l, m;
			
			i >> l >> znak >> m;

			if(!i || znak != '/')
			{
				i.clear(~std::ios::failbit & std::ios::goodbit);
				i.ignore(255, '\n');
				throw ReadError();
			}

			if(m == 0)
				throw MianZero();
			
			if(m < 0)
			{
				K.m_l = -l;
				K.m_m = -m;
			}
			else
			{
				K.m_l = l;
				K.m_m = m;
			}
			return i;
		}

		CFraction(int l = 0, int m = 1) : m_l(l), m_m(m)
			{}
		
	private:
		int m_l;
		int m_m;
	};

/////////////////////////////////////////////////////////////////////////
	CFraction ReadFraction()
	{
		CFraction x;
		bool error;

		do
		{
			error = false;

			try
			{
				std::cout << "Podaj u�amek = ";
				std::cin >> x;
			}
			catch(const std::exception& e)
			{
				std::cout << "Wyjatek: "<< e.what() << std::endl;
				error = true;
			}

		}while(error);
		
		return x;
	}
}//End of namespace OOP

#endif //_CFRACTION_H_