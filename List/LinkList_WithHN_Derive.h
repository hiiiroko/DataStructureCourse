// LinkList_WithHN_Derive.h

#ifndef LinkList_WithHN_Derive_H
#define LinkList_WithHN_Derive_H

#include "LinkList_WithHN_Basic.cpp"
#include "LinkList_WithHN_Basic.h"

using namespace LinkListWithHNBasicMethod;

namespace LinkListWithHNDeriveMethod
{
    void PushItemByArray_L(LinkList &L, int length, int *array);
    void Union_L(LinkList A, LinkList B, LinkList &R);
    void Intersection_L(LinkList A, LinkList B, LinkList &R);
    void Difference_L(LinkList A, LinkList B, LinkList &R);
}
#endif
