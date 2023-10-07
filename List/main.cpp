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
    cout << "============ Input A ============" << endl
         << "num = " << A.length << endl
         << "elem = ";
    ListTraverse_Sq(A);

    SqList B;
    InitList_Sq(B);
    int arrayB[6] = {2, 3, 5, 6, 7, 7};
    PushItemByArray_Sq(B, 6, arrayB);
    cout << "============ Input B ============" << endl
         << "num = " << B.length << endl
         << "elem = ";
    ListTraverse_Sq(B);

    SqList R;
    InitList_Sq(R);

    cout << "============ Result =============" << endl;
    Union_Sq(A, B, R);
    cout << "A U B = ";
    ListTraverse_Sq(R);

    Intersection_Sq(A, B, R);
    cout << "A + B = ";
    ListTraverse_Sq(R);

    Difference_Sq(A, B, R);
    cout << "A - B = ";
    ListTraverse_Sq(R);

    Difference_Sq(B, A, R);
    cout << "B - A = ";
    ListTraverse_Sq(R);
    return 0;
}
