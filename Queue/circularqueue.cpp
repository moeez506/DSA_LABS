// Circular Queue
#include<iostream>
using namespace std;
int n=10;
int Front=-1, Back=-1;
bool isFull(){
    if(((Back+1)%n )== Front ){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(Front==-1 && Back==-1){
        return true;
    }else{
        return false;
    }
}
void Enqueue(int m[]){
    int val;
    if(isFull()){
        cout<<"Queue is already full"<<endl;
    }else if(Front==-1 && Back==-1){
        int i= Front;
        cout<<"Enter a value to Enqueue: ";
        cin>>val;
        Front=0,Back=0;
        m[Back]=val;
        while(i!=Back){
            i= ((i+1)%n);
            cout<<m[i]<<endl;

        }
    }else{
        int i= Front;
        cout<<"Please Enter the value: ";
        cin>>val;
        Back= ((Back+1)%n);
        m[Back]=val;
            cout<<m[i]<<endl;
        while(i!=Back){
            i= ((i+1)%n);
            cout<<m[i]<<endl;

        }
    }
}
void Dequeue(int m[]){
     int i= Front;
    if(isEmpty()){
        cout<<"Queue is already empty"<<endl;
    }else if(Front == Back){
        cout<<"Dequeue element is "<<m[Front]<<endl;
        Back=-1,Front=-1;
    }else{
        cout<<"Dequeue element is "<<m[Front]<<endl;
        Front = ((Front+1)%n);
        while(i!=Back){
            i= ((i+1)%n);
            cout<<m[i]<<endl;
        }
    }
}
void display(int m[]){
	  for (int i=0; i<n;i++)
	    cout<<m[i]<<endl;
}

int main(){
    int arr[n];
    for (int i=0; i<n;i++)
         arr[i]=0;
	int point;
	do{
		cout<<"Choose a value to perform a function or press 0 to exit."<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. display()"<<endl;
		cin>>point;
		switch(point){
			case 0:
				cout<<"Program is eliminated"<<endl;
				break;
			case 1:
			    cout<<"Enqueue() is called"<<endl;
				Enqueue(arr);
				break;
			case 2:
			    cout<<"Dequeue() is called"<<endl;
				Dequeue(arr);
				break;	
			case 3:
			    cout<<"display() is called"<<endl;
				display(arr);
				break;	
			default:
			    cout<<"You have entered an inappropriate value"<<endl;
				break;		
		}
	}while(point!=0);    
    return 0;
}
