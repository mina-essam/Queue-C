#ifndef QUEUE_H
#define QUEUE_H

#define Empty_Queue INT_MIN

typedef struct Node {
	sint32_t value;
	struct Node* next;
}node;

typedef struct Queue {
	node* head;
	node* tail;
}queue;


void queue_init(queue*);
_bool enqueue(queue*, sint32_t);
sint32_t dequeue(queue*);
sint32_t Q_Top(queue*);
sint32_t Q_tail(queue*);
_bool isQueueEmpty(queue*);

#endif