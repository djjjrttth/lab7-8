#include <iostream>
using namespace std;


#include "ProcessList.h"

int main(){

    ProccessList proc_list = ProccessList();

    PCB pcb1;
    pcb1.processID = 111;

    PCB pcb2;
    pcb2.processID = 222;

    PCB pcb3;
    pcb3.processID = 333;

    PCB pcb4;
    pcb4.processID = 444;
    PCB pcb5;
    pcb5.processID = 555;
    PCB pcb6;
    pcb6.processID = 666;


    try{
    proc_list.insert(pcb3);
    proc_list.insert(pcb2);
    proc_list.insert(pcb1);
    

    
    proc_list.insert(pcb5);
    
    
    proc_list.insert(pcb6);
    proc_list.insert(pcb4);
    //proc_list.insert(pcb4);
    
    proc_list.printList();
    cout << endl;
    proc_list.remove(pcb1.processID);
    proc_list.remove(pcb4.processID);
    proc_list.remove(pcb6.processID);


    proc_list.printList();
    bool res = proc_list.remove(pcb6.processID);
    }
    catch(std::string e){
        cout << e << endl;
    }
    

    
    //proc_list.insert(pcb2);
    return 0;
}