#ifndef LISTNODE_H
#define LISTNODE_H

#include "pcb.h"
class ListNode{
        
    public:
        PCB data;
        ListNode* next;
        ListNode(PCB _data, ListNode* _next);
        ~ListNode();
};


#endif 