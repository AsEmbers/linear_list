//
// Created by shy on 2022/11/3.
//

#ifndef LINEAR_LIST_LINKED_LIST_H
#define LINEAR_LIST_LINKED_LIST_H

#include <stdio.h>

//单链表（linked list）的声明与定义
typedef int ElemType;//数据类型别名使用驼峰命名法
//节点结构类型
typedef struct LinkedNode{
    ElemType data;//具体变量名使用下划线命名法
    struct LinkedNode *next=NULL;//指向下一个节点的指针
}LinkedNode,*LinkedList;

//只是打印变量内容，不需要修改变量值，因此不需要加引用"&"
void PrintList(LinkedList list);

#endif //LINEAR_LIST_LINKED_LIST_H
