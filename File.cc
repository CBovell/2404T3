#include "File.h"

File::File(string n, string c, Date& d){
    this->name=n;
    this->content=c;
    this->date=d;
}

bool File::lessThan(File* f){
    return this->date.lessThan(f->date);
}

void File::print(){
    cout<<"File: "<<this->name<<endl;
    cout<<"Date added: ";
    this->date.print();
    cout<<"____________________________________"<<endl;
 
}

void File::printContents(){
    cout<<"File: "<<this->name<<endl;
    cout<<"Date added: ";
    this->date.print();
    cout<<this->content<<endl;
    cout<<"____________________________________"<<endl;
}

string File::getName(){
    return this->name;
}