#include <bits/stdc++.h>
using namespace std;

//Initial Using struct
// struct Node {
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }

//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };

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


int main(){
    vector <int> arr = {2,5,8,7};
    // Node* y = new Node(arr[0],nullptr);
    // cout<<y;

    //Without New Keyword throws error if access y
    // basicsLL.cpp:19:34: error: cannot convert 'Node' to 'Node*' in initialization
    // Node* y = Node(arr[0],nullptr);

    // Node y = Node(arr[0],nullptr);
    // cout<<y.data<<endl;
    // cout<<y.next<<endl;


    // Node* y = new Node(arr[0],nullptr);
//     cout<<y.data;
//     will give error:basicsLL.cpp: In function 'int main()':
// basicsLL.cpp:31:13: error: request for member 'data' in 'y', which is of pointer type 'Node*' (maybe you meant to use '->' ?)
//      cout<<y.data;
//              ^~~~
    Node* y = new Node(arr[0],nullptr);
    cout<<y->data;

}

