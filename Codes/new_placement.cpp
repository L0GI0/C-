#include <iostream>
#include <cstdlib>
#include <cstring>
#include <new>


using namespace std;


struct chaff{
char dross[20];
int slag;
};

const int BUFF_SIZE = sizeof(struct chaff) * 2;
char *BUFFER = new char[BUFF_SIZE];

int main(void){
int i;
struct chaff *ptr1 = new (BUFFER) chaff[2];

/*
ptr1[0] = (chaff) {"Smiec", 1};
ptr1[1] = (chaff) {"Garbage", 2};
*/
	strncpy(ptr1[0].dross, "Smiec", 19);
	ptr1[0].slag = 1;
	strncpy(ptr1[1].dross, "Garbage", 19);
	ptr1[1].slag = 2;
	
for(i = 0; i < 2; i++){
	cout << ptr1[i].dross << ", " << ptr1[i].slag << endl;
}
}