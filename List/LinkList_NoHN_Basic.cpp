// LinkList_NoHN_Basic.cpp

#include "LinkList_NoHN_Basic.h"

namespace LinkListNoHNBasicMethod
{
    void InitList_L(LinkList &L)
    {
        L = nullptr;
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
        DestroyList_L(L);
        InitList_L(L);
    }

    Boolean ListEmpty_L(LinkList L)
    {
        return L == nullptr ? TRUE : FALSE;
    }

    int ListLength_L(LinkList L)
    {
        int length = 0;
        LinkList p = L;
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
        LinkList p = L;
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
        LinkList p = L;
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
        if (!L || !L->next)
            return FALSE;
        
        LinkList q = L;
        LinkList p = L->next;
        
        while (p)
        {
            if (p->data == cur_e)
            {
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
        if (!L || !L->next)
            return FALSE;

        LinkList p = L;

        while (p->next)
        {
            if (p->data == cur_e)
            {
                next_e = p->next->data;
                return TRUE;                
            }
            
            p = p->next;            
        }

       return FALSE; 
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       

    }

    Boolean ListInsert_L(LinkList &L, int i, ElemType e)
    {
        if (i < 1)
            return FALSE;
        
        if (i == 1)
        {
            LinkList s = new LNode;
            s->data = e;
            s->next = L;
            L = s;
            return TRUE;
        }

        int j = 1;
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
        if (i < 1 || !L)
            return FALSE;

        if (i == 1)
        {
            LinkList q = L;
            e = q->data;
            L = L->next;
            delete q;
            return TRUE;            
        }

        int j = 1;
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
        LinkList p = L;
        
        while (p)
        {
            cout << p->data << " ";
            p = p->next;            
        }
        
        cout << endl;        
    }
}
