#include<stdio.h>  
#include<stdlib.h>
#include "P1-02.h"  // user defined header file


// main functions
int main()
{
    // local definations
    int* newData;
    int* nodeData;
    NODE* node;


    // statements
    newData = (int*)malloc(sizeof(int));
    *newData = 7;
    node = createNode(newData);

    newData = (int*)malloc(sizeof(int));
    *newData = 75;
    node -> link = createNode(newData);

    nodeData = (int*)node -> dataPtr;
    printf("Data from node 1: %d\n", *nodeData);

    nodeData = (int*)node -> link -> dataPtr;
    printf("Data from node 2: %d\n", *nodeData);

    return 0;
}