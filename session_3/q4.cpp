
#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    string author;
    
    public:
    Book(const string& _title, const string& _author){
        title = _title;
        author = _author;
    }
    
    string getTitle() const{
        return title;
    }
    
    string getAuthor() const{
        return author;
    }
    
    
    void editParameters(const string& _title, const string& _author){
        if(_author == author && _title == title) return;
        
        title = _title;
        author =_author;
      
    }
};


int main (){
    
    Book* b = new Book("Metamorphosis", "Franz Kafka");
    
    cout << b->getTitle() << endl;
    cout << b->getAuthor() << endl;
    
    b->editParameters("Crime and Punishment", "Fyodor Dostoevsky");
    
    cout << "after setting parameters" << endl;
    
    cout << b->getTitle() << endl;
    cout << b->getAuthor() << endl;
    
    delete b;
    
    return 0;
}