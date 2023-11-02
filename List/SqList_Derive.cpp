// SqList_Derive.cpp

#include "SqList_Derive.h"

namespace SQListDeriveMethod
{
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
        for (int i = 1; i <= PA.length; i++)
        {
            GetElem_Sq(PA, i, elem);
            if (LocateElem_Sq(PB, elem))
                ListInsert_Sq(R, R.length + 1, elem);
        }
    }

    void Difference_Sq(SqList A, SqList B, SqList &R)
    {
        SqList PA = CopyList_Sq(A);
        PurifyList_Sq(PA);
        // cout << "TEST" << endl;
        // ListTraverse_Sq(PA);

        SqList PB = CopyList_Sq(B);
        PurifyList_Sq(PB);
        // ListTraverse_Sq(PB);
        // cout << "TEST" << endl;

        ClearList_Sq(R);
        R = CopyList_Sq(PA);

        ElemType elem;
        for (int i = R.length; i > 0; i--)
        {
            GetElem_Sq(R, i, elem);
            if (LocateElem_Sq(PB, elem))
                ListDelete_Sq(R, i, elem);
        }
    }
}