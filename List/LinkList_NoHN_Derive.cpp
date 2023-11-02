// LinkList_NoHN_Derive.cpp

#include "LinkList_NoHN_Derive.h"

namespace LinkListNoHNDeriveMethod
{
    void PushItemByArray_L(LinkList &L, int length, int *array)
    {
        for (int i = 0; i < length; i++)
        {
            ListInsert_L(L, i + 1, *(array + i));
        }
    }

    void Union_L(LinkList A, LinkList B, LinkList &R)
    {
        ClearList_L(R);
        LinkList p = A;
        while (p)
        {
            ListInsert_L(R, ListLength_L(R) + 1, p->data);
            p = p->next;
        }
        p = B;
        while (p)
        {
            if (!LocateElem_L(R, p->data))
                ListInsert_L(R, ListLength_L(R) + 1, p->data);
            p = p->next;
        }
    }

    void Intersection_L(LinkList A, LinkList B, LinkList &R)
    {
        ClearList_L(R);
        LinkList p = A;
        while (p)
        {
            if (LocateElem_L(B, p->data))
                ListInsert_L(R, ListLength_L(R) + 1, p->data);
            p = p->next;
        }
    }

    void Difference_L(LinkList A, LinkList B, LinkList &R)
    {
        ClearList_L(R);
        LinkList p = A;
        while (p)
        {
            if (!LocateElem_L(B, p->data))
                ListInsert_L(R, ListLength_L(R) + 1, p->data);
            p = p->next;
        }
    }
}
