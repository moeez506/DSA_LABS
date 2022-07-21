#include<iostream>
using namespace std;
int N,n;
bool isFull(){
    if(N==n){
        return true;
    }
    else return false;
}
bool isEmpty(){
    if(N==0){
        return true;
    }
    else return false;
}


void insertAtStart(int  m[]){
    if(isFull()){
        cout<<"Memory is Already full"<<endl;
    }else{
        int val;
        cout<<"Enter the value that you want to store at the start: ";
        cin>>val;
        for(int i=N;i>0;i--){
            m[i]=m[i-1];
        }
        m[0]=val;
        N++;
    }

}
void insertAtBtw(int m[]){
    if(isFull()){
        cout<<"Memory is Already full"<<endl;
    }else{
        int pos, val;
        cout<<"Enter the index: ";
        cin>>pos;
        cout<<"Enter the value that you want to enter: ";
        cin>>val;
        for(int i=N;i>pos;i--){
            m[i]=m[i-1];
        }
        m[pos]=val;
        N++;
    }

}
void insertAtEnd(int m[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int val;
        cout<<"Enter the value that you want to enter: ";
        cin>>val;
        m[N]=val;
        N++;
    }

}
void deleteAtStart(int m[]){
	 if(isEmpty()){
        cout<<"Memory is already empty."<<endl;
    }else{
    for(int i=0;i<=N;i++){
        m[i]=m[i+1];
    }
    m[N]=0;
    N--;
}

}
void deleteAtBtw(int m[]){
	 if(isEmpty()){
        cout<<"Memory is already Empty."<<endl;
    }else{
    int pos;
    cout<<"Please Enter the index where you want to delete the value: ";
    cin>>pos;
    for(int i=pos;i<=N;i++){
        m[i]=m[i+1];
    }
    m[N]=0;
    N--;
}
}
void deleteAtEnd(int m[]){
	 if(isEmpty()){
        cout<<"Memory is already Empty."<<endl;
    }
	else{
      m[N-1]=0;
      N--;
   }
}
void searchInArray(int m[]){
    int val,count=0;
    if(isFull()){
        cout<<"memory is already full"<<endl;
    }else{
        cout<<"Please Enter the value: ";
            cin>>val;
        for(int i=0;i<N;i++){
            if(val==m[i]){
                count=count+1;
            }
        }
        if(count==0){
            cout<<"value not found"<<endl;
        }else{
        cout<<"your Value "<<val<<" found: "<<count<<" times."<<endl;
        }
    }

}
void updateInArray(int m[]){
    int val,newVal, count=0;
    cout<<"Enter the value that you want to update: ";
    cin>>val;
    for(int i=0;i<N;i++){
        if(val==m[i]){
            cout<<"Enter new Value: ";
            cin>>newVal;
            m[i]=newVal;
            count=count+1;
            
        }
    }
    if(count==0){
        cout<<"value not found"<<endl;
    }else{
        cout<<"update list"<<endl;
        for(int i=0;i<N;i++){
            cout<<m[i]<<endl;
        }
    }
}
 int main(){
     N=0;
     int n=10;
        int arr[n]={1,2,2,3,4,5,2,6,0,0};
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                N++;
                continue;
            }
            break;
        }
        int point;
        do{
            cout<<"Choose an option to perform a function, press 0 to exit."<<endl;
            cout<<"1. Insert in the list"<<endl;
            cout<<"2. Delete in the list"<<endl;
            cout<<"3. Search in the list"<<endl;
            cout<<"4. Update in the list"<<endl;
            cin>>point;
            switch(point){
            case 0:
                cout<<"Program is terminated"<<endl;
                break;
            case 1:
                {
                int i=0;
                do{
                 cout<<"Choose an option to perform a function, press 0 to exit."<<endl;
            cout<<"1. Insert at Start"<<endl;
            cout<<"2. Insert at between"<<endl;
            cout<<"3. Insert at end"<<endl;
                int getter;
                cout<<"Please select the value: ";
                cin>>getter;
                    if(getter==0){
                        break;
                    }else if(getter==1){
                        cout<<"List before inserting"<<endl;
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                      }
                      insertAtStart(arr);
                      cout<<"list after inserting"<<endl;
                      for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                      }
                    }else if(getter==2){
                        cout<<"List before inserting"<<endl;
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                        }
                        insertAtBtw(arr);
                        cout<<"List after inserting"<<endl;
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<endl;
                        }
                    }else if(getter==3){
                        cout<<"List before inserting"<<endl;
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                        }
                        insertAtEnd(arr);
                        cout<<"List after inserting"<<endl;
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<endl;
                        }
                    }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                }while(i<2);
                }
            break;
            case 2:
                {
                int i=0;
                do{
                 cout<<"Choose an option to perform a function, press 0 to exit."<<endl;
            cout<<"1. Delete from start"<<endl;
            cout<<"2. Delete from between"<<endl;
            cout<<"3. Delete from last"<<endl;
                int getter;
                cout<<"Please select the value: ";
                cin>>getter;
                    if(getter==0){
                        break;
                    }else if(getter==1){
                        cout<<"List before deleting"<<endl;
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                      }
                      deleteAtStart(arr);
                      cout<<"List after deleting"<<endl;
                      for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                      }
                    }else if(getter==2){
                        cout<<"List before deleting"<<endl;
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                        }
                        deleteAtBtw(arr);
                        cout<<"List after deleting"<<endl;
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<endl;
                        }
                    }else if(getter==3){
                        cout<<"List before deleting"<<endl;
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<endl;
                        }
                        deleteAtEnd(arr);
                        cout<<"List after deleting"<<endl;
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<endl;
                        }
                    }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                }while(i<2);
                }
            break;
            case 3:{
                searchInArray(arr);
            }
            break;
            case 4:{
                updateInArray(arr);
            }
            break;
            default:
                cout<<"please Enter the valid number"<<endl;
                break;
            }


        }while(point!=0);
        
     return 0;
 }
