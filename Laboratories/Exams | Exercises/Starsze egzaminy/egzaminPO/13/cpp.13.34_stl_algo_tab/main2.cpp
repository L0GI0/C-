class Bazowa { 
public: 
    int liczba;   
}; 
 
class Pochodna : public Bazowa { 
public: 
    Pochodna(int n) { liczba = n; } // nie mo�na u�y� listy inicjalizacyjnej 
}; 
 
int main() { 
    Pochodna Pobj(5); 
} 