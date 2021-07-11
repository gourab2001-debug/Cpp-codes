#include<iostream>
using namespace std;
#define MAX 5

class queue
{
    int data[MAX];
    int frontq, rear;
    int isFull();
    int isEmpty();
public:
    void initialize();
    void insertq(int);
    void deleteq();
    void display();
};

void queue::initialize()
{
    frontq = -1;
    rear = -1;
}
int queue::isFull()
{
    if(rear==MAX-1)
        return 1;
    else
        return 0;
}
int queue::isEmpty()
{
    if(frontq == -1)
        return 1;
    else
        return 0;
}
void queue::insertq(int val)
{
    if(isFull())
        cout << "The Queue is Full.." <<endl;
    else if( frontq == -1 && rear == -1)
    {
        frontq = rear = 0;
        data[rear] = val;
        cout << val << " inserted successfully.." << endl;
    }
    else{
        rear++;
        data[rear] = val;
        cout << val << " inserted successfully.." << endl;
    }
}
void queue::deleteq()
{
    if(isEmpty())
        cout<< "The queue is Empty.." << endl;
    else{
        int val = data[frontq];
        frontq = frontq + 1;
        cout << val << " deleted successfully" << endl;
    }
}
void queue::display()
{
    if(isEmpty())
        cout << "Nothing to display" << endl;
    else
    {
        for(int i = frontq; i<=rear; i++)
            cout << data[i] << "\t";
    }
}

int main()
{
    queue q1;

    q1.initialize();

    q1.insertq(12);
    q1.insertq(23);
    q1.insertq(34);

    q1.display();

    return 0;
}
