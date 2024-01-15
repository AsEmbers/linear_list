//
// Created by shy on 2022/11/3.
//
#include "linked_list.h"

void PrintList(LinkedList list) {
    list=list->next;//头节点不打印
    while (list!=NULL){
        printf("%3d",list->data);
        list=list->next;//指向下一个节点
    }
    printf("\n");
}