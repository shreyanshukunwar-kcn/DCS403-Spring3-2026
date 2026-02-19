// Program to implement stack using linked list.
#include <iostream>
#include <stdexcept>

using namespace std;

class Node
{
public:
    int info;
    Node* link;

    Node(int data)
    {
        info = data;
        link = NULL;
    }
}; // End of class Node

class StackL
{
private:
    Node* top;

public:
    StackL();
    bool isEmpty();
    void push(int data);
    int pop();
    int peek();
    void display();
    int size();
}; // End of class StackL

StackL::StackL()
{
    top = NULL;
} // End of StackL()

bool StackL::isEmpty()
{
    return (top == NULL);
} // End of isEmpty()

void StackL::push(int data)
{
    Node* temp = new Node(data);
    temp->link = top; // works for empty and non-empty
    top = temp;
} // End of push()

int StackL::pop()
{
    if (isEmpty())
        throw runtime_error("Stack is empty");

    int retValue = top->info;
    Node* temp = top;
    top = top->link;
    delete temp;

    return retValue;
} // End of pop()

int StackL::peek()
{
    if (isEmpty())
        throw runtime_error("Stack is empty");

    return top->info;
} // End of peek()

void StackL::display()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
        return;
    }

    Node* ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->info << "\n";
        ptr = ptr->link;
    }
} // End of display()

int StackL::size()
{
    int count = 0;
    Node* ptr = top;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
} // End of size()

int main()
{
    StackL st;

    try
    {
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);

        cout << "Stack Items : \n";
        st.display();

        cout << "Top Item : " << st.peek() << "\n";
        cout << "Total items : " << st.size() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";

        cout << "Stack Items : \n";
        st.display();

        st.push(4);
        st.push(5);

        cout << "Stack Items : \n";
        st.display();

        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";
        cout << "Popped Item : " << st.pop() << "\n";

        cout << "Stack Items : \n";
        st.display();
    }
    catch (const exception& e)
    {
        cout << e.what() << "\n";
    }

    return 0;
} // End of main()