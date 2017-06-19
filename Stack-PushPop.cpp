#include <iostream>

using namespace std;

class Stack
{
private:
    int *p;
    int top,length;

public:
    Stack(){
        top=-1;
        cout<<"Enter size"<<endl;
        cin>>length;
        if(length == 0)
            p = 0;
        else
            p=new int[length];
    }
    ~Stack(){
        if(p!=0)
        delete [] p;
    }

    void push(int elem){
        if(p==0){
            cout<<"Stack of zero size"<<endl;
        }
        if(top==(length-1)){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top+=1;
            p[top]=elem;
        }

    }
    void pop(){
        if(top==-1){
            cout<<"Stack empty"<<endl;
        }
        else{
            top--;
        }

    }
    void display(){
        cout<<"Current stack"<<endl<<endl;
        for(int i = top; i >= 0; i--){
            cout<<"-----"<<endl;
            cout<<"|"<<p[i]<<"|"<<endl;
        }
    }
};

int main()
{
    Stack s1;
    char qn;
    cout<<"Do u want to continue.Press y for yes n for no."<<endl;
    cin>>qn;
    int option;
    int data;
    while(qn!='n'){
    cout<<"Press :"<<endl;
    cout<<"1 for push."<<endl;
    cout<<"2 for pop."<<endl;
    cout<<"3 for print."<<endl;
    cin>>option;
    if(option==1){
        cout<<"Push a number"<<endl;
        cin>>data;
        s1.push(data);
    }
    if(option==2){
        s1.pop();
    }
    if(option==3){
        s1.display();
    }
    cout<<"Do u want to continue.Press y for yes n for no."<<endl;
    cin>>qn;
    }
}
