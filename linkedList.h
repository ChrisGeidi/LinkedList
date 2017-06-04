
///////////////////////////////////////////////////////////////////////////////
//
// File: linkedList.h
//
// Ingenieurorientierte Programmierung
// Dr. Alexander Kling
//
// Carsten Bevermann
// Christoph Geitner
// Jens Reimer
// Marc Töpker
//
///////////////////////////////////////////////////////////////////////////////

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "listElement.h"
#include <stdio.h>


template <class T> class linkedList
{
private:
    listElement<T>* start;      // beginnendes element
    listElement<T>* active;     // akutelles bzw. zuletzt eingefügtes element

    void setStartElement( listElement<T>* );
    void setActiveElement ( listElement<T>* );
public:
    linkedList(  );
    linkedList( T );

    ~linkedList();

    void sortList(  );
    void append( T );
    void insertElement( int, T );
    void deleteElement( int );

    listElement<T>* getStartElement (  );
    listElement<T>* getActiveElement (  );
    int getAmountOfElements();              //Anzahl der Elemente in der Liste ausgeben
    //listElement* getAddressOfElementsNumber(int);   // gibt Adresse eines numerierten Elementes zurück
    /* Überladungsfkt */
    friend std::ostream& operator<< (std::ostream& os,  listElement<T>& liste);
};

#endif // linkedList_H

/////////////////// End of File <linkedList.h> ////////////////////////////////

