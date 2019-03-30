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

namespace OOP 
{
	class CFraction
	{
	public:
		CFraction(int l = 0, int m = 0, std::string Opis = "") : m_l(l), m_m(m), m_Opis(Opis)
		{}

		void SetOpis(const std::string& Opis) const
		{ m_Opis = Opis; }

		//Tak byæ nie mo¿e
		//void SetLM(int l, int m) const
		void SetLM(int l, int m)
		{ m_l = l; m_m = m; }

		void printOut() const
		{ std::cout << m_Opis << "= " << m_l << "/" << m_m << std::endl; }

	private:
		int m_l;
		int m_m;
		mutable std::string m_Opis;
	};
}//End of namespace OOP