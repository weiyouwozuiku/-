#include<iostream>
#include<stdlib.h>
#include"MyQueue.h"
using namespace std;
/*
实现环形队列
*/
int main(void) {
	MyQueue *p = new MyQueue(4);
	Customer c1("zhangsan", 20);
	Customer c2("lisi", 30);
	Customer c3("wangwu", 24);
	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);
	p->QueueTraverse();
	//MyQueue *p = new MyQueue(4);
	//p->EnQueue(10);
	//(*p).EnQueue(12);
	//p->EnQueue(16);
	//p->EnQueue(18);
	////p->EnQueue(20);
	//p->QueueTraverse();
	//
	//cout << endl;
	//int e = 0;
	//p->DeQueue(e);
	//cout << e << endl;
	//cout << endl;
	//p->DeQueue(e);
	//cout << e << endl;
	//

	//p->EnQueue(20);
	//p->EnQueue(30);


	//cout << endl;
	//p->QueueTraverse();
	//delete p;
	//p = nullptr;
	system("pause");
	return 0;
}