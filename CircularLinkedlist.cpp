#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    //constructor
    Node(int data){
        this->data=data;
        this->Next=NULL;
    }
};
void insertNode(Node* &tail, int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        tail->Next=tail;
    }
    else{
       Node* temp=new Node(d);
       temp->Next=tail->Next;
       tail->Next=temp;
       tail=temp;
    }
    cout<<endl;
}
void insertNodeAtposition(Node* &tail,int position,int d){
    Node* temp=tail->Next;
    int count=1;
    while(count < position){
        temp=temp->Next;
        count++;
    }
    Node* Nodeinsert=new Node(d);
    Nodeinsert=temp->Next;
    temp->Next=Nodeinsert;
}
bool detectloop(Node* tail){
    if(tail==NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp=tail;
    while(temp){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->Next;
    }
    return false;
}
void detectloop2(Node* tail){
    Node* slow=tail;
    Node* fast=tail;
    Node* temp=tail;
    while(temp!=NULL && slow!=fast){
        slow=slow->Next;
        fast=fast->Next->Next;
    }
    if(temp==NULL){
        cout<<" loop is not present";
    }
    else{
        cout<<"Loop is present";
    }
    cout<<endl;
}
void detectElement(Node* tail){
    Node* slow=tail;
    Node* fast=tail;
    Node* temp=tail;
    while(temp!=NULL && slow!=fast){
        slow=slow->Next;
        fast=fast->Next->Next;
    }
    if(slow==fast){
        Node* interNode=fast;
        Node* slow=tail;
        while(slow!=interNode){
            slow=slow->Next;
            interNode=interNode->Next;
        }
        if(slow==interNode){
            cout<<slow->data;
            cout<<endl;
            cout<<slow->Next->data;
        }
    }
}
void print(Node* &tail){
   Node* temp=tail->Next;
   while(temp!=tail){
    cout<<temp->data<<" ";
    temp=temp->Next;
   }
   cout<<tail->data;
}
int main(){
    Node* tail=NULL;
    insertNode(tail,5);
    print(tail);
    insertNode(tail,50);
    print(tail);
    insertNode(tail,11);
    print(tail);
     insertNode(tail,12);
    print(tail);
    insertNode(tail,23);
    print(tail);
     insertNode(tail,24);
    print(tail);
    cout<<endl;
    if(detectloop(tail)){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }
    cout<<endl;
    detectloop2(tail);
    detectElement(tail);
    //insertNodeAtposition(tail,3,88);
    //print(tail); // Not working this function
    }
    