#include <iostream>

using namespace std;

int main()
{
    int a =5;// luodaan muuttujat
    int b =10;

    int *myPointer; //luodaan pointeri ja lisätään muistipaikka jossa on muutujan a arvo
    int &refA = a; // ref on viittaus muuttujaan a
    myPointer = &a;


    cout <<  "a:n arvo on: "<<a<<" ja osoite on: " <<&a<< endl;
    cout <<  "b:n arvo on: "<<b<<" ja osoite on: " <<&b<< endl;
    cout << "Pointerin osoittama osoite on: " << &myPointer <<  endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer <<  endl;
    myPointer=&b;
    cout << "Pointerin osoittama osoite on: " << myPointer <<  endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer <<  endl;
    cout << " refA osoittaa osoitteeseen : " << &refA <<  endl;
    cout << " refA:n osoittaman muistipaikan arvo on: " << refA <<  endl;



    return 0;
}
