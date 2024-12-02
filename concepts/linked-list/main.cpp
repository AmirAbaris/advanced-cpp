#include <iostream>
#include <cstring>
using namespace std;

struct Node
{
    int data;
    Node* next;

    // construct
    Node(int value): data(value), next(nullptr) {}
};

class LinkedList {
    private:
    Node* head; // pointer to the first node

    public:
    LinkedList(): head(nullptr) {}

    void append(int value)
    {
        Node* newNode = new Node(value);

        if (head == nullptr)        
            head = nullptr;
        else 
        {
            Node* temp = head;
            while (temp->next != nullptr) 
            {
                temp = temp->next; // Traverse to the end of the list
            }
            temp->next = newNode; // Link the last node to newNode
        }
    }

    void display() 
    {
        Node* temp = head;
        while (temp != nullptr) 
        {
            cout << temp->data << " -> ";
            temp = temp->next; // Move to the next node
        }
        cout << "nullptr" << endl;
    }

       void deleteNode(int value) 
       {
        if (head == nullptr) return; // Empty list, nothing to delete

        // If the node to delete is the head
        if (head->data == value) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        // Traverse the list to find the node
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Value not found in the list." << endl;
            return;
        }

        // Unlink the node and delete it
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    ~LinkedList()
    {
        while (head != nullptr)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    // Add some nodes
    list.append(10);
    list.append(20);
    list.append(30);

    // Display the list
    cout << "Linked List: ";
    list.display();

    // Delete a node
    cout << "Deleting 20..." << endl;
    list.deleteNode(20);

    // Display the list again
    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}