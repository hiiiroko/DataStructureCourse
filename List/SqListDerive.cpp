#include "SqListDerive.h"

namespace SQListDeriveMethod
{
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

    void PushItemByArray_Sq(SqList &L, int length, int *array)
    {
        for (int i = 0; i < length; i++)
            ListInsert_Sq(L, i + 1, *(array + i));
    }

    void Union_Sq(SqList A, SqList B, SqList &R)
    {
        ClearList_Sq(R);
        ConnectList_Sq(A, B, R);
        PurifyList_Sq(R);
    }

    void Intersection_Sq(SqList A, SqList B, SqList &R)
    {
        ClearList_Sq(R);
        SqList PA = CopyList_Sq(A);
        PurifyList_Sq(PA);
        SqList PB = CopyList_Sq(B);
        PurifyList_Sq(PB);
        ElemType elem;
        for(int i = 1; i <= PA.length; i++)
        {
            GetElem_Sq(PA,i,elem);
            if(LocateElem_Sq(PB,elem))
                ListInsert_Sq(R,R.length+1,elem);
        }
    }

    void Difference_Sq(SqList A, SqList B, SqList &R)
    {
    }
}