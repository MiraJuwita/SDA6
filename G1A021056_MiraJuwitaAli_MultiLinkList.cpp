#include <iostream>

using namespace std;
#include "list_child.h"
#include "list_parent.h"
#include "list_relasi.h"

int main()
{
    cout << "Bentuk III : Relasi M-N" << endl;
    List_parent LP;
    List_child LC;
    List_relasi LR;
    address_child C;
    address_parent P;
    address_relasi R;

    createList(LP);
    createList(LC);
    createList(LR);

    // insert parent 
    P = alokasi(4);
    insertFirst(LP, P);
    P = alokasi(8);
    insertFirst(LP, P);
    P = alokasi(3);
    insertFirst(LP, P);
    P = alokasi(5);
    insertFirst(LP, P);

    cout<<"list parent"<<endl;
    printInfo(LP);

    // insert child 
    C = alokasi("B");
    insertFirst(LC, C);
    C = alokasi("E");
    insertFirst(LC, C);
    C = alokasi("F");
    insertFirst(LC, C);
    C = alokasi("P");
    insertFirst(LC, C);

    cout<<"list child"<<endl;
    printInfo(LC);

    // relasikan parent dan child 
    P = findElm(LP, 5);
    C = findElm(LC, "F");
    R = alokasi(P,C);
    insertFirst(LR,R );

    C = findElm(LC, "E");
    R = alokasi(P, C);
    insertFirst(LR,R );


    P = findElm(LP, 3);
    C = findElm(LC, "F");
    R = alokasi(P, C);
    insertFirst(LR, R );

    P = findElm(LP, 4);
    C = findElm(LC, "B");
    R = alokasi(P, C);
    insertFirst(LR,R );

    cout<<endl<<"setelah direlasikan"<<endl;
    cout<<"list parent"<<endl;
    printInfo(LP);

    cout<<endl<<"list child"<<endl;
    printInfo(LC);

    cout<<endl<<"list relasi"<<endl;
    printInfo(LR);


    C = findElm(LC, "F");
    info(C) = "Y";

    cout<<endl<<"setelah child diubah"<<endl;
    cout<<"list parent"<<endl;
    printInfo(LP);

    cout<<endl<<"list child"<<endl;
    printInfo(LC);

    cout<<endl<<"list relasi"<<endl;
    printInfo(LR);

    return 0;
}
