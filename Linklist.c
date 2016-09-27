/*************************************************************************
    > File Name: Linklist.c
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年09月27日 星期二 08时52分17秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<Linklist.h>
typedef struct _tag_LinkList
{
	//带头节点的链表
	LinkListNode header;
	int length;
}TLinkList;
LinkList* LinkList_Create(){
	TLinkList *tlink=(TLinkList *)malloc(sizeof(TLinkList));
	if(tlink==NULL){
		return NULL;
	}
	tlink->header=NULL;
	tlink->length=0;
	return tlink;
}

void LinkList_Destroy(LinkList* list)
{
	if (list == NULL)
	{
		return ;
	}
	free(list);
	return ;
}

void LinkList_Clear(LinkList* list){
	TLinkList *tList =NULL;
	
	if (list == NULL)
	{
		return ;
	}
	tList = (TLinkList *)list;
	tList->length = 0;
	tList->header.next = NULL;
	return ;
}

int LinkList_Length(LinkList* list){

}

int LinkList_Insert(LinkList* list, LinkListNode* node, int pos){

}

LinkListNode* LinkList_Get(LinkList* list, int pos){

}

LinkListNode* LinkList_Delete(LinkList* list, int pos){

}
int main(){
	return 1;
}
