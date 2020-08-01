/*
 * @lc app=leetcode.cn id=641 lang=cpp
 *
 * [641] 设计循环双端队列
 */

// @lc code=start
class MyCircularDeque {
public:
    int* myDeque;
    int front, rear;
	int capacity;

    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        myDeque = new int[k + 1];
        front = 0;
        rear = 0;
        capacity = k+1;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if (!isFull()) {
            if (front != 0) {
                myDeque[--front]=value;
                return true;
            }
            for (int i = 0; i < rear - front; i++) {
                myDeque[rear - i] = myDeque[rear-(i+1)];
            }
            myDeque[front] = value;
            rear++;
            return true;
        }
        return false;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (!isFull()) {
            myDeque[rear] = value;
            rear++;
            return true;
        }
        return false;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (!isEmpty()) {
            front++;
            return true;
        }
        return false;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (!isEmpty()) {
            rear--;
            return true;
        }
        return false;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if (!isEmpty()) {
            return myDeque[front];
        }
        return -1;
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if (!isEmpty()) {
            return myDeque[rear - 1];
        }
        return -1;
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return rear == front;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return ((rear + 1) % capacity == front);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
// @lc code=end

