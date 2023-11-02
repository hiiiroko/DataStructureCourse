// SqList_Basic.cpp

#include "SqList_Basic.h"

namespace SQListBasicMethod
{
    void increment(SqList &L)
    {
        ElemType *a;
        a = new ElemType[L.listsize + L.incrementsize];
        for (int i = 0; i < L.listsize; i++)
            a[i] = L.elem[i];
        delete[] L.elem;
        L.elem = a;
        L.listsize += L.incrementsize;
    }

    void InitList_Sq(SqList &L)
    {
        L.elem = new ElemType[LISTSIZE];
        L.length = 0;
        L.listsize = LISTSIZE;
        L.incrementsize = INCREMENTSIZE;
    }

    void DestroyList_Sq(SqList &L)
    {
        delete[] L.elem;
        L.length = 0;
        L.listsize = 0;
        L.incrementsize = 0;
    }

    void ClearList_Sq(SqList &L)
    {
        L.length = 0;
    }

    Boolean ListEmpty_Sq(SqList L)
    {
        return L.length == 0 ? TRUE : FALSE;
    }

    int ListLength_Sq(SqList L)
    {
        return L.length;
    }

    bool GetElem_Sq(SqList L, int i, ElemType &e)
    {
        if (i >= 1 && i <= ListLength_Sq(L))
        {
            e = L.elem[i - 1];
            return true;
        }
        else
            return false;
    }

    int LocateElem_Sq(SqList L, ElemType e)
    {
        for (int i = 0; i < L.length; i++)
            if (L.elem[i] == e)
                return i + 1;
        return 0;
    }

    bool PriorElem_Sq(SqList L, ElemType cur_e, ElemType &pre_e)
    {
        if (!LocateElem_Sq(L, cur_e) || LocateElem_Sq(L, cur_e) == 1)
            return false;
        for (int i = 1; i < L.length - 1; i++)
            if (L.elem[i] == cur_e)
                pre_e = L.elem[i - 1];
        return true;
    }

    bool NextElem_Sq(SqList L, ElemType cur_e, ElemType &next_e)
    {
        if (!LocateElem_Sq(L, cur_e) || LocateElem_Sq(L, cur_e) == L.length)
            return false;
        for (int i = 0; i <= L.length - 1; i++)
            if (L.elem[i] == cur_e)
                next_e = L.elem[i + 1];
        return true;
    }

    bool ListInsert_Sq(SqList &L, int i, ElemType e)
    {
        if (L.length == L.listsize)
            increment(L);
        if (i >= 1 && i <= ListLength_Sq(L) + 1)
        {
            ElemType *p = &L.elem[L.length];
            for (; p >= &L.elem[i]; p--)
                *(p + 1) = *p;
            *p = e;
            L.length++;
            return true;
        }
        else
            return false;
    }

    bool ListDelete_Sq(SqList &L, int i, ElemType &e)
    {
        if (i >= 1 && i <= ListLength_Sq(L))
        {
            e = L.elem[i - 1];
            ElemType *p = &L.elem[i - 1];
            for (; p <= &L.elem[L.length - 1]; p++)
            {
                *p = *(p + 1);
            }
            L.length--;
            return true;
        }
        else
            return false;
    }

    void ListTraverse_Sq(SqList L)
    {
        for (int i = 0; i <= L.length - 1; i++)
            // cout << "[" << L.elem[i] << "]";
            cout << L.elem[i] << " ";
        cout << endl;
    }

    SqList CopyList_Sq(SqList L)
    {
        SqList N;
        InitList_Sq(N);
        ElemType elem;
        for (int i = 1; i <= L.length; i++)
        {
            GetElem_Sq(L, i, elem);
            ListInsert_Sq(N, i, elem);
        }
        return N;
    }

    void PurifyList_Sq(SqList &L)
    {
        ElemType elem;
        for (int i = ListLength_Sq(L); i > 0; i--)
        {
            GetElem_Sq(L, i, elem);
            int index = LocateElem_Sq(L, elem);
            if (index == i || index == 0)
                continue;
            ListDelete_Sq(L, i, elem);
        }
    }

    void ConnectList_Sq(SqList A, SqList B, SqList &R)
    {
        R = CopyList_Sq(A);
        ElemType elem;
        for (int i = 1; i <= B.length; i++)
        {
            GetElem_Sq(B, i, elem);
            ListInsert_Sq(R, R.length + 1, elem);
        }
    }

}