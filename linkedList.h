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
// Marc T�pker
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
    void append( std::string );      // element an das ende der liste anh�ngen
    void insert( int, std::string ); // element an einer bestimmten position einf�gen
    void deleteElement( int );   // soll ein element an einer stelle l�schen
    void deleteElement( std::string );// soll ein element mit dem Content l�schen
    /* �berladungsfkt */
    friend std::ostream& operator<< (std::ostream& os, const linkedList& liste);
};

#endif // linkedList_H

/////////////////// End of File <linkedList.h> ////////////////////////////////

