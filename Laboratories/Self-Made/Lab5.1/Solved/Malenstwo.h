#pragma once

#include <iostream>


class Malenstwo{
    public:
        Malenstwo();
        Malenstwo(int val);

        int& wartosc();

        static void *operator new[](size_t size);
        static void *operator new(size_t size);
        static void operator delete(void *objc, size_t size);
        static void operator delete[](void *objc, size_t size);
    private:
        int m_val;
};


class Helpfull{
    friend class Malenstwo;
    private:
        static int m_counter;
        static Malenstwo *m_tab;
};

class MalenstwoSamoSprzatacz{
    public:
        MalenstwoSamoSprzatacz(Malenstwo *mal);
        ~MalenstwoSamoSprzatacz();

        Malenstwo *operator ->();
    private:
        Malenstwo *m_mal;
};

