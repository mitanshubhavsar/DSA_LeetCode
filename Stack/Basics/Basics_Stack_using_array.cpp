#include <iostream>
using namespace std;

//Implement it with array
class Stack
{
    int *arr;
    int size;
    int top;

    public:
    bool flag;

    Stack(int s){
        size = s;
        top = -1;
        arr = new int [s];
        flag = 1;
    }

    //Push
    void push(int value){
        if(top == size-1){
            cout<<"Stack OverFlow\n";
            return;
        }
        else{
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack\n";
            flag = 0;
        }
    }

    //Pop
    void pop(){
        if(top == -1){
            cout<<"Stack UnderFlow\n";
        
        }else{
            cout<<"Popped "<<arr[top]<<" from the stack\n";
            top--;

            if(top == -1){
                flag = -1;
            }
        }
    }

    //Peek
    int peek(){
        if(top == -1){
            cout<<"Stack is empty\n";
            return -1;
        
        }else{
            return arr[top];
        }
    }

    //IsEmpty
    bool IsEmpty(){
        return top==-1;
    }

    //IsSize
    int IsSize(){
        return top+1;
    }

};

int main(){
    Stack S(5);
    // S.push(5);
    // S.push(6);
    // S.push(8);
    // S.pop();
    // S.pop();  //Check UnderFlow
    // S.pop();
    // S.pop();
    // S.push(5);
    // S.push(6); //Check OverFlow
    // S.push(8);

    // cout<<S.peek()<<endl;
    // S.pop();
    // cout<<S.peek()<<endl;
    // cout<<S.IsEmpty()<<endl;
    // cout<<S.IsSize()<<endl;

    // S.push(-1);
    // cout<<S.peek()<<endl;  //handle Exceptional case of -1

    if(S.flag == 0)
    cout<<S.peek()<<endl;

    int value = S.peek();
    cout<<value<<endl;


}