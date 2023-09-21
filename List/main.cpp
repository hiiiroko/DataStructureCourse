#include "SqList.cpp"
#include "SqList.h"

void SQExam();

int main()
{
    SQExam();
    return 0;
}

void SQExam()
{
    using namespace std;
    using namespace SQListMethod;
    SqList L;                                                                         // 定义一个顺序线性表
    InitList_Sq(L);                                                                   // 初始化顺序线性表
    cout << "初始化后的顺序线性表的长度为：" << ListLength_Sq(L) << endl;             // 输出顺序线性表的长度
    cout << "初始化后的顺序线性表是否为空：" << ListEmpty_Sq(L) << endl;              // 输出顺序线性表是否为空
    cout << "在顺序线性表的第1个位置插入元素10：" << ListInsert_Sq(L, 1, 10) << endl; // 在顺序线性表的第1个位置插入元素10
    cout << "插入后的顺序线性表为：" << endl;
    ListTraverse_Sq(L);                                                               // 遍历并输出顺序线性表
    cout << "在顺序线性表的第2个位置插入元素20：" << ListInsert_Sq(L, 2, 20) << endl; // 在顺序线性表的第2个位置插入元素20
    cout << "插入后的顺序线性表为：" << endl;
    ListTraverse_Sq(L);                                                               // 遍历并输出顺序线性表
    cout << "在顺序线性表的第3个位置插入元素30：" << ListInsert_Sq(L, 3, 30) << endl; // 在顺序线性表的第3个位置插入元素30
    cout << "插入后的顺序线性表的长度为：" << ListLength_Sq(L) << endl;               // 输出顺序线性表的长度
    cout << "插入后的顺序线性表是否为空：" << ListEmpty_Sq(L) << endl;                // 输出顺序线性表是否为空
    cout << "插入后的顺序线性表为：" << endl;
    ListTraverse_Sq(L);                                                         // 遍历并输出顺序线性表
    ElemType e;                                                                 // 定义一个元素变量
    cout << "获取顺序线性表的第2个元素：" << GetElem_Sq(L, 2, e) << endl;       // 获取顺序线性表的第2个元素
    cout << "获取到的元素为：" << e << endl;                                    // 输出获取到的元素
    cout << "查找元素20在顺序线性表中的位置：" << LocateElem_Sq(L, 20) << endl; // 查找元素20在顺序线性表中的位置
    cout << "查找元素10的前驱元素：" << PriorElem_Sq(L, 10, e) << endl;         // 查找元素10的前驱元素
    cout << "获取到的前驱元素为：" << e << endl;                                // 输出获取到的前驱元素
    cout << "查找元素30的后继元素：" << NextElem_Sq(L, 30, e) << endl;          // 查找元素30的后继元素
    cout << "获取到的后继元素为：" << e << endl;                                // 输出获取到的后继元素
    cout << "删除顺序线性表的第1个元素：" << ListDelete_Sq(L, 1, e) << endl;    // 删除顺序线性表的第1个元素
    cout << "删除掉的元素为：" << e << endl;                                    // 输出删除掉的元素
    cout << "删除后的顺序线性表为：" << endl;
    ListTraverse_Sq(L); // 遍历并输出
    cout << "清空顺序线性表：" << endl;
    ClearList_Sq(L);                                                    // 清空顺序线性表
    cout << "清空后的顺序线性表的长度为：" << ListLength_Sq(L) << endl; // 输出顺序线性表的长度
    cout << "清空后的顺序线性表是否为空：" << ListEmpty_Sq(L) << endl;  // 输出顺序线性表是否为空
    cout << "销毁顺序线性表：" << endl;
    DestroyList_Sq(L);                                                  // 销毁顺序线性表
    cout << "销毁后的顺序线性表的长度为：" << ListLength_Sq(L) << endl; // 输出顺序线性表的长度
    cout << "销毁后的顺序线性表是否为空：" << ListEmpty_Sq(L) << endl;  // 输出顺序线性表是否为空
}