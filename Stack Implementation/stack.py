
class Stack:
    def __init__(self) -> None:
        self.stack = []

    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if self.is_empty():
            print("The stack is empty")
        else:
             return self.stack.pop()
       
    def size(self):
        return len(self.stack)
    
    def is_empty(self):
        if len(self.stack) == 0:
            return True
        else:
            return False
        
    def peek(self):
        return self.stack[-1]
    

s = Stack()
s.push(9)
s.push(39)
s.push(66)

print("the size of stack", s.size())
print("pop of stack", s.pop())
print("pop  of stack", s.pop())
print("the size of stack", s.size())
print("peek of stack", s.peek())
print("the size of stack", s.size())
print("is empty  stack", s.is_empty())
