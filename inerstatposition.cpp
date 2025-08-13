// Problem: Insert in Middle of Linked List
// Link: https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1
// Approach: Count nodes, find mid position, insert new node after mid.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

class Solution {
public:
    Node* insertInMiddle(Node* head, int x) {
        if (head == NULL) {
            return new Node(x);
        }

        int count = 0;
        Node* curr = head;
        while (curr != NULL) {
            count++;
            curr = curr->next;
        }

        int mid = count / 2;
        curr = head;
        for (int i = 1; i < mid; i++) {
            curr = curr->next;
        }

        Node* temp = new Node(x);
        temp->next = curr->next;
        curr->next = temp;

        return head;
    }
};

// Local test
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    Solution ob;
    head = ob.insertInMiddle(head, 3);

    // Printing
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    // Expected: 1 2 3 4 5
}
