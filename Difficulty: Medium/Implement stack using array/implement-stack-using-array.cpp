class myStack {
    int *arr;
    int top;
    int capacity;

  public:
    myStack(int n) {
        capacity = n;
        arr = new int[n];
        top = -1;
        // Define Data Structures
    }

    bool isEmpty() {
        // check if the stack is empty
       return (top == -1);

    }

    bool isFull() {
        // check if the stack is full
         return (top == capacity - 1);

    }

    void push(int x) {
        // inserts x at the top of the stack
          if (!isFull()) {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        // removes an element from the top of the stack
          if (!isEmpty()) {
            top--;
        }
    }

    int peek() {
        // Returns the top element of the stack
         if (isEmpty())
            return -1;
        return arr[top];
    }
};