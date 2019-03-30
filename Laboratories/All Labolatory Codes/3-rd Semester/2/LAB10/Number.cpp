#include "Number.h"
#include "OutOfRange.h"

int Number::from = 0;
int Number::to = 0;

 Number** Number::array = 0;
 int Number::size = 0;

void Number::SetRange(const int from1, const int to1 )
{
	
	from = from1;
	to = to1;

}

Number::Number(const std::string name1, float value1): name(name1), value(value1)
{

}

Number* Number::Factory(const std::string name1, float value1)
{

	if(value1 < to && value1 >from)
	{
		Number *to_return = new Number(name1, value1);
		Add(to_return);
		return to_return;
	}
	throw OutOfRange(name1, value1);

}



void Number::Print()
{
	std::cout << name << " = " << value << std::endl;
}


void Number::Add(Number *number)
{
	if(size == 0)
	{
		array = new Number*[1];
		array[0]= number;
		size+=1;
	}
	else
	{
		Number **temp_array = new Number*[size+1];
		for(int i=0; i<size; i++)
		{
			temp_array[i] = array[i];
		}
		temp_array[size] = number;
		delete [] array;
		array = temp_array;
		size+=1;
	}

}

Number::~Number()
{

}

void Number::Destroy()
{
	for(int i=0; i<size; i++)
	{
		delete array[i];
	}
	delete [] array;
}