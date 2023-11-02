// LinkList_NoHN_Basic.h

#ifndef LinkList_NoHN_Basic_H
#define LinkList_NoHN_Basic_H

#include <iostream>
#define TRUE 1
#define FALSE 0

using namespace std;

namespace LinkListNoHNBasicMethod
{
    typedef int ElemType;
    typedef int Boolean;

    typedef struct LNode
    {
        ElemType data;
        struct LNode *next;
    } *LinkList;

    void InitList_L(LinkList &L);
    void DestroyList_L(LinkList &L);
    void ClearList_L(LinkList &L);
    Boolean ListEmpty_L(LinkList L);
    int ListLength_L(LinkList L);
    Boolean GetElem_L(LinkList L, int i, ElemType &e);
    int LocateElem_L(LinkList L, ElemType e);
    Boolean PriorElem_L(LinkList L, ElemType cur_e, ElemType &pre_e);
    Boolean NextElem_L(LinkList L, ElemType cur_e, ElemType &next_e);
    Boolean ListInsert_L(LinkList &L, int i, ElemType e);
    Boolean ListDelete_L(LinkList &L, int i, ElemType &e);
    void ListTraverse_L(LinkList L);
}
#endif
