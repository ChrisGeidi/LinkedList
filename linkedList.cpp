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
    cout << "Default-Konstruktor" << endl;
}

linkedList::linkedList(string strContent)
{
    cout << "Custom-Konstruktor: "<< strContent << endl;
    listElement* ptrNewElement = new listElement;
    ptrNewElement->setContent(strContent);

    setStartElement(ptrNewElement);
    setActiveElement(ptrNewElement);

    cout  << "StartElement: " << getStartElement() << endl;
    cout  << "ContentStart: " << getStartElement()->getContent() << endl;
    cout  << "aktivesElement: " << getActiveElement() << endl;
    cout  << "ContentActive: " << getActiveElement()->getContent() << endl;
    cout << endl;
}

//linkedList::linkedList(linkedList& pListe)
//{
//}

linkedList::~linkedList()
{
    cout << "Destruktor wurde aufgerufen!" << endl;
}

void linkedList::append(string strContent)
{
    cout << "appendStart: " << strContent << endl;
    // Neues Listen element erzeugen
    listElement* ptrNewElement = new listElement;
    listElement* ptrLastElement = getActiveElement();

    //
    cout << "ptrLastElement: " << ptrLastElement << endl;
    cout << "Content: " << ptrLastElement->getContent() << endl;

    ptrNewElement->setContent(strContent);
    ptrLastElement->setNextElement(ptrNewElement);
    setActiveElement(ptrNewElement);
    cout << "ptrNewElement: " << ptrNewElement << endl;
    cout << "Content: " << ptrNewElement->getContent() << endl;

    cout << "appendEnde" << endl << endl;
}

void linkedList::insertElement(int i, string s )
{
    // Schleife um Adresse der Elementnummer zu bekommen

}

/*void linkedList::sortList()
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
}*/

void linkedList::deleteElement(int i)
{
}

void linkedList::deleteElement( string s )
{

}

ostream& operator<< ( ostream& os, linkedList& liste )
{
    int i=0;
    cout << "Ausgabe start: " << endl;
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
