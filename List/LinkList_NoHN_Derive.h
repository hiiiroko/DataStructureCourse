// LinkList_NoHN_Derive.h

#ifndef LinkList_NoHN_Derive_H
#define LinkList_NoHN_Derive_H

#include "LinkList_NoHN_Basic.cpp"
#include "LinkList_NoHN_Basic.h"

using namespace LinkListNoHNBasicMethod;

namespace LinkListNoHNDeriveMethod
{
    void PushItemByArray_L(LinkList &L, int length, int *array);
    void Union_L(LinkList A, LinkList B, LinkList &R);
    void Intersection_L(LinkList A, LinkList B, LinkList &R);
    void Difference_L(LinkList A, LinkList B, LinkList &R);
}
#endif
