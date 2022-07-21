#include<iostream>
#include<string>
 
using namespace std;
int top;
int arr[5];

  bool isEmpty(){
      if(top==-1)
        return true;
      else
       return false;
  }
  bool isFull(){
      if(top==4)
        return true;
      else
       return false;
  }
  void push(int val){
    if(isFull())
     cout<<"Stack overflow"<<endl;
    else{ 
      top++;
      arr[top]= val;
    }
  }
  int pop(){
     if(isEmpty())
     cout<<"Stack underflow"<<endl;
    else{  
      int popValue = arr[top];
      arr[top]= 0;
      top--;
      return popValue;
    }
  }

  void display(){
     if(isEmpty())
      cout<<"Stack underflow"<<endl;
     else {
         for (int i=4; i>=0; i--){
             cout<<arr[i]<<endl;
         }
     } 
  }
int main(){
    top = -1;
    for (int i=0; i>5; i++)
      arr[i]=0;
	int point,position,value;
	do{
		cout<<"Choose an option to perform a function and press 0 to exit the function"<<endl;
		cout<<"1. isFull()"<<endl;
		cout<<"2. isEmpty()"<<endl;
		cout<<"3. push()"<<endl;
		cout<<"4. pop()"<<endl;
		cout<<"5. display()"<<endl;
		cin>>point;
		switch(point){
			case 0:
				cout<<"Program exited."<<endl;
				break;
			case 1:
			    cout<<"isFull() is called"<<endl;
				if(isFull())
				  cout<<"Stack overflow"<<endl;
				else
				  cout<<"Stack is not full."<<endl;  
				break;
			case 2:
			    cout<<"isEmpty() is called"<<endl;
				if(isEmpty())
				 cout<<"Stack underflow"<<endl;
				else
				 cout<<"Stack is not empty"<<endl; 
				break;
			case 3:
			    cout<<"push() is called"<<endl;
				cout<<"Enter the value that you want to push"<<endl;
				cin>>value;
				push(value);
				break;
			case 4:
			    cout<<"pop() is called"<<endl;
			    int x;
				x=pop();
				cout<<x;
				break;
			case 5:
			    cout<<"display() is called"<<endl;
				display();
				break;
			default:
			    cout<<"You have entered inappropriate value"<<endl;	
				break;					
					
		}	
		
	}while(point!=0);
		
	return 0;
}
