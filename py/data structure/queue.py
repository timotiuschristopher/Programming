?
class Queue:
    def __init__(self):
        self.items = [] 

    def isEmpty(self):
        return self.items == []

    def display(self):
        print(self.items)

    # def isFull(self):
    #     if len(self.items) > 4:
    #         return ("The queue is full!")

    def enqueue(self, item):
        self.items.append(item) #append to insert item
            
    def dequeue(self):
        if len(self.items) < 1:
            return ("No elements in Queue!")
        return print('The item that was dequeued:', self.items.pop(0)) #removing the first item / front

    def size(self):
        return print('The size of list is', len(self.items))

q=Queue()

q.enqueue('first item') 
q.enqueue('second item')
q.enqueue('third item')
q.enqueue('fourth item')

print(q.isEmpty())

q.display()
q.size()

q.dequeue()
q.display()
q.size()
q.dequeue()
q.size()
q.enqueue('fifth item')
q.display()
q.size()