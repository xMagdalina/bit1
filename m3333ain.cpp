#include <iostream>
#include <bitset>

using namespace std;

int zerujBit(int liczba,int  bit) {

   cout<< bitset<8>(liczba).to_string()<<endl;
    cout<<bitset<8>(liczba= liczba&~bit).to_string()<<endl;
    return bitset<8>(liczba&=~bit).to_ulong();
}

int main(int argc, char** argv) {
     cout<<zerujBit(4,2)<<endl;
     cout<<zerujBit(7,1)<<endl;
     cout<<zerujBit(5,5)<<endl;
     cout<<zerujBit(5,4)<<endl;
    return 0;
}
