
#include "linkedList.cpp"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    // vars
    ///*string list*/
    /*linkedList<string>* myList = new linkedList<string>;
    string  Test1 = "Jens";
    string  Test2 = "Christoph";
    string  Test3 = "Carsten";
    string  Test4 = "Marc";*/

    ///*integer list*/
    /*linkedList<int>* myList = new linkedList<int>;
    int     Test1 = 500;
    int     Test2 = 152;
    int     Test3 = 348;
    int     Test4 = 111;*/

    ///*double list*/
    //linkedList<double>* myList = new linkedList<double>;
    linkedList<double>* myList = new linkedList<double>;
    double     Test1 = 768.55;
    double     Test2 = 152.62;
    double     Test3 = 348.24;
    double     Test4 = 111.36;



    ///* from here standard code to show functionality */

    // append elements to list
    cout << "append 3 Elements to list and print" << endl;
    myList->append(Test1);
    myList->append(Test2);
    myList->append(Test3);
    cout << myList << endl;

    // insert to fixed pos in list
    cout << "insert '"<<Test4<<"' to pos 3 in list" << endl;
    myList->insertElement(2,Test4);
    cout << myList << endl;

    // delete element from fixed pos
    cout << "delete element from pos 3" << endl;
    myList->deleteElement(2);
    cout << myList << endl;

    // delete element with given content
    cout << "delete element where content like '"<<Test2<<"'" << endl;
    myList->removeElement(Test2);
    cout << myList << endl;

    // sort elements in list
    cout << "sort elements in list" << endl;
    myList->sortList();
    cout << myList << endl;
    cout << endl;

    cout << endl << endl << "----------------- TEST OF COPY-CONSTRUKTOR --------------------" << endl << endl;

    linkedList<double>* myNewList(myList);

    delete myList;

    // append elements to list
    cout << "Last output should be same as next output" << endl;
    cout << myList << endl;

    return 0;
}

