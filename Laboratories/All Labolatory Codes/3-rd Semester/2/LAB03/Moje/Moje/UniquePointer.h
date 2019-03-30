#ifndef UNIQUEPOINTER_H
#define UNIQUEPOINTER_H
#include "Object.h"


class UniquePointer {
public:
	UniquePointer(Object *nowy) : wsk_obiekt(nowy) 
	{
	//	std::cout << "Constructing pointer to " << wsk_obiekt->ZwrocName() << std::endl;
	};

	~UniquePointer() 
	{
		if (wsk_obiekt != NULL) {
			std::cout << "Destroying pointer to " << wsk_obiekt->ZwrocName() << std::endl;
			delete wsk_obiekt;
		}

	};
	UniquePointer(UniquePointer &wsk) : wsk_obiekt (wsk.get())
	{
		if (&wsk != this)
		{
			wsk.UstawObiekt(NULL);
		}

	};

	void print() const
	{

		if (wsk_obiekt == NULL)
		{
			std::cout << "This object does not point to anything" << std::endl;
		}
		else {
			std::cout << "This is pointer to " << wsk_obiekt->ZwrocName() << std::endl;
		}
	};

	Object* operator->()
	{
		return wsk_obiekt;
	};

	Object* get()
	{
	
		return wsk_obiekt;
	};

	UniquePointer& operator=(UniquePointer &tym)
	{
		if (this == &tym)
		{
			return *this;
		}
		wsk_obiekt = tym.get();
		tym.UstawObiekt(NULL);
		return *this;
	};

	void UstawObiekt(Object *ob)
	{
		wsk_obiekt = ob;

	};
	UniquePointer* operator=(Object *obiekt)
	{
		if (wsk_obiekt == NULL)
		{
			wsk_obiekt = obiekt;
		}

		if (wsk_obiekt != obiekt)
		{
			delete wsk_obiekt;
			wsk_obiekt = obiekt;
		}

		return this;
	};


private:
	Object *wsk_obiekt;




};

#endif