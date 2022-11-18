/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {
public:
    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };
    MyLinkedList() {
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if (index > (_size - 1)||index < 0){
            return -1;
        }
        LinkedNode* q = _dummyHead -> next;;
        while(index--){
            q = q -> next;
        }
        return q -> val;
    }
    
    void addAtHead(int val) {
        LinkedNode* q = new LinkedNode(val);
        q -> next = _dummyHead -> next;
        _dummyHead -> next = q;
        _size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* q = new LinkedNode(val);
        LinkedNode* p = _dummyHead;
        while(p -> next != nullptr)
        {
            p = p -> next;
        }
        p -> next = q;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > _size||index < 0){
            return;
        }
        LinkedNode* p = new LinkedNode(val);
        LinkedNode* q = _dummyHead;
        while(index--){
            q = q -> next;
        }
        p -> next = q -> next;
        q -> next = p;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= _size||index < 0){
            return;
        }
        LinkedNode* q = _dummyHead;
        while(index--){
            q = q -> next;
        }
        LinkedNode* p = q -> next;
        q -> next = q -> next -> next;
        delete p;
        _size--;
    }
    private:
        int _size;
        LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

