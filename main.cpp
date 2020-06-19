#include <iostream>

using namespace std;

struct Node{
    int index = 0;
    int val = 0;
    Node* next = nullptr;

    Node(int i, int v){
        index = i;
        val = v;
    }
};

struct List{
    Node* head = nullptr;
    int size = 0;

    void add(int i, int v){
        if(size == 0) head = new Node(i, v);
        else{
            Node* ptr = head;
            while (ptr->next != nullptr) ptr = ptr->next;
            ptr->next = new Node(i, v);

        }
        size++;
    }

//    void print(){
//        Node* ptr = head;
//
//        while (ptr != nullptr){
//            cout << "індекс: " << ptr->index << "\tЗначення: " << ptr->val << endl;
//            ptr = ptr->next;
//        }
//    }

};

int getElement(List* arr, int index){
    Node* ptr = arr->head;

    while (ptr != nullptr){
        if(ptr->index == index) return ptr->val;
        ptr = ptr->next;
    }
    return 0;
}

//int main() {
//    List l;
//    l.add(1, 3);
//    l.add(2, 2);
//    l.add(4, 7);
//    l.add(7, 1);
//
//    l.print();
//
//    cout << getElement(&l, 3);
//    return 0;
//}
