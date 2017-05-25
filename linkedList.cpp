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
string emptyString = "Test";
linkedList::linkedList() : linkedList(emptyString)
{
    //cout << "Default-Konstruktor" << endl;
}

linkedList::linkedList(string strContent)
{
    //cout << "Custom-Konstruktor: "<< strContent << endl;
    listElement* ptrNewElement = new listElement;
    ptrNewElement->setContent(strContent);

    setStartElement(ptrNewElement);
    setActiveElement(ptrNewElement);

    //cout  << "StartElement: " << getStartElement() << endl;
    //cout  << "ContentStart: " << getStartElement()->getContent() << endl;
    //cout  << "aktivesElement: " << getActiveElement() << endl;
    //cout  << "ContentActive: " << getActiveElement()->getContent() << endl;
    //cout << endl;
}

//linkedList::linkedList(linkedList& pListe)
//{
//}

linkedList::~linkedList()
{
    // Erstes listElement holen
    int i=0;
    listElement* actualElement = getStartElement();
    listElement* nextElement;
    // ELemente e
    while(actualElement != 0)
    {
        nextElement = actualElement->getNextElement();
        delete actualElement;
        actualElement = nextElement;
        i++;
    }
    cout << i << " elements deleted!" << endl;
}

void linkedList::append(string strContent)
{
    //cout << "appendStart: " << strContent << endl;
    // Neues Listen element erzeugen
    listElement* ptrNewElement = new listElement;
    listElement* ptrLastElement = getActiveElement();
    //cout << "ptrLastElement: " << ptrLastElement << endl;
    //cout << "Content: " << ptrLastElement->getContent() << endl;

    ptrNewElement->setContent(strContent);
    ptrLastElement->setNextElement(ptrNewElement);
    setActiveElement(ptrNewElement);
    //cout << "ptrNewElement: " << ptrNewElement << endl;
    //cout << "Content: " << ptrNewElement->getContent() << endl;
    //cout << "appendEnde" << endl << endl;
}

void linkedList::insertElement(int i, string s )
{
    int j=0;
    // Erstes listElement holen
    listElement* newElement = new listElement;
    listElement* actualElement = getStartElement();
    listElement* lastElement = actualElement;
    listElement* nextElement = actualElement;

    // set content new element
    newElement->setContent(s);

    // ELemente e
    while(actualElement != 0)
    {
        nextElement = actualElement->getNextElement();
        if ( i==j )
        {
            if(i == 0)
            {
                setStartElement(newElement);
                newElement->setNextElement(actualElement);
            }
            else
            {
            lastElement->setNextElement(newElement);
            newElement->setNextElement(actualElement);
            }
        }
        lastElement = actualElement;
        actualElement = actualElement->getNextElement();
        j++;
    }
    // if  position higher then length of LinkedList append
    if (i>j)
    {
        lastElement->setNextElement(newElement);
    }
}
/*
void linkedList::sortList()
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
*/
void linkedList::deleteElement(int i)
{
    int j=0;
    // Erstes listElement holen
    listElement* actualElement = getStartElement();
    listElement* lastElement = actualElement;

    // ELemente e
    while(actualElement != 0)
    {
        if ( i==j )
        {
            if(i == 0)
            {
                setStartElement(actualElement->getNextElement());
                delete actualElement;
                break;
            }
            else
            {
            lastElement->setNextElement(actualElement->getNextElement());
            delete actualElement;
            break;
            }
        }
        lastElement = actualElement;
        actualElement = actualElement->getNextElement();
        j++;
    }
}

void linkedList::deleteElement( string s )
{
    int i=0;
    // Erstes listElement holen
    listElement* actualElement = getStartElement();
    listElement* lastElement = actualElement;

    // ELemente e
    while(actualElement != 0)
    {
        if ( s==actualElement->getContent() )
        {
            if(i == 0)
            {
                setStartElement(actualElement->getNextElement());
                delete actualElement;
                break;
            }
            else
            {
            lastElement->setNextElement(actualElement->getNextElement());
            delete actualElement;
            break;
            }
        }
        lastElement = actualElement;
        actualElement = actualElement->getNextElement();
        i++;
    }
}

ostream& operator<< ( ostream& os, linkedList& liste )
{
    int i=0;
    cout << "Content: " << endl;
    // Erstes listElement holen
    listElement* element = liste.getStartElement();

    // ELemente der reihe nach ausgaben
    while(element != 0)
    {
        // Ausgabe des Aktuellen Elements
        os << i << ": \t" << element->getContent() << endl;
        // nächstes Element holen/setzen
        element = element->getNextElement();
        i++;
    }

    return os;
}
/*
int linkedList::getAmountOfElements(  )const
{
    int i=0;
    listElement* element = getStartElement();
    while(element != 0)
    {
        element = element->getNextElement();
        i++;
    }
    return i;
}
*/
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
