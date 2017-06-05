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

#include "listElement.cpp"
#include "linkedList.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
template <class T>
linkedList<T>::linkedList(  )
{
    length = 0;
    setStartElement(0);
    setActiveElement(0);
}

template <class T>
linkedList<T>::linkedList( T content )
{
    listElement<T>* ptrNewElement = new listElement<T>(content);
    setStartElement(ptrNewElement);
    setActiveElement(ptrNewElement);
    length = 1;
}

template <class T>
linkedList<T>::~linkedList(  )
{
    // Erstes listElement holen
    int i=0;
    listElement<T>* actualElement = getStartElement();
    listElement<T>* nextElement;
    // ELemente e
    while(actualElement != 0)
    {
        nextElement = actualElement->getNextElement();
        delete actualElement;
        actualElement = nextElement;
        i++;
    }
    cout    << "Destructor: "
            << i
            << " elements deleted!"
            << endl;
}

template <class T>
void linkedList<T>::append( T content )
{
    listElement<T>* newElement = new listElement<T>(content);
    if( getStartElement() == 0 )
    {
        setStartElement(newElement);
    }
    else
    {
        getActiveElement()->setNextElement(newElement);
    }
    setActiveElement(newElement);
    length ++;
}

template <class T>
void linkedList<T>::insertElement(int pos, T content)
{
    int i=0;
    // Erstes listElement holen
    listElement<T>* newElement = new listElement<T>(content);
    listElement<T>* actualElement = getStartElement();
    listElement<T>* lastElement = actualElement;
    listElement<T>* nextElement = actualElement;

    // ELemente e
    while(actualElement != 0)
    {
        nextElement = actualElement->getNextElement();
        if ( pos==i )
        {
            if(pos == 0)
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
        i++;
    }
    // if  position higher then length of LinkedList append
    if (pos>=i)
    {
        lastElement->setNextElement(newElement);
    }
    length ++;
}



template <class T>
void linkedList<T>::setActiveElement( listElement<T>* pListElement )
{
    active = pListElement;
}

template <class T>
void linkedList<T>::setStartElement( listElement<T>* pListElement )
{
    start = pListElement;
}

template <class T>
listElement<T>* linkedList<T>::getActiveElement(  )
{
    return active;
}

template <class T>
listElement<T>* linkedList<T>::getStartElement(  )
{
    return start;
}

template <class T>
int linkedList<T>::getLength(  )
{
    return length;
}


// TODO (C.Geitner#1#): Lower- / Uppercase ignorieren
// TODO (Marc Töpker#1#): Muss für Templateklasse noch angepasst werden, funktioniert nur mit strings ...
//
template <typename T>
string linkedList<T>::to_string(T const& value)
{
    stringstream sstr;
    sstr << value;
    return sstr.str();
}

template <class T>
void linkedList<T>::sortList(  )
{
    // Bubblesort-Algorithmus
    for(int i = 1; i <= length; i++)
    {
        // Erstes listElement holen
        listElement<T>* element1 = getStartElement();
        // Zweites listElement holen
        listElement<T>* element2 = element1->getNextElement();

        // Elemente auf Reihenfolge pruefen
        while(element2 != 0)
        {
            int j = 0;

            string strContent1 = to_string(element1->getContent());
            string strContent2 = to_string(element2->getContent());

            // Den naechsten Buchstaben pruefen, falls bei beiden strings
            // identisch

            while(strContent1[j] == strContent2[j])
            {
                j++;
            }

            // Strings der Elemente vertauschen, falls ASCII-Wert der
            // entsprechenden Stelle des ersten Elementes groeßer als der
            // des zweiten Elementes ist
            if(int(strContent1[j]) > int(strContent2[j]))
            {
                element1->swapContent(element2);
            }


            // Mit den folgenden Elementen fortfahren
            element1 = element2;
            element2 = element1->getNextElement();
        }//endwhile
    }//endfor
}

template <class T>
void linkedList<T>::printList(  )
{
    int                 i = 0;
    listElement<T>*     element;

    cout    << "\t"
            << "Nr.:\t"
            << "Inhalt:\t\t"
            << "Adresse:\t"
            << "Next:\t"
            << endl;

    element = getStartElement();
    while (element != 0)
    {
        i++;
       cout << "\t"     << i
            << "\t"     << element->getContent()
            << "\t\t"   << element
            << "\t"     << element->getNextElement()
            << endl;

        element = element->getNextElement();
    }
    cout    << endl;


}

template <class T>
void linkedList<T>::deleteElement( int pos )
{
    int i=0;
    // Erstes listElement holen
    listElement<T>* actualElement = getStartElement();
    listElement<T>* lastElement = actualElement;

    // ELemente e
    while(actualElement != 0)
    {
        if ( pos==i )
        {
            if(pos == 0)
            {
                setStartElement(actualElement->getNextElement());
                delete actualElement;
                length--;
                break;
            }
            else
            {
            lastElement->setNextElement(actualElement->getNextElement());
            delete actualElement;
            length--;
            break;
            }
        }
        lastElement = actualElement;
        actualElement = actualElement->getNextElement();
        i++;
    }

}

template <class T>
void linkedList<T>::removeElement( T content )
{
    int i=0;
    // Erstes listElement holen
    listElement<T>* actualElement = getStartElement();
    listElement<T>* lastElement = actualElement;

    // ELemente e
    while(actualElement != 0)
    {
        if ( content==actualElement->getContent() )
        {
            if(i == 0)
            {
                setStartElement(actualElement->getNextElement());
                delete actualElement;
                length--;
                break;
            }
            else
            {
            lastElement->setNextElement(actualElement->getNextElement());
            delete actualElement;
            length--;
            break;
            }
        }
        lastElement = actualElement;
        actualElement = actualElement->getNextElement();
        i++;
    }
}

template <class T>
ostream&operator <<(ostream& os, linkedList<T>& liste)
{
    int i=0;
    os  << "\t"
        << "Nr.:\t"
        << "Inhalt:\t\t"
        << "Adresse:\t"
        << "Next:\t"
        << endl;
    // Erstes listElement holen
    listElement<T>* element = liste.getStartElement();

    // ELemente der reihe nach ausgaben
    while(element != 0)
    {
        i++;
       os   << "\t"     << i
            << "\t"     << element->getContent()
            << "\t\t"   << element
            << "\t"     << element->getNextElement()
            << endl;


        // Ausgabe des Aktuellen Elements
        //os << i << ": \t" << element->getContent() << endl;
        // nächstes Element holen/setzen
        element = element->getNextElement();

    }

  return os ;
}

/////////////////// End of File <linkedList.cpp> //////////////////////////////

