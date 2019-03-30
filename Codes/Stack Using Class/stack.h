#ifndef _STACK_
#define _STACK_

struct customer {
	char fullname[35];
	double payment;
};	

const int MAX = 10;

typedef customer Item;

	class Stack{
	private:
		enum { MAX = 10};
		Item items[MAX];
		int top;
	public:
		Stack();
		bool pop(Item &);
		bool push(const Item &);
		bool isfull();
		bool isempty();
	};
#endif