
class Queue:
    def __init__(self):
        self.items=[]
      
    def is_empty(self):
        if len(self.items) == 0:
            return True
        else:
            return False
        
    def enqueue(self, data):
        self.items.append(data)
    
    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        else:
            raise IndexError("Queue underflow")

    def get_front(self):
        if not self.is_empty():
            return self.items[0]
        else:
             raise IndexError("Queue underflow")
        
    def get_rear(self):
        if not self.is_empty():
            return self.items[-1]
        else:
             raise IndexError("Queue underflow")
        
    def size(self):
        return len(self.items)
    

q = Queue()
try:
    print(q.get_front())
except IndexError as e:
    print(e.args[0])
    
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.enqueue(40)
q.enqueue(50)

print("Front", q.get_front(),"Rear", q.get_rear())

try:
    q.dequeue()
    print("queue size", q.size(), "elements")
except IndexError as e:
     print(e.args[0])




    

