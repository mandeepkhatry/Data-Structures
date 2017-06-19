#include <iostream>
#include<cstdlib>
#define MAX 10
using namespace std;

class Queue {
private:
    int items[MAX];
    int front,rear;

public:
    Queue(){
        front=0;
        rear=-1;
    }

    void enqueue(int n){
        if(rear==MAX-1){
            cout<<"queue is full "<<endl;
            return;
        } else {
            rear+=1;
            items[rear]=n;
        }

    }
    int dequeue(){
        if(front>rear){
               cout<<"queue is empty";<<endl;
            return 0;
        } else{
		    int data;
		    data=items[front];
		    items[front]=0;
		    front+=1;

		    return data;
	    }
    }
};
int main(){
    Queue q;
    int ans,data;
    do{
        cout<<"1. Enqueue 2. Dequeue  3.exit"<<endl;
        cin>>ans;
        if(ans==1){
            cout<<"Enter data"<<endl;
            cin>>data;
            q.enqueue(data);
        }
        else if(ans ==2){
            cout<<"Dequeued data: "<<q.dequeue()<<endl;
        }

    }while(ans!=3);
    return 0;
}
