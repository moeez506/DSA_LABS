// top at 0
#include<iostream>
#include<string>
using namespace std;

int n,N;
bool isFull(){
	if(N==n)
	 return true;
	else
	 return false;
}
bool isEmpty(){
	if(N==0)
	 return true;
	else
	 return false;
}
void EnQueue(int m[]){
	if(isFull())
	 cout<<"Queue is already full"<<endl;
	else{
		int val;
	cout<<"Enter the value that you want to Enqueu"<<endl;
	cin>>val;
	int prior;
	do{
		cout<<"Choose a number to store according to priority"<<endl;
		cout<<"1. High priority"<<endl;
		cout<<"2. Mid priority"<<endl;
		cout<<"3. Low priority"<<endl;
		cin>>prior;
		switch(prior){
			case 1:
				{
			  for(int i= N; i>0;i--){

		        m[i]= m[i-1];
			  }
	         m[0]=val;
		     N++;
		     for(int i=0; i<N; i++){

            cout<<m[i]<<endl;
		     }
			 prior=0;
		     break;
	}
	        case 2:
	        	{
//	        	    cout<<N;
	        	int j= N/2;
	        	for(int i=N;i>j; i--){
	        	 m[i]=m[i-1];
	        	}
	        	m[j]=val;
				N++;
				for(int i=0; i<N; i++)
                {

                    cout<<m[i]<<endl;

                }
				prior=0;
				}
				break;
			case 3:
			    m[N]= val;
				N++;
				for(int i=0; i<N; i++){

                cout<<m[i]<<endl;
				}
				prior=0;
				break;
			default:
			 cout<<"You have entered inappropriate number"<<endl;
		}
	}while(prior!=0);
	}
}
void DeQueue(int m[]){
	if (isEmpty())
	 cout<<"Queue is already Empty"<<endl;
	else{
	cout<<"DeQueued value is:  "<<m[0]<<endl;
	  for (int i=0; i<N;i++)
	     m[i]=m[i+1];
	N--;
}
}
void display(int m[]){
	for(int i=0; i<N; i++)
	 cout<<m[i]<<endl;
}
int main(){
	N=0;
	n=10;
	int arr[n]={2,3,4,5,3,4};
	for (int i=0;i<n; i++){
		if(arr[i]!=0){
		 N++;
		 continue;
	}
	    break;

	}
	int point;
	do{
		cout<<"Choose following functions which you want to execute. Press 0 if you want to exit"<<endl;
		cout<<"1. isFull()"<<endl;
		cout<<"2. isEmpty()"<<endl;
		cout<<"3. Enqueue()"<<endl;
		cout<<"4. Dequeue()"<<endl;
		cout<<"5. display()"<<endl;
		cin>>point;
	switch(point)
	{
	case 0:
	 cout<<"Function closed"<<endl;
	 break;
	case 1:
	  cout<<"isFull() is called"<<isFull()<<endl;
	  break;
	case 2:
	  cout<<"isEmpty() is called"<<isEmpty()<<endl;
	  break;
	case 3:
	  cout<<"Enqueue() is called"<<endl;
		EnQueue(arr);
		break;
	case 4:
	  cout<<"Dequeue() is called"<<endl;
	  DeQueue(arr);
	  break;
	case 5:
	  cout<<"display() is called"<<endl;
	   display(arr);
	   break;
	default:
		cout<<"You have entered inappropriate value"<<endl;
}
	}while(point!=0);
	return 0;
}
