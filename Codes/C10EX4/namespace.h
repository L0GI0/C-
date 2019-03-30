#ifndef _NAME_SPACE_
#define _NAME_SPACE_

namespace SALES{
	const int QUARTERS = 4;
	class Sales{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
		// copies the lesser of 4 or n items from the array ar
		// to the sales member of s and computes and stores the
		// average, maximum, and minimum values of the entered items;
		// remaining elements of sales, if any, set to 0
	public:	
		Sales(const double ar[], int n);
		// gathers sales for 4 quarters interactively, stores them
		// in the sales member of s and computes and stores the
		// average, maximum, and minimum values
		Sales();
		Sales(Sales &);
		// display all information in stru
		void showSales() const;
	};
}
#endif