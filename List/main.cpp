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

    SqList R;
    InitList_Sq(R);
    Union_Sq(A, B, R);
    ListTraverse_Sq(R);
    Intersection_Sq(A, B, R);
    ListTraverse_Sq(R);

    return 0;
}
