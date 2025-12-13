#ifndef PCB_H
#define PCB_H

using namespace std;
#include <string>
struct PCB{
    int processID;
    std::string processName;
    std::string processStatus;
    int commandCounter;
    int cpuRegisters[100];

};
#endif