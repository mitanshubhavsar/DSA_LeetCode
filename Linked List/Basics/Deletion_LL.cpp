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

Node* DeleteHead(Node* head){
    Node* temp = head;
    // head = head->next;
    head = temp->next;
    free(temp);

    return head;
}

Node* DeleteTail(Node* head){

    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node* Delete_By_Value(Node* head, int val){
    Node* temp;
    

    if (head->data == val){
        temp = head;
        head = head->next;
        free(temp);

        return head;
    }
    
    
    Node* prev;
    temp = head;
    while (temp->data != val && temp)
    {
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = temp->next;
    free(temp);

    return head;
}

Node* Delete_At_K(Node* head,int k){
    // int count=0;
    
    
    if(head == NULL) return head;

    if(k == 1){
        head = DeleteHead(head);
        return head;
    }

    // Node* temp = head;
    // while (temp)
    // {   
    //     count++;
    //     temp = temp->next;
    // }
    // if(k==count){
    //     head = DeleteTail(head);
    // }
    
    int count = 1;
    Node* temp1 = head;
    while (count != k-1)
    {
        temp1 = temp1->next;
        count++;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp1->next->next;
    free(temp2);
    
    return head;
}

int main(){
    vector <int> arr = {2,5,6,7,3,8};
    Node* head = convertArr2LL(arr);
    
    // head = DeleteHead(head);
    printLL(head);
    cout<<endl;
    // head = DeleteTail(head);
    // printLL(head);

    // head = Delete_At_K(head,3);
    // printLL(head);
    
    head = Delete_By_Value(head,2);
    printLL(head);
}

