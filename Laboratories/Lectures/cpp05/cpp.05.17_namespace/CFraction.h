/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 14-10-2004
/// \brief Classes: Convertions 3
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

namespace OOP {
	class CFraction
	{
	public:
		friend CFraction multi1(CFraction *a, CFraction *b);
		friend CFraction multi2(CFraction &a, CFraction &b);

		CFraction(int l = 0, int m = 1) : m_l(l), m_m(m)
			{}
		
		//funkcja konwertuj¹ca do float
		operator float() const
		{ 
			std::cout << "\nDziala funkcja konwertujaca do float." << std::endl;
			return (float)m_l/(float)m_m; 
		}
		
		void print() const
		{ std::cout << m_l << "/" << m_m << std::endl; }

	private:
		int m_l;
		int m_m;
	};
}//End of namespace OOP