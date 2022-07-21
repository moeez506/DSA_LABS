#include <iostream>
#include <string>
using namespace std;

class twoWayStack {
    private:
       int top1, top2;
       int arr[10];
    public:
     twoWayStack(){
        top1 = -1;
        top2 = 10;
        for(int i=0; i<10; i++)
         arr[i]=0;
      }
     bool isFull(){
        if (top1 == top2 - 1)
        {
            return true;
        }
        return false;
    }

     bool isEmpty(){
        if (top1 == -1 && top2 == 10)
        {
            return true;
        }
        return false;
    }

     void push1(int val){
        if (isFull()){
            cout << "Stack is Overflow"<<endl;
        }else{
            top1++;
            arr[top1] = val;
        }
    }

     void push2(int val){
        if (isFull()){
            cout<<"Stack is Overflow"<<endl;
        }else{
            top2--;
            arr[top2] = val;
        }
    }
     int pop1(){
        int x;
        if (isEmpty()){
            cout<<"Stack is underflow"<<endl;
        }else{
            x = arr[top1];
            arr[top1]=0;
            top1--;
            return x;
        }
    }
     int pop2(){
        int x;
        if (isEmpty()){
            cout<<"Stack is underflow"<<endl;
        }else{
            x = arr[top2];
            arr[top2]=0;
            top2 ++;
            return x;
        }
        
    }
     void display(){
     if(isEmpty())
      cout<<"Stack is underflow"<<endl;
     else {
         for (int i=9; i>=0; i--){
             cout<<arr[i]<<endl;
         }
     } 
  }
    
};

int main(){
   twoWayStack st1;	
   int point, value;
   do {
   	 cout<<"Enter a value to choose a function and press 0 to exit"<<endl;
   	 cout<<"1.isFull()"<<endl;
   	 cout<<"2.isEmpty()"<<endl;
   	 cout<<"3.Push from top"<<endl;
   	 cout<<"4.Push from tail"<<endl;
   	 cout<<"5.Pop from top"<<endl;
   	 cout<<"6.Pop from tail"<<endl;
   	 cout<<"7.display()"<<endl;
   	 cin>>point;
   	 switch(point){
   	 	case 0:
   	 		cout<<"Program is terminated"<<endl;
   	 		break;
   	 	case 1:
			cout<<"isFull() is called"<<endl;
			st1.isFull();
			break;
		case 2:
		    cout<<"isEmpty() is called"<<endl;
			st1.isEmpty();
			break;
		case 3:
		    cout<<"Push from top is called"<<endl;
			int value;
			cout<<"Enter the value that you want to push"<<endl;
			cin>>value;
			st1.push1(value);
			break;
		case 4:
		    cout<<"Push from tail is called"<<endl;
			int value1;
			cout<<"Enter the value that you want to push"<<endl;
			cin>>value1;
			st1.push2(value1);
			break;
		case 5:
		    cout<<"Pop from top is called"<<endl;
			int x;
			x=st1.pop1();
			cout<<x<<endl;
			break;
		case 6:
		    cout<<"Pop from tail is called"<<endl;
			int y;
			y=st1.pop2();
			cout<<y<<endl;
			break;
		case 7:
		    cout<<"display() is called"<<endl;	
		    st1.display();
		    break;
		default:
		    cout<<"You have entered inappropriate value"<<endl;
			break;							
		}
   }while(point!=0);

    return 0;
}


