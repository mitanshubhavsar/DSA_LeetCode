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

int LengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}

bool SearchInLL(Node* head,int target){
    Node* temp = head;

    while (temp)
    {
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    vector <int> arr = {2,5,8,7,5,8,2};
    Node* head = convertArr2LL(arr);
    
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" "<<temp->next;
        cout<<endl;
        temp = temp->next;
    }
    
    cout<<LengthOfLL(head);
    cout<<endl;
    cout<<SearchInLL(head,10);
}

