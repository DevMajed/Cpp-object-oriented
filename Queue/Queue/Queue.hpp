//
//  Queue.hpp
//  Created by Majed Mesh on 6/21/20.
//  Copyright © 2020 Majed Mesh. All rights reserved.
//

class QueueItem;    // forward class description
#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include <stdio.h>
#include "Queue.hpp"
#include "QueueItem.hpp"




class Queue {
    
  

    
public:

    // default Constructur, setting all to 0
      Queue()
      {
          _pHead = _pTail = 0; // so we dont get garpage values
          _itemCounter = 0; // Counts
      }
    
    // Destrcuture to erases any remaining QueueItems
    ~Queue()
    {
        Queue::erase();
    }

    
    void addItem(const char *pData);
    void removeItem(); // remove the item in the head ( should use the head pointer )
    void erase(); 
    void print();

private:
    QueueItem *_pHead; // Making a pointer of tyoe QueueItem that always points to first QueueItem in the list
    QueueItem *_pTail; // Making a pointer of type QueueItem always points to the last QueueItem in the list
    int _itemCounter;  // always increasing for a unique id to assign to each new QueueItem
};

#endif
