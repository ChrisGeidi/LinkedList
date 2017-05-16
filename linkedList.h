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

class linkedList
{
private:
    /* set functions */
    void setStartElement( listElement* );
    void setActualElement ( listElement* );

    /* get functions */
    listElement getStartElement (  );
    listElement getActualElement (  );


public:
    /* Konstruktoren */
    linkedList(  );               //initialize LinkedList
    linkedList( std::string );             //initialize LinkedList with content
    linkedList( linkedList );     //copyConstructor for LinkedList
    /* Schnittstellenfkt */
    void sort(  );              // sortierung asc
    void append( std::string );      // element an das ende der liste anhängen
    void insert( int, std::string ); // element an einer bestimmten position einfügen
    void deleteElement( int );   // soll ein element an einer stelle löschen
    void deleteElement( std::string );// soll ein element mit dem Content löschen
    /* Überladungsfkt */
    friend std::ostream& operator<< (std::ostream& os, const linkedList& liste);
};

#endif // linkedList_H

/////////////////// End of File <linkedList.h> ////////////////////////////////

