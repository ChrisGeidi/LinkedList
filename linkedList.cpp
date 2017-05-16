///////////////////////////////////////////////////////////////////////////////
//
// File: linkedList.cpp
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

#include "listElement.h"
#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
    listElement element("");

    setActualElement(0);
    setStartElement(0);
}

linkedList::linkedList( linkedList )
{
}

linkedList::append( string s )
{
}

linkedList::insert( int i, string s )
{
}

linkedList::sort()
{
}

linkedList::deleteElement( int i )
{
}

linkedList::deleteElement( string s )

ostream& operator<< ( ostream& os, const linkedList& liste )
{
}

linkedList::setActualElement( listElement* le )
{
}

linkedList::setStartElement( listElement* le )
{
}

linkedList::getActualElement()
{
}

linkedList::getStartElement()
{
}

/////////////////// End of File <linkedList.cpp> //////////////////////////////
