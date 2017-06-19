#include <iostream>
using namespace std;

const int size=10;
class Queue
{

	private:
 	int front; // index at front
 	int back; // index at rear queue
 	char items[size]; //store item in Q

	public:
 	Queue(); // Constructor - create Q
 	//~Queue(); // Destructor - destroy Q
 	//bool isEmpty(); // check Q empty
 	//bool isFull(); // check Q full
 	void enQueue(char); // insert into Q
 	void deQueue(char); // remove item from Q
 	void show();
 	//char getFront(); // get item at Front
 	//char getRear(); // get item at back Q
};

	Queue::Queue()
	{ front = 0;
 		back = -1;

	}

/*		Queue::~Queue()
	{
		delete[]items;
	}

	bool Queue::isEmpty()
	{
		return bool (back < front);
	}

	bool Queue::isFull()

		{return bool(back==size-1);

	}*/

	void Queue::enQueue(char insertItem)
	{ if (back==size-1)
 		cout<<"\nCannot Insert. Queue is full!";
		 else
 		{ //insert at back
 	    	cout<<"enter data to enqueue"<<insertItem;
 			back++;
			 items[back] = insertItem;
		 } // end else if
	}

/*	char Queue:: getFront() // get item at Front
	{
		return items[front] ;
	}

	char Queue::getRear() // get item at Back
	{
		return items[back] ;
	}
*/	void Queue::deQueue(char deletedItem)
	{ if (back<front)
 		cout<< "\nCannot remove item. Empty Queue!";
 		else
 		{ //retrieve item at front
 			cout<<"the data dequeue is: "<<deletedItem;
 			deletedItem = items[front];
 			front++;
 		} // end else if
	}

	void Queue::show()
	{
	    if(front==back)
                     {
                          cout <<" queue empty";
                          return;
                     }
                   for(int x=front+1;x<=back;x++)
                   cout<<items[x]<<" ";
               }

int main ()
{
	 int choose;
      Queue queue;
      while(1)
        {
      cout<<"\n";
      cout<<"\n\t\t MENU\n\n";
      cout<<"1:ADD, 2:REMOVE, 3:SHOW, 4:EXIT";
      cout<<"\nChoose the menu: ";
      cin>>choose;

          switch(choose)
          {
               case 1: cout <<"enter the element: ";
  					   cin >> choose;
  					   queue.enQueue(choose);
   					   break;
               case 2: queue.deQueue(choose); break;
               case 3: queue.show(); break;
                           case 4:

                break;

            default:
                cout<<"\nInvalid Input. Try again! \n";
                break;
        }
    }
    return 0;
}
