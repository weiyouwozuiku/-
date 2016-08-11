#pragma once
#ifndef Queue
#define Queue
#include<iostream>
#include"Customer.h"
using namespace std;
class MyQueue
{
public:
	MyQueue(int queueCapacity);//InitQueue(&Q)��������
	virtual ~MyQueue();//DestoryQueue(&Q)���ٶ���
	void ClearQueue();//ClearQueue(&Q)��ն���
	bool QueueEmpty()const;//QueueEmpty(Q)�пն���
	bool QueueFull()const;//QueueFull(Q)��������
	int QueueLength()const;//QueueLength(Q)���г���
	bool EnQueue(Customer element);//EnQueue(&Q,element)��Ԫ�����
	bool DeQueue(Customer &element);//DeQueue(&Q,&element)��Ԫ�س���
	void QueueTraverse();//QueueTraverse(Q,visit())��������
private:
	Customer *m_pQueue;//��������ָ��
	int m_iQueueLen;//����Ԫ�ظ���
	int m_iQueueCapacity;//������������
	int m_iHead;
	int m_iTail;
};

#endif