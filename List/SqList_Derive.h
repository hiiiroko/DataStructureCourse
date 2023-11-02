// SqListDerive.h

#ifndef SqList_Derive_H
#define SqList_Derive_H

#include "SqList_Basic.cpp"
#include "SqList_Basic.h"

using namespace SQListBasicMethod;

namespace SQListDeriveMethod
{
    void PushItemByArray_Sq(SqList &L, int length, int *array);
    void Intersection_Sq(SqList A, SqList B, SqList &R);
    void Union_Sq(SqList A, SqList B, SqList &R);
    void Difference_Sq(SqList A, SqList B, SqList &R);
}
#endif