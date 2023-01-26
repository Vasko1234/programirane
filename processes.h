#ifndef GUARD
#define GUARD
    typedef struct {
        unsigned int unique_ID;
        char name[30];
    } Process;
    
    Process processes[5];
    extern int processescount;

    static unsigned int nextprocessid();
    unsigned int createnewprocess(char name[]);
    void stopprocess(unsigned int unique_ID);
#endif
