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

linkedList::linkedList() : linkedList("");
{
}

linkedList::linkedList(string strContent)
{
    listElement element(strContent);

    setActiveElement(&element);
    setStartElement(&element);
}

linkedList::linkedList(linkedList liste)
{
}

linkedList::append(string strContent)
{
    listElement* ptrNewElement = new listElement;
    listElement* ptrLastElement = getActiveElement();

    ptrNewElement->setContent(strContent);
    ptrLastElement->setNextElement(ptrNewElement);
    setActiveElement(ptrNewElement);
}

linkedList::insertElement( int i, string s )
{
}

linkedList::sortList()
{
}

linkedList::deleteElement( int i )
{
}

linkedList::deleteElement( string s )

ostream& operator<< ( ostream& os, const linkedList& liste )
{
}

void linkedList::setActiveElement( listElement* pListElement )
{
    active = pListElement;
}

void linkedList::setStartElement( listElement* pListElement )
{
    start = pListElement;
}

listElement* linkedList::getActiveElement()
{
    return active;
}

listElement* linkedList::getStartElement()
{
    return start;
}

/////////////////// End of File <linkedList.cpp> //////////////////////////////
