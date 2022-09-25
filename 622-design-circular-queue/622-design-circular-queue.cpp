class MyCircularQueue {
public:
    int k;
    int front,rear;
    int *arr;
    MyCircularQueue(int k) {
        arr=new int[k];
        this->k=k;
        this->front=0;
        this->rear=-1;
    }
    ~MyCircularQueue() {
        delete[] arr;
    }
    bool enQueue(int value) {
        if(rear==k-1)
            return false;
        else 
        {
            rear++;
            arr[rear]=value;
            return true;
        }
    }
    
    bool deQueue() {
        if(rear==-1)
            return false;
        else
        {
            for(int i=0;i<rear;i++)
                arr[i]=arr[i+1];
            rear--;
            return true;
        }
        
    }
    
    int Front() {
        if(rear==-1) return -1;
        else return arr[0];
    }
    
    int Rear() {
        if(rear==-1) return -1;
        else return arr[rear];
    }
    
    bool isEmpty() {
        if(rear==-1) return true;
        else return false;
    }
    
    bool isFull() {
        if(rear==k-1) return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */