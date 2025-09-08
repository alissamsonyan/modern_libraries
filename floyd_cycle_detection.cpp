struct Node {

    int data;

    Node* next;

    Node(int val) : data(val), next(nullptr) {}

};


bool hasCycle(Node* head) {

    Node* slow = head;

    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {

        slow = slow->next;          

        fast = fast->next->next;    

        if (slow == fast) {

            return true; 

        }

    }

    return false; 

}
