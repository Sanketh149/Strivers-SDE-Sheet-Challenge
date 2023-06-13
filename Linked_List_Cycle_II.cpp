Node *firstNode(Node *head)

{
    //    Write your code here.
    Node* slow = head;
    Node* fast = head;
     while  (fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
            fast = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;  // First node of the cycle
        }
    }
    return NULL;

}