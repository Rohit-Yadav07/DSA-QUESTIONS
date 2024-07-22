#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int x) : data(x), next(NULL) {}
};

// Function to find the x-th node from the end
ListNode *solve(ListNode *head, int x)
{
    ListNode *front = head;
    int count = 1;
    while (front != NULL)
    {
        cout << front->data << " " << head->data << endl;
        if (count <= x)
        {
            front = front->next;
        }
        else
        {
            head = head->next;
            front = front->next;
        }
        count++;
    }
    return head;
}

// Function to print list nodes for testing
void printList(ListNode *node)
{
    while (node != NULL)
    {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

void solve2(ListNode* head){
ListNode *ptr1=head;
ListNode *ptr2 = head;
while(ptr1-> next != NULL && ptr1-> next -> next != NULL) {
ptr1=ptr1->next->next;
ptr2=ptr2->next;
}
cout<< ptr2->data;
}

// Main function for testing
int main() {
    // Creating a linked list: 5 -> 26 -> 34 -> 78 -> 95 -> 66 -> NULL
    ListNode *head = new ListNode(15);
    head->next = new ListNode(10);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(70);
    head->next->next->next->next = new ListNode(85);
    // head->next->next->next->next->next = new ListNode(6);

    // Print the original list
    cout << "Original list: ";
    printList(head);

    // Test case
    int x = 3;
    // ListNode *result = solve(head, x);
    solve2(head);
    // if (result)
    // {
    //     cout << "The " << x << "-th node from the end is: " << result->data << endl;
    // }
    // else
    // {
    //     cout << "The list is shorter than " << x << " nodes." << endl;
    // }

    return 0;
}
