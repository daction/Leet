/*

You are given two linked lists representing two non-negative numbers.
The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

*/

//Credit to Zhang Lei

#include <iostream>
#include <cstdlib>

using namespace std;

struct ListNode{

    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){

    ListNode *result = new ListNode(-1);//why there's -1?
    ListNode *pre = result;
    ListNode *pa = l1;
    ListNode *pb = l2;
    int carry = 0;

    while(pa != NULL || pb != NULL){

        int av = pa == NULL ? 0 : pa->val; // condition (av = pa == NULL) if_true (av = pa == 0) else if_false (pa->val)
        int bv = pb == NULL ? 0 : pb->val;

        ListNode *node = new ListNode((av+bv+carry)%10);
        carry = (av+bv+carry)/10;
        pre->next = node;
        pre = pre->next;

        pa = pa == NULL ? NULL : pa->next;
        pb = pb == NULL ? NULL : pb->next;

    }
    if(carry > 0)
        pre->next = new ListNode(1);

    pre = result->next;
    delete result;
    return pre;

}

//Credit to Alex Dai

void printList(ListNode* head)
{
    if(NULL == head)
        return ;
    cout << head->val;
    while(head->next != NULL)
    {
        cout << "--->" << head->next->val;
        head = head->next;
    }
    cout << endl;
}

void deleteList(ListNode** head)
{
    if(NULL == head || NULL == *head)
        return ;
    ListNode* nextNode = NULL;

    while(*head != NULL)
    {
        nextNode = (*head)->next;
        delete (*head);
        *head = nextNode;
    }
    *head = NULL;
}

int main(){

/*
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(4);
    ListNode* l3 = new ListNode(3);

    ListNode* r1 = new ListNode(5);
    ListNode* r2 = new ListNode(6);
    ListNode* r3 = new ListNode(4);

    l1->next = l2;
    l2->next = l3;
  //  l3->next = l3;

    r1->next = r2;
    r2->next = r3;
  //  r3->next = r3;

    ListNode* result = addTwoNumbers(l1, r1);
    printList(result);

    deleteList(&l1);
    deleteList(&r2);
    deleteList(&result);

    return 0;


}
