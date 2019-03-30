#include "Main.h"

void ObiektMiotajacy::Rzuc()
{
	typ2 * t2 = new typ2;
	delete this;
	throw (t2);
}
