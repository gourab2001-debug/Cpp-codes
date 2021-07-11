#include<iostream>
using namespace std;
#define MAX 3
class stack{
private:
    int data[MAX];
    int top;
    int isFull();
    int isEmpty();
public:
    void push(int);
    void pop();
    void initialize();
    void display();
};
void stack::initialize()
{
    top = -1;
}
int stack::isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
int stack::isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void stack::push(int val)
{
    if(isFull())
        cout << "Stack Overflow.." <<endl;
    else
    {
        top = top + 1;
        data[top] = val;
        cout << "The value inserted successfully is " << val <<endl;
    }
}
void stack::pop()
{
    int val_del;
    if(isEmpty())
        cout << "Stack underflow.." <<endl;
    else
    {
        val_del = data[top];
        top--;
        cout << "The value popped is: " << val_del <<endl;
    }
}
void stack::display()
{
    if(isEmpty())
        cout << "The stack is empty..";
    else
    {
        for(int i = top; i>=0; i--)
            cout << data[i] << endl;
    }
}
int main()
{
    stack s1;
    s1.initialize();

    s1.push(12);
    s1.push(23);
    s1.push(34);

    s1.display();
    s1.push(45);

    s1.pop();
    s1.display();
    return 0;
}


