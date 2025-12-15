#ifndef PCB_H
#define PCB_H

using namespace std;
#include <string>
#include "cpuRegister.h"

struct PCB{
    int processID;
    std::string processName;
    std::string processStatus;
    int commandCounter;
    registers regs;

};
#endif