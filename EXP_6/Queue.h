class Queue
{
        int rear,front;
        int arr[10];
     public:
        Queue();
        int isEmpty();
        int isFull();
        int Enqueue(int);
        int Dequeue();
        void Display();
};
