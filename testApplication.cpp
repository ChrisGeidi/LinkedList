
#include "linkedList.h"

using namespace std;

int main()
{
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
    return 0;
}
