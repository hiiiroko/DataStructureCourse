// LinkList_WithHN_Basic.cpp

#include "LinkList_WithHN_Basic.h"

namespace LinkListWithHNBasicMethod
{
    void InitList_L(LinkList &L)
    {
        L = new LNode;
        L->next = nullptr;
    }

    void DestroyList_L(LinkList &L)
    {
        LinkList p;
        while (L)
        {
            p = L;
            L = L->next;
            delete p;
        }
    }

    void ClearList_L(LinkList &L)
    {
        LinkList p = L->next;
        while (p)
        {
            L->next = p->next;
            delete p;
            p = L->next;
        }
    }

    Boolean ListEmpty_L(LinkList L)
    {
        return L->next == nullptr ? TRUE : FALSE;
    }

    int ListLength_L(LinkList L)
    {
        int length = 0;
        LinkList p = L->next;
        while (p)
        {
            length++;
            p = p->next;
        }
        return length;
    }

    Boolean GetElem_L(LinkList L, int i, ElemType &e)
    {
        int j = 1;
        LinkList p = L->next;
        while (p && j < i)
        {
            p = p->next;
            j++;
        }
        if (!p || j > i)
            return FALSE;
        e = p->data;
        return TRUE;
    }

    int LocateElem_L(LinkList L, ElemType e)
    {
        int i = 1;
        LinkList p = L->next;
        while (p)
        {
            if (p->data == e)
                return i;
            p = p->next;
            i++;
        }
        return 0;
    }

    Boolean PriorElem_L(LinkList L, ElemType cur_e, ElemType &pre_e)
    {
        LinkList q = L;
        LinkList p = L->next;
        while (p)
        {
            if (p->data == cur_e)
            {
                if (q == L)
                    return FALSE;
                pre_e = q->data;
                return TRUE;
            }
            q = p;
            p = p->next;
        }
        return FALSE;
    }

    Boolean NextElem_L(LinkList L, ElemType cur_e, ElemType &next_e)
    {
        LinkList p = L->next;
        while (p)
        {
            if (p->data == cur_e)
            {
                if (p->next)
                {
                    next_e = p->next->data;
                    return TRUE;
                }
                else
                    return FALSE;
            }
            p = p->next;
        }
        return FALSE;
    }

    Boolean ListInsert_L(LinkList &L, int i, ElemType e)
    {
        int j = 0;
        LinkList p = L;
        while (p && j < i - 1)
        {
            p = p->next;
            j++;
        }
        if (!p || j > i - 1)
            return FALSE;
        LinkList s = new LNode;
        s->data = e;
        s->next = p->next;
        p->next = s;
        return TRUE;
    }

    Boolean ListDelete_L(LinkList &L, int i, ElemType &e)
    {
        int j = 0;
        LinkList p = L;
        while (p && j < i - 1)
        {
            p = p->next;
            j++;
        }
        if (!p || j > i - 1 || !(p->next))
            return FALSE;
        LinkList q = p->next;
        e = q->data;
        p->next = q->next;
        delete q;
        return TRUE;
    }

    void ListTraverse_L(LinkList L)
    {
        LinkList p = L->next;
        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}
