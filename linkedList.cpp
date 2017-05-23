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

linkedList::linkedList() : linkedList("")
{
}

linkedList::linkedList(string strContent)
{
    listElement element(strContent);

    setActiveElement(&element);
    setStartElement(&element);
}

linkedList::linkedList(linkedList* pListe)
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

linkedList::insertElement(int i, string s )
{
    // Schleife um Adresse der Elementnummer zu bekommen

}

linkedList::sortList()
{
    // Bubblesort-Algorithmus
    int amountOfElements = getAmountOfElements();
    for(int i = 1; i <= amountOfElements; i++)
    {
        for(int j = 1; j <= amountOfElements; j++)
        {
            if(int(getAddressOfElementsNumber(j).getContent()[0])
               > int(getAddressOfElementsNumber(j+1).getContent()[0])
            {
                string strTemp = getAddressOfElementsNumber(j).getContent();
                getAddressOfElementsNumber(j).setContent(getAddressOfElementsNumber(j+1).getContent());
                getAddressOfElementsNumber(j+1).setContent(strTemp);
            }//endif
        }//endfor
    }//endfor
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
