#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node* printLL(Node* head){
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* InsertAtHead(Node* head, int val){
    Node* temp = new Node(val,head);

    return temp;
}

Node* InsertAtLast(Node* head, int val){
    Node* temp2 = new Node(val,nullptr);

    Node* temp1 = head;

    while (temp1->next)
    {
        temp1 = temp1->next;
    }
    
    temp1->next = temp2;
    return head;
}

Node* Insert_At_K(Node* head, int k, int val){
    
        if (head == NULL){
            if (k == 1){
                head = new Node(val,nullptr);
                return head;
            }
        }
        if(k==1){
            head = InsertAtHead(head,val);
            return head;
        }
        
        int count=0;
        Node* temp = head;
        while (temp)
        {
            count++;
            if(count == k-1){
                Node* temp1 = new Node(val,temp->next);
                temp->next = temp1;
                break;
                
            }
            temp = temp->next;
        }
        return head;    
               
}

Node* Insert_Before_val(Node* head, int k, int val){

    if(head == NULL){
        return NULL;
    }

    if(head->data == k){
        return new Node(val,head);
    }
    
    Node* temp = head;

    while (temp->next != NULL)
    {   
        if(temp->next->data == k){
            Node* temp1 = new Node(val,temp->next);
            temp->next = temp1;
            break;
        }
        temp = temp->next;
    }

    return head;
}

int main(){
    vector <int> arr = {2,5,6,7,3,8};
    Node* head = convertArr2LL(arr);
    printLL(head);
    cout<<endl;

    // head = InsertAtHead(head,1);
    // printLL(head);
    
    // head = InsertAtLast(head,7);
    // printLL(head);
    
    // head = Insert_At_K(head,8,20);
    // printLL(head);

    head = Insert_Before_val(head,2,20);
    printLL(head);
}

