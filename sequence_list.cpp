//
// Created by shy on 2022/11/3.
//
#include "sequence_list.h"

void PrintList(SequenceList list) {
    for (int i = 0; i < list.length; i++) {
        printf("%3d",list.data[i]);
    }
    printf("\n");
}

int LocateElem(SequenceList list,ElemType e){
    int i=0;
    while (i<list.length){
        if(list.data[i]==e){
            return i+1;
        }
        i++;
    }
    return i;
}

