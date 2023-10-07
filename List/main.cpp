#include "SqListDerive.cpp"
#include "SqListDerive.h"

int main()
{
    using namespace SQListBasicMethod;
    using namespace SQListDeriveMethod;
    SqList A;
    InitList_Sq(A);
    int arrayA[7] = {1, 2, 3, 4, 4, 4, 1};
    PushItemByArray_Sq(A, 7, arrayA);
    ListTraverse_Sq(A);

    SqList B;
    InitList_Sq(B);
    int arrayB[6] = {2, 3, 5, 6, 7, 7};
    PushItemByArray_Sq(B, 6, arrayB);
    ListTraverse_Sq(B);

    SqList C;
    InitList_Sq(C);
    Union_Sq(A, B, C);
    ListTraverse_Sq(C);

    SqList R;
    InitList_Sq(R);

    return 0;
}
