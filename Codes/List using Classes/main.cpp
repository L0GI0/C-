#include "list.h"
#include <iostream>
using namespace std;

int main(void){
    List listObject;
    int i;
    int values[] = {2, 3, 43, 12, 14, 9};
    for(i = 0; i < sizeof(values)/sizeof(int); i++){
        listObject.addItem(values[i]);
    }
    listObject.printList();
    return 0;
}