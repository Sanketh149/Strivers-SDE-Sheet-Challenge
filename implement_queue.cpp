#include <bits/stdc++.h> 
class Queue {
public:
    vector<int> v;
    int j = 0;

    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return j >= v.size();
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        v.push_back(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        return j >= v.size() ? -1 : v[j++];
    }

    int front() {
        // Implement the front() function
        return j >= v.size() ? -1 : v[j];
    }
};