#include <stdio.h>
#include "sequence_list.h"
#include "linked_list.h"
/**
 * 线性表（逻辑结构：一对一）：linear list
 * 两种不同存储结构的实现方式：
 *      1.顺序表（sequence list）：使用数组+表长度声明的数据结构实现,属于顺序存储
 *      2.链表（linked list）：使用指针+基本类型或结构类型的数据结构实现，属于链式存储
 * @return
 */
int main() {
    //初始化顺序表
    SequenceList sequence_list;
    sequence_list.length=3;
    sequence_list.data[0]=1;
    sequence_list.data[1]=2;
    sequence_list.data[2]=3;
    PrintList(sequence_list);
    int result=LocateElem(sequence_list,3);
    if(result){
        printf("element position=%d\n",result);
    }
    return 0;
}
