#ifndef LIST_H
#define LIST_H

class Node {
public:
    int info;
    Node* next;
};

class List {
private:
    Node* first;
    Node* last;

public:
    List();
    void create();
    void insert();
    void delet();
    void display();
    void search();
};

#endif
