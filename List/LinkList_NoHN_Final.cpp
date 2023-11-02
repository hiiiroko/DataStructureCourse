// LinkList_NoHN_Final.cpp

#include "LinkList_NoHN_Derive.cpp"
#include "LinkList_NoHN_Derive.h"

int main()
{
    using namespace LinkListNoHNDeriveMethod;

    LinkList A;
    InitList_L(A);
    int arrayA[4] = {1, 2, 3, 4};
    PushItemByArray_L(A, 4, arrayA);
    cout << "============ Input A ============" << endl
         << "num = " << ListLength_L(A) << endl
         << "elem = ";
    ListTraverse_L(A);

    LinkList B;
    InitList_L(B);
    int arrayB[5] = {2, 3, 5, 6, 7};
    PushItemByArray_L(B, 5, arrayB);
    cout << "============ Input B ============" << endl
         << "num = " << ListLength_L(B) << endl
         << "elem = ";
    ListTraverse_L(B);

    LinkList R;
    InitList_L(R);

    cout << "============ Result =============" << endl;
    Union_L(A, B, R);
    cout << "A U B = ";
    ListTraverse_L(R);

    Intersection_L(A, B, R);
    cout << "A + B = ";
    ListTraverse_L(R);

    Difference_L(A, B, R);
    cout << "A - B = ";
    ListTraverse_L(R);

    Difference_L(B, A, R);
    cout << "B - A = ";
    ListTraverse_L(R);

    DestroyList_L(A);
    DestroyList_L(B);
    DestroyList_L(R);
    return 0;
}