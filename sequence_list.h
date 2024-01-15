//
// Created by shy on 2022/11/3.
//

#ifndef LINEAR_LIST_SEQUENCE_LIST_H
#define LINEAR_LIST_SEQUENCE_LIST_H

#include <stdio.h>

//顺序表（sequence list）的声明与定义
#define MAXSIZE 128
typedef int ElemType;//数据类型别名使用驼峰命名法
typedef struct{
    ElemType data[MAXSIZE]={0};//具体变量名使用下划线命名法
    int length=0;//数组的初始化长度，即实际的元素个数
}SequenceList;

//只是打印变量内容，不需要修改变量值，因此不需要加引用"&"
void PrintList(SequenceList list);

//查找特定元素的位置,成功返回位置值，失败返回0
int LocateElem(SequenceList list,ElemType e);

#endif //LINEAR_LIST_SEQUENCE_LIST_H