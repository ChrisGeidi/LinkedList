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
using namespace std;
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
    linkedList();               //initialize LinkedList
    linkedList("");             //initialize LinkedList with content
    linkedList(linkedList);     //copyConstructor for LinkedList
    /* Schnittstellenfkt */
    void sort(  );              // sortierung asc
    void append( string );      // element an das ende der liste anhängen
    void insert( int, string ); // element an einer bestimmten position einfügen
    void deleteElement( int )   // soll ein element an einer stelle löschen
    void deleteElement( string )// soll ein element mit dem Content löschen
    /* Überladungsfkt */
    friend ostream& operator<< (ostream& os, const rational& ratBruch);
};

#endif // linkedList_H

/////////////////// End of File <linkedList.h> //////////////////////////////////

