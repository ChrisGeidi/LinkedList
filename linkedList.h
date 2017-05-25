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

class linkedList
{
private:
    //int amountOfElements;
    listElement* start;
    listElement* active;

    /* set functions */
    void setStartElement( listElement* );
    void setActiveElement ( listElement* );





public:
    /* Konstruktoren */
    linkedList(  );                         //initialize LinkedList
    linkedList( std::string );              //initialize LinkedList with content
    //linkedList( linkedList& );               //copyConstructor for LinkedList
    /* Destruktor */
    ~linkedList();
    /* Schnittstellenfkt */
    void sortList(  );                      // sortierung asc
    void append( std::string );             // element an das ende der liste anhängen
    void insertElement( int, std::string ); // element an einer bestimmten position einfügen
    void deleteElement( int );              // soll ein element an einer stelle löschen
    void deleteElement( std::string );      // soll ein element mit dem Content löschen
    /* get functions */
    listElement* getStartElement (  );
    listElement* getActiveElement (  );
    int getAmountOfElements() const;
    //listElement* getAddressOfElementsNumber(int);   // gibt Adresse eines numerierten Elementes zurück
    /* Überladungsfkt */
    friend std::ostream& operator<< (std::ostream& os,  linkedList& liste);
};

#endif // linkedList_H

/////////////////// End of File <linkedList.h> ////////////////////////////////

