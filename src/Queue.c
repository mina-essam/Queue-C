#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Queue.h"

void queue_init(queue* _queue) {
	_queue->head = NULL;
	_queue->tail = NULL;
}
_bool enqueue(queue* _queue, sint32_t value) {
	
	/*Define new node to insert value*/
	node* newQueue_node = (node*)malloc(sizeof(node));

	//check if the node successfully allocated 
	if (newQueue_node == NULL) 
		return false;

	/*Assign the value to the new node
		making the pointer refers to null as this is the final node 
		inserted
	*/
	newQueue_node->value = value;
	newQueue_node->next = NULL;

	/* if the tail queue already points to another node

	 * make it refer to the latest inserted node


	*/
	if (_queue->tail != NULL)
	{
		_queue->tail->next = newQueue_node;
	}

	/* this line to ensure that the tail will refer to the new node
	*  if it is a new insertion 	
	*/
	
	_queue->tail = newQueue_node;

	/* make the head points to the new node */
	if (_queue->head == NULL)
	{
		_queue->head = newQueue_node;
	}

	return true;
}
sint32_t dequeue(queue *_queue) {
	
	//check if the head points to nothing return a Empty Queue
	if (_queue->head == NULL)
		return Empty_Queue;
	
	/*Create temp node to save the head pointer
	* we make it = to head to hold the queue from the beginning
	*/
	node* TempQueueNode = _queue->head;
	/*variable to hold the queue variable */
	
	sint32_t value = TempQueueNode->value;
	// Making the pointing to next node
	_queue->head = _queue->head->next;
	if (_queue->head == NULL)
	{
		_queue->tail = NULL;
	}
	free(TempQueueNode);
	return value;

}
sint32_t Q_Top(queue* q) {
	return q->head->value;
}
sint32_t Q_tail(queue* q) {
	return q->tail->value;
}

_bool isQueueEmpty(queue* q) {
	return q ->head == NULL;
}