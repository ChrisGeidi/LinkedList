
#include "linkedList.h"

using namespace std;

int main()
{
    //Erzeugen eines Typs Liste
    //Mit sofortiger initialisierung durch den Custom-Konstrukt
    linkedList myList("");
    int i=0;

    string content;
    int position;



    cout << "********************************************************" << endl;
    cout << "* Projekt:       Liste                                 *" << endl;
    cout << "*                                                      *" << endl;
    cout << "* Carsten Bevermann, Christoph Geitner,                *" << endl;
    cout << "* Jens Reimer, Marc Toepker                            *" << endl;
    cout << "********************************************************" << endl;

    do
    {
    cout << endl;
    cout << "********************************************************" << endl;
    cout << "*                      Hauptmenue                      *" << endl;
    cout << "*     Bitte eine der folgenden Optionen auswaehlen:    *" << endl;
    cout << "*                                                      *" << endl;
    cout << "*   1: Beliebige Anzahl von Elementen anhaengen        *" << endl;
    cout << "*   2: Element an beliebiger Stelle einfuegen          *" << endl;
    cout << "*   3: Element an beliebiger Stelle loeschen           *" << endl;
    cout << "*   4: Bestimmtes Element loeschen                     *" << endl;
    cout << "*   5: Alphabetische Sortierung durchfuehren           *" << endl;
    cout << "*   6: Ausgabe der Liste                               *" << endl;
    cout << "*   7: Ausgabe der Anzahl der Listenelemente           *" << endl;
    cout << "*                                                      *" << endl;
    cout << "*   0: Beenden des Programmes!                         *" << endl;
    cout << "********************************************************" << endl<<endl;

    cout << "Auswahl: ";
    cin>>i;

        switch(i)
        {
        case 0:
            cout<<"EXIT"<<endl;
            break;
        case 1:
            cout<<"1: Beliebige Anzahl von Elementen anhaengen"<<endl;
            cout<<"Abbruch mit: !"<<endl<<endl;
                do
                {
                    cout<<"Name: ";
                    //cin >> content;
                    getline(cin, content);
                    if(content!="!")
                        myList.append(content);
                }
                while(content!="!");

            cout<<endl<<endl;
            break;
        case 2:
            cout<<"2: Element an beliebiger Stelle einfuegen"<<endl;
            cout<<"Name: ";
            cin>>content;
            cout<<"Position: ";
            cin>>position;
            myList.insertElement(position, content);
            break;
        case 3:
            cout<<"3: Element an beliebiger Stelle loeschen"<<endl;
            cout<<"Position: ";
            cin>>position;
            myList.deleteElement(position);
            break;
        case 4:
            cout<<"4: Bestimmtes Element loeschen"<<endl;
            cout<<"Name: ";
            cin>>content;
            myList.deleteElement(content);
            break;
        case 5:
            cout<<"5: Alphabetische Sortierung durchfuehren"<<endl;
            myList.sortList();
            cout << "Liste wurde sortiert!" << endl;
            break;
        case 6:
            cout<<"6: Ausgabe der Liste"<<endl<<endl;
            cout<<myList<<endl;
            break;
        case 7:
            cout<<"7: Ausgabe der Anzahl der Listenelemente"<<endl;
            cout<<"Anzahl der Listenelmente: "<<myList.getAmountOfElements()<<endl;
            break;

        default:
            cout<<"Ungueltige Eingabe!"<<endl;
        }
    }
    while(i!=0);

    //ALTER STAND
    /*
    string test = "Carsten";
    linkedList myList(test);
    test = "Marc";
    myList.append(test);
    test = "Christoph";
    myList.append(test);
    test = "Jens";
    myList.append(test);
    test = "##############";
    myList.insertElement(1, test);
    cout << myList << endl;
    myList.deleteElement(1);
    cout << myList << endl;
    myList.deleteElement("Marc");
    cout << myList << endl;
    return 0;*/
}
