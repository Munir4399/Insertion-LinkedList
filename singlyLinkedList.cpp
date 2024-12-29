#include <iostream>
using namespace std;
struct Node{
    int data;// this will contain the value of the node
    Node*next; // this will contain the next pointer node 
    Node(int value){
        data=value;
        next=nullptr;
    }
};
class singliList{
    public:
    Node*head;
    singliList(){
        head=nullptr;
    }
    void insertionAthead(int data){
        Node*newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    // display the Node
    void display(){
        Node*temp;
        temp=head;
        if(head==nullptr){
            cout<<"the list is empty"<<endl;
            return;
        }
       while (temp!=nullptr)
       {
        cout<<temp->data<<"->";
        temp=temp->next;
       }
      
       
    }
    
};
int main(){
    singliList list;
    // inserting the linked list data
    list.insertionAthead(10);
    list.insertionAthead(20);
    // display the result here
    list.display();
    cout<<endl;
    return 0;

}