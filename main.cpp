#include <iostream>
#include "math.h"
using namespace std;

unsigned int silnia(unsigned int n) {
    if(n>1)
        return n*silnia(n-1);
    else
        return 1;
}
void bezgledna()
{
    int n =0;
    cin>>n;
    if(n>=0){
        std::cout << "BEZZGLEDNA:" <<n<< std::endl;
    }else{
        std::cout << "BEZZGLEDNA:" <<-n<< std::endl;

    }


}

void zadaniesilnia()
{
    int n =0;
    cin>>n;

    std::cout << "SILNIA Z N:"<<n<<":"<<silnia(n)<< std::endl;


}

void zadanienieujemnnadopotegin()
{
    int n =0;
    cin>>n;
    if(n>=0){
        std::cout << " 2^N:"<<n<<":"<<pow(2,n)<< std::endl;
    }
}
void zadaniepierwiastekbezxbiblioteki()
{
    int n =0;
    cin>>n;
    int pierwiastek = (n^2)^(1/4);
    if(n>=0){
        std::cout << " |sqrt N|:"<<n<<":"<<pierwiastek<< std::endl;
    }
}
int main() {
    //funnkcje
    bezgledna();
    zadaniesilnia();
    zadanienieujemnnadopotegin();
    zadaniepierwiastekbezxbiblioteki();
    return 0;
}
