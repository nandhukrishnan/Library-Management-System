//Project: Library Management System
//File: Book.h  
//Author: Nandhu Krishnan

#ifndef BOOK_H
#define BOOK_H

#include "Definitions.h"
#include "BookLog.h"

class Book
{
    private:
        STRING bookName, bookAuthor;
        UINT bookNumber, shelfNumber, numberOfCopies;
    public:
        void setBook(STRING,STRING,UINT,UINT);
        Book getBook(UINT);
        int getNumberOfAvailableCopies(UINT);
        BookLog* getBorrowHistory(UINT);

};

#endif