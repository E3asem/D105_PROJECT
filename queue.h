#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED



enum check
{
FULL,
NOT_FULL,
EMPTY,
NOT_EMPTY
};

static enum check queue_isFull(void);
static enum check queue_isEmpty(void);
static void queue_enqueue(void);
static void queue_dequeue(void);
static void queue_display(void);
 void queue_app(void);



#endif // QUEUE_H_INCLUDED
