// drifting queue using front and back
#include<iostream>
using namespace std;
int n=10;
int front=-1, back=-1;
bool isEmpty()
{
	if(front==-1 && back==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	if(back==(n-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enQueue(int m[])
{
	if(isFull())
	 cout<<"Queue is already full"<<endl;
	else if (front==-1 && back==-1){
		int value;
        cout<<"please Enter the value: ";
        cin>>value;
        front=0, back=0;
        m[back]=value;
	}	    
	else 
	{
		int value;
		cout<<"Enter the value to enqueue: "<<endl;
		cin>>value;
		back++;
		m[back]=value;
	}

}

void deQueue(int m[])
{
	if(isEmpty())
	{ 
	  front=-1;
	  cout<<"Queue is already empty"<<endl;	
	}
	else {
		if (front==back)
		 {
		 	m[front]= 0;
		 	back=-1;
		 	front=-1;
		 }
		else {
			m[front]= 0;
			front++;
		} 
	}
	
}
int main(){
	int position;
	int arr[n];
	for (int i=0; i<n;i++)
      arr[i]=0;	
	do {
		cout<<"Choose an option to perform a function"<<endl;
		cout<<"0. To exit the function"<<endl;
		cout<<"1. isFull()"<<endl;
		cout<<"2. isEmpty()"<<endl;
		cout<<"3. EnQueue()"<<endl;
		cout<<"4. DeQueue()"<<endl;
		cout<<"5. PrintQueue()"<<endl;
		cin>>position;
	switch(position){
	
		case 0:
	 	{
	       cout<<"Program eliminated";
	       break;	
		}
		case 1:
	 	{
	       cout<<"isFull() is called"<<endl;
	       isFull();
		   break; 
	  	}
	 	case 2:
	  	{
	  		cout<<"isEmpty() is called"<<endl;
	  		isEmpty();
	  		break;
		}
		case 3:
			{
				enQueue(arr);
				cout<<"New Value entered in the Queue !"<<endl;
				break;
			}
		case 4:
			{
				deQueue(arr);
				break;
			}
		case 5:
			{
				cout<<"Queue is:"<<endl;
				for(int i=0;i<n;i++){
                  cout<<arr[i]<<endl;}
				break;
			}
		default:
			{
				cout<<"You have entered inapropriate value"<<endl;
				break;	
			}
		}
	}while(position!=0);
	return 0;
}
