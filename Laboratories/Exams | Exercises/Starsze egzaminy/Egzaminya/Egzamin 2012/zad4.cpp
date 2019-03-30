#include <iostream>
using namespace std;
template<typename T> class stack{
private:
    struct wezel{
        wezel *next;
        T value;
    };
    wezel* head;
public:
    stack(){
        head=NULL;
    }
    ~stack(){
        delete head;
    }
    bool push(T a){
        wezel* nowy = new wezel;
        nowy->value=a;
        nowy->next=head;
        head=nowy;
        return true;
    }
    T top(){
        return head->value;
    }
    bool pop(){
        if(head){
            wezel* tmp = head;
            head=head->next;
            delete tmp;
            return true;
        }
    }
    bool isEmpty(){
        if(!head)
            cout << "Stos pusty\n";
        else
            cout << "Stos nie pusty\n";
    }
    void print(){
        for(wezel* tmp = head;tmp;tmp=tmp->next)
            cout<<tmp->value<<" ";
        cout<<endl;
    }
};
int main() {
    stack<int> s;
    s.isEmpty();
    for(int i=0; i<10; i++)
        s.push(i);
    s.print();
    for(int i=0; i<5; i++)
        s.pop();
    s.isEmpty();
    s.print();
    for(int i=0; i<5; i++)
        s.pop();
    s.print();
    s.isEmpty();
return 0;
}
