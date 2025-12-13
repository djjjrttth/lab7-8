#ifndef PROCESSLIST_H
#define PROCESSLIST_H

#include "ListNode.h"
#include <iostream>
class ProccessList{
    public:
        ListNode* head = nullptr;
    
        bool insert(const PCB& newPCB);
        bool remove(int pid);
        void printList();
};

#endif