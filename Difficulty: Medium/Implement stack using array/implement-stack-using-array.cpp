class myStack {
  public:
    int cap;
    vector<int> arr;
    
    myStack(int n) {
        cap =n;
    }

    bool isEmpty() {
        // check if the stack is empty
        return arr.empty() ;
    }

    bool isFull() {
        // check if the stack is full
        return arr.size()==cap;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(arr.size()!=cap){
            arr.push_back(x);
        }
    }

    void pop() {
        // removes an element from the top of the stack
        if(arr.size()!=0){
            arr.pop_back();
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(arr.empty()) return -1;
        return arr.back();
        
    }
};