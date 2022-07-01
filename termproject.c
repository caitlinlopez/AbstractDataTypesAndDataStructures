typedef struct node {
	void **items; //array
	int length;
	int front;
 	int rear;
	int count;
	struct node* prev;
	struct node* next;
}NODE;

typedef struct list {
	NODE* head;
	NODE* tail;
	int count;
}LIST;

struct queue* newQueue(int size){
	struct queue *pt = NULL;
	pt = (struct queue*)malloc(sizeof(struct queue));

	pt->items = (int*)malloc(size * sizeof(int));
	pt->maxsize = size;
	pt->front = 0;
	pt->rear =  -1;
	pt->size = 0;

	return pt;
}


int main(){
	struct Node* head = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
}

//each added node will have a size of 2^n to make it more efficient
