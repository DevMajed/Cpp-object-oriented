# Queue
This project is a good demonstration ofclass construction, class composition, pointers and linked lists, heap memory management with C++ new/delete operators.


# Description
Creating a Queue class that implements a queue abstraction. A queue is a FIFO list (First In First Out queue). We will need to make two classes, The first one is the Queue class where all the algorithm is implemented,and the second class is the Queueitem class which gnerate and delete iteams and allocate memory. 

The Queue class needs to implement the following operations: \
adding to the queue at one end (the tail)\
removing from the queue at the other end (the head)\
printing all items the queue (from head to tail)\
erasing all items in the queue (leaving the queue empty).\
destructor to empty the queue before it's destroyed (to release all memory)\
Additions and removals always occur at the opposite ends of the queue.

# Testing
To teset the class i made a main function that does the following: 

Create a Queue \
Call Remove. Should do nothing since the Queue is empty. \
Add 4 elements. \
Print out the list, both the number and data. \
Remove 2 elements. \
Add 4 elements. \
Print out the list, both the number and data. \
Remove 4 elements \
Print out the list, both the number and data. \
Erase the queue. \
Add  3 elements. \
Print out the list, both the number and data. \
Erase the queue. \
Print out the list.
