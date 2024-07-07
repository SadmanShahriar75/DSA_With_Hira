class Stack:
    def __init__(self):
        self.items=[]

    def is_empty(self):
        if len(self.items) == 0:
            return True
        else:
            return False
        
    def push (self,data):
        self.items.append(data)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            raise IndexError("Stack is empty")
        
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
             raise IndexError("Stack is empty")
        
    def size(self):
        return len(self.items)
    

#CLASS AND OBJECT
s = Stack()
s.push(20)
s.push(30)
s.push(40)

print("pop", s.pop())
print("pop", s.pop())
print("peek", s.peek())
print("is empty", s.is_empty())
print(s.size())







