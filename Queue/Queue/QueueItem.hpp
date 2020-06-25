//
//  QueueItem.hpp
//  Created by Majed Mesh on 6/21/20.
//  Copyright © 2020 Majed Mesh. All rights reserved.
// This is for Queueitem class that represent eaach element in the Queueltem


#ifndef QueueItem_hpp
#define QueueItem_hpp

#include <iostream>
#include <stdio.h>
#include "Queue.hpp"
#include "QueueItem.hpp"

class QueueItem {
public:
    
    // Making this as the defult constructur
   QueueItem(const char *pData, int id): _itemId(id) // Member Initializer, put id value in _itemId

    {
        strncpy(_data, pData, strlen(pData) + 1); // Coppies pData to _data and stop at termnation of pData
        _pNext = NULL; // sets Null after last element
    }   // end QueItem constructor
     
    void setNext(QueueItem *pItem);
    QueueItem* getNext() const;
    int getId() const;
    const char* getData() const;
    
private:
    char _data[30];    // data value (null terminated character string)
    const int _itemId; // unique id for item in queue
    QueueItem* _pNext; // next item in queue};
};
#endif


