#include<iostream>
#include<cstring>
using namespace std;
void printbook(struct Books *book);
struct Books{
    char title[500];
    char author[50];
    char subject[100];
    int book_id;
};
int main(){
    struct Books Book1;
    struct Books Book2;
    //book1 specifications
    strcpy(Book1.title,"Learn C++");
    strcpy(Book1.author,"DJ Malan");
    strcpy(Book1.subject,"Advanced C++");
    strcpy(Book2.title,"Learn C++");
    strcpy(Book2.author,"DJ Malan");
    strcpy(Book2.subject,"Advanced C++");
    Book1.book_id = 67246;
    Book2.book_id = 67246;
    //print book1 info
    printbook(&Book1);
    printbook(&Book2);
    return 0;
}
//this func accepts pointers to structure parameters
void printbook(struct Books *book){
    
    cout<<book->title<<endl;
    cout<<book->author<<endl;
    cout<<book->subject<<endl;
    cout<<book->book_id<<endl;
}


