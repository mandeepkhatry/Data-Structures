#include<iostream>
using namespace std;

const int null= 0;

class node{
int info;
node *next;
node *phead;
public:
    node(){
    phead=null;
    }
    void insertBeg(int data){
    node *temp=new node();
    temp->info =data;
    temp->next = null;
    if(phead==null){
        phead = temp;
    }
    else{
        temp->next = phead;
        phead = temp;

    }
    }
    void insertEnd(int data){
    node *temp=new node();
    temp->info =data;
    temp->next = null;
    if(phead==null){
        phead=temp;
    }
    else{
        node*p = phead;
        while((p->next!=null)){
            p=p->next;
        }
        p->next=temp;
    }
    }
    void insertnth(int data, int n){
    node *temp=new node();
    temp->info =data;
    temp->next = null;
    if(phead==null){
        phead=temp;
    }
    else{
        if(n==1){
            temp->next =phead;
            phead =temp;
        }
        else{
            int i;
            node* temp1=phead;
            for(i=1;i<(n-1);i++){
                temp1=temp1->next;
            }
            temp->next = temp1->next;
            temp1->next = temp;
        }
    }
    }
    void deleteBeg(){
        if(phead==null){
            cout<<"List empty"<<endl;
        }
        else{
            node *temp = phead;
            phead = temp->next;
            temp->next=null;
        }

    }

    void deleteEnd(){
        if(phead==null){
            cout<<"List empty"<<endl;
        }
        else{
        node*p = phead;

        while((p->next!=null)){
            p=p->next;
        }
        p->next = null;

        }
    }

    void deletenth(int n){
        if(phead==null){
            cout<<"List empty"<<endl;
        }
        else{
            int i;
            node* temp1=phead;
            if(n==1){
                phead = (temp1->next);
            }
            else{
            for(i=1;i<(n-1);i++){
                temp1=temp1->next;
            }
            temp1->next = (temp1->next)->next;
            }

        }
    }

    void display(){
        node *temp = phead;
        while(temp!= null){
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
};
int main(){
    node n;
    n.insertBeg(10);
    n.insertEnd(20);
    n.insertnth(30,3);
    n.display();
    cout<<"After deleting beginning elem"<<endl;
    n.deleteBeg();
    n.display();
    cout<<"After deleting end elem"<<endl;
    n.deleteEnd();
    n.display();
    cout<<"After deleting 1st elem"<<endl;
    n.deletenth(1);
    n.display();
    return 0;
}

