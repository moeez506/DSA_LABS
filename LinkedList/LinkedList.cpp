
//linkedList
#include<iostream>
using namespace std;
class linkedList{
    public:
    int data;
    linkedList* pointer;
};

void showLinkedList(linkedList *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->pointer;
    }
}
int main(){
    linkedList *firstHead = new linkedList();
    linkedList *secondHead = new linkedList();

    firstHead->data=45;
    firstHead->pointer=secondHead;

    secondHead->data=78;
    secondHead->pointer=NULL;

    showLinkedList(firstHead);

    return 0;
}