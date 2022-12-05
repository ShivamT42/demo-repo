# include <iostream>
using namespace std;

#define n 20

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"No Element to pop"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No Element Present"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }
};

int main(){
    
    int m;
    stack st;
    int x;
    int p;
    

    do{
        cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Top"<<endl<<"4.Check whether stack is empty"<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>m;
        switch(m){
            case 1: {
                cout<<"Enter the Element"<<endl;
                cin>>x;
                st.push(x);
                break;
            }
            
            case 2:{
                st.pop();
                break;
            }
            
            case 3:{
                cout<<st.Top()<<endl;
                break;
            }
            
            case 4:{
                cout<<st.isEmpty()<<endl;
                break;
            }
            
            case 5:{
                cout<<"Exit!"<<endl;
                break;
            }
            
            default:{
                cout<<"Wrong Choice!"<<endl;
            }  
        }
    }while(m!=5);
    return 0;
}