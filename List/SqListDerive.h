#ifndef SqListDerive_H
#define SqListDerive_H

#include "SqListBasic.cpp"
#include "SqListBasic.h"

using namespace SQListBasicMethod;

namespace SQListDeriveMethod
{
    void PushItemByArray_Sq(SqList &L, int length, int *array);
    void Intersection_Sq(SqList A, SqList B, SqList &R);
    void Union_Sq(SqList A, SqList B, SqList &R);
    void Difference_Sq(SqList A, SqList B, SqList &R);
}
#endif