#include <iostream>
#include <cstring>
using namespace std;


class Plorg{
	private:
		    char name[20];
		    int CI;
    public:	
    	Plorg(){
    		strcpy(name, "Plorga");
    		CI = 50;
    	}
    	Plorg(char name[], int CI = 50){
    		strncpy(this->name, name, 19);
    		this->CI = CI;
    	}
    	void showPlorg(){
    		cout << "Name: " << name << endl;
    		cout << "CI: " << CI << endl; 
    	}
    	void changeCI(int CI){
    		this->CI = CI;
    	}
};


int main(void){

	Plorg plorgObject1("Name1", 30);
	Plorg plorgObject2;
	plorgObject1.showPlorg();
	plorgObject2.showPlorg();
	plorgObject1.changeCI(23);
	plorgObject1.showPlorg();


	return 0;
}