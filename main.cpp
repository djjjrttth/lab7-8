#include <iostream>
using namespace std;


#include "ProcessList.h"

int main(){

    ProccessList proc_list = ProccessList();

    PCB pcb1;
    pcb1.processID = 111;
    pcb1.processName = "first";
    pcb1.processStatus = "running";
    pcb1.commandCounter = 3;
    pcb1.regs.rax = 111;

    PCB pcb2;
    pcb2.processID = 222;
    pcb2.processName = "second";
    pcb2.processStatus = "waiting";
    pcb2.commandCounter = 5;
    pcb2.regs.rax = 222;

    PCB pcb3;
    
    pcb3.processID = 333;
    pcb3.processName = "third";
    pcb3.processStatus = "stopped";
    pcb3.commandCounter = 6;
    pcb3.regs.rax = 333;

    PCB pcb4;
    pcb4.processID = 444;
    pcb4.processName = "fourth";
    pcb4.processStatus = "running";
    pcb4.commandCounter = 1;
    pcb4.regs.rax = 444;


    PCB pcb5;
    pcb5.processID = 555;
    pcb5.processName = "fifth";
    pcb5.processStatus = "waiting";
    pcb5.commandCounter = 2;
    pcb5.regs.rax = 555;

    PCB pcb6;
    pcb6.processID = 666;
    pcb6.processName = "sixth";
    pcb6.processStatus = "running";
    pcb6.commandCounter = 5;
    pcb6.regs.rax = 666;


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
    

    proc_list.printList();
    
    return 0;
}