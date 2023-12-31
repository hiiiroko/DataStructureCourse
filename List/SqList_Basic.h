// SqList_Basic.h

#ifndef SqList_Basic_H
#define SqList_Basic_H

#include <iostream>
#include <string>
#define LISTSIZE 128
#define INCREMENTSIZE 16
#define TRUE 1
#define FALSE 0

using namespace std;

namespace SQListBasicMethod
{
    typedef int ElemType;
    typedef int Boolean;
    typedef struct
    {
        ElemType *elem;
        int length;
        int listsize;
        int incrementsize;
    } SqList;

    void increment(SqList &L);
    void InitList_Sq(SqList &L);
    void DestroyList_Sq(SqList &L);
    void ClearList_Sq(SqList &L);
    Boolean ListEmpty_Sq(SqList L);
    int ListLength_Sq(SqList L);
    bool GetElem_Sq(SqList L, int i, ElemType &e);
    int LocateElem_Sq(SqList L, ElemType e);
    bool PriorElem_Sq(SqList L, ElemType cur_e, ElemType &pre_e);
    bool NextElem_Sq(SqList L, ElemType cur_e, ElemType &next_e);
    bool ListInsert_Sq(SqList &L, int i, ElemType e);
    bool ListDelete_Sq(SqList &L, int i, ElemType &e);
    void ListTraverse_Sq(SqList L);
    
    SqList CopyList_Sq(SqList L);
    void PurifyList_Sq(SqList &L);
    void ConnectList_Sq(SqList A, SqList B, SqList &R);
}
#endif
