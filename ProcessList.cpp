#include "ProcessList.h"

bool ProccessList::insert(const PCB& newPCB){

    ListNode *node = head;
    ListNode* new_node = new ListNode(newPCB, nullptr);

    //проверка что элемент самый первый
    if (head == nullptr){
        head = new_node;
        return true;

    }
    else{
        //вставка на самое первое место
        if (new_node->data.processID < node->data.processID){
            head = new_node;
            new_node->next = node;
            return true;
        }
        else if(new_node->data.processID == node->data.processID){
            std::string error = "Ошибка: такой процесс уже существует";
            throw error;
            return false;
        }
        else{
            while(node){
                if (node->next == nullptr){
                    //вставка на самое последнее место
                    if(new_node->data.processID == node->data.processID){
                        cout << new_node->data.processID << " " << node->data.processID << endl;
                        std::string error = "Ошибка: такой процесс уже существует";
                        throw error;
                        return false;
                        
                    }
                    else if (new_node->data.processID > node->data.processID){
                        node->next = new_node;
                        return true;
                    }
                }
                else{
                    //вставка на место, отличное от первого и последнего места
                    if (node->data.processID == new_node->data.processID){
                        std::string error = "Ошибка: такой процесс уже существует";
                        throw error;
                        return false;
                        
                    }
                        if (node->data.processID < new_node->data.processID && new_node->data.processID < node->next->data.processID){
                            new_node->next = node->next;
                            node->next = new_node;
                            return true;
                        }
                    
                }
                node = node->next;
            }
        }
    }

    
    
    return false;

}




bool ProccessList::remove(int pid){

    ListNode* node = head;
    if (node == nullptr){
        std::string error = "Ошибка удаления: список пуст";
        throw error;
        return false;
    }
    
    else{
        while (node->next){
            if (node->data.processID == pid){
                head = node->next;
                return true;
            }
            if (node->next->data.processID == pid){
                node->next = node->next->next;
                return true;
            }
            node = node->next;
        }
    }
    
    std::string error = "Ошибка: не удалось удалить элемент";
    throw error;
    return false;

    
    
    
}

void ProccessList::printList(){
    
    if (head == nullptr){
        cout << "Список пуст" << endl;
    }

    else{
        ListNode* node = head;
        while (node){
            cout << "---ПРОЦЕСС---" << endl;
            cout << "ID: " << node->data.processID << endl;
            cout << "Имя: " << node->data.processName << endl;
            cout << "Статус: " << node->data.processStatus << endl;
            cout << "Счетчик комманд: " << node->data.commandCounter << endl;

            cout << "Состояние регистров:" << endl;
            cout << "RAX: " << node->data.regs.rax << endl;
            cout << "RBX: " << node->data.regs.rbx << endl;
            cout << "RCX: " << node->data.regs.rcx << endl;
            cout << "RDX: " << node->data.regs.rdx << endl;
            cout << "RIP: " << node->data.regs.rip << endl;
            cout << "ESP: " << node->data.regs.esp << endl;
            cout << "EBP: " << node->data.regs.ebp << endl;
            cout << "EFLAGS: " << node->data.regs.eflags << endl;
            
            node = node->next;

        }
        cout << endl;
        
    }  
}
