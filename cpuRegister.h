#ifndef CPUREGISTER_H
#define CPUREGISTER_H


//структура состояний регистров
//по умолчанию все регистры инициализированы нулями

struct registers{
    int rax = 0;
    int rbx = 0;
    int rcx = 0;
    int rdx = 0;
    int rip = 0;
    int esp = 0;
    int ebp = 0;
    int eflags = 0;
};

#endif