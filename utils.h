#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdbool.h>

struct msg{
    float T;     // Temperature 
    int Index;    // Index indifying the process 
    bool done;   // Flag to indicate termination
}; 

struct msg prepare_message(int i_Index, float i_Temperature, bool i_done); 

