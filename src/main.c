#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


sint32_t main() {

	queue q1;

	queue_init(&q1);

	enqueue(&q1, 7);
	enqueue(&q1, 8);
	enqueue(&q1, 11);
	enqueue(&q1, 17);
	enqueue(&q1, 10);
	enqueue(&q1, 15);
	enqueue(&q1, 111);
	enqueue(&q1, 777);
	enqueue(&q1, 888);
	enqueue(&q1, 1000);

	if (isQueueEmpty(&q1))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is not Empty\n");
	}
	printf("value of the head  = %d\n", Q_Top(&q1));
	printf("value of the Tail = %d\n", Q_tail(&q1));
	int v;
	while ((v = dequeue(&q1)) != Empty_Queue)
	{
		printf("value = %d\n", v);
	}
	if (isQueueEmpty(&q1))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is not Empty\n");
	}
	return 0;
}

