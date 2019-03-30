
#include "Main.h"

typ::typ(): m_miotacz(NULL) {}

typ::~typ() { if (m_miotacz) delete m_miotacz; }