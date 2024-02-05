#include <iostream>
using namespace std;

class Publication {
protected:
  string title;
  float price;

public:
  Publication(string title, float price) {
    this->title = title;
    this->price = price;
  }

  virtual void getdata() {
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter price: ";
    cin >> price;
  }

  virtual void putdata() {
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
  }
};

class Book : public Publication {
private:
  int page_count;

public:
  Book(string title, float price, int page_count) : Publication(title, price) {
    this->page_count = page_count;
  }

  void getdata() {
    Publication::getdata();
    cout << "Enter page count: ";
    cin >> page_count;
  }

  void putdata() {
    Publication::putdata();
    cout << "Page count: " << page_count << endl;
  }
};

class EReader : public Publication {
private:
  int pages;

public:
  EReader(string title, float price, int pages) : Publication(title, price) {
    this->pages = pages;
  }

  void getdata() {
    Publication::getdata();
    cout << "Enter number of pages: ";
    cin >> pages;
  }

  void putdata() {
    Publication::putdata();
    cout << "Number of pages: " << pages << endl;
  }
};

int main() {
  Book book("The Lord of the Rings", 19.99, 1000);
  EReader ereader("Harry Potter and the Sorcerer's Stone", 9.99, 223);

  // Get data from the user.
  book.getdata();
  ereader.getdata();

  // Display the data.
  book.putdata();
  ereader.putdata();

  return 0;
}
