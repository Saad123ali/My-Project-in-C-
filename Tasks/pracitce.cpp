// #include <iostream>
// #include <string>

// using namespace std;

// class Vehicle {
//     private:
//         string make;
//         string model;
//     public:
//         void setMake(string mk) { make = mk; }
//         void setModel(string mdl) { model = mdl; }
        
//         void start() {
//             cout << "Make on Vehicle: " << make << endl;
//             cout << "Model on Vehicle: " << model << endl;
//         }
// };

// class Car : public Vehicle {
//     private:
//         int doors;
//     public:
//         void setDoors(int drs) { doors = drs; }
        
//         void honk() {
//             cout << "Number of doors: " << doors << endl;
//         }
// };

// class ElectricCar : public Car {
//     private:
//         int batteryLife;
//     public:
//         void setBatteryLife(int life) { batteryLife = life; }
        
//         void charge() {
//             start();
//             honk();
//             cout << "Battery Life of Electric Car: " << batteryLife << endl;
//         }
// };

// int main() {
//     int size;
//     cout << "Enter the number of Electric Cars: ";
//     cin >> size;

//     ElectricCar* cars = new ElectricCar[size];
//     int choice;
//     string make, model;
//     int doors, batteryLife;
//     int capacity = 0;

//     while (true) {
//         cout << "\n\t1. Enter Car data\n\t2. Show Car data\n\t3. Remove Car data\n\t4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             if (capacity >= size) {
//                 cout << "Error: Out of memory" << endl;
//             } else {
//                 cout << "Enter the make of Vehicle for car " << capacity + 1 << ": ";
//                 cin >> make;
//                 cars[capacity].setMake(make);

//                 cout << "Enter the model of Vehicle for car " << capacity + 1 << ": ";
//                 cin >> model;
//                 cars[capacity].setModel(model);

//                 cout << "Enter the number of doors for car " << capacity + 1 << ": ";
//                 cin >> doors;
//                 cars[capacity].setDoors(doors);

//                 cout << "Enter the battery life of Electric Car " << capacity + 1 << ": ";
//                 cin >> batteryLife;
//                 cars[capacity].setBatteryLife(batteryLife);

//                 capacity++;
//             }
//         } else if (choice == 2) {
//             if (capacity == 0) {
//                 cout << "No data available" << endl;
//             } else {
//                 cout << endl << "Electric Car details:" << endl;
//                 for (int i = 0; i < capacity; ++i) {
//                     cout << "Details of car " << i + 1 << ":" << endl;
//                     cars[i].charge();
//                     cout << endl;
//                 }
//             }
//         } else if (choice == 3) {
//             if (capacity == 0) {
//                 cout << "No data available to remove" << endl;
//             } else {
//                 int index;
//                 cout << "Enter the index of the car to remove (1 to " << capacity << "): ";
//                 cin >> index;
//                 if (index < 1 || index > capacity) {
//                     cout << "Invalid index" << endl;
//                 } else {
//                     // Shift elements to the left to fill the gap
//                     for (int i = index - 1; i < capacity - 1; ++i) {
//                         cars[i] = cars[i + 1];
//                     }
//                     capacity--;
//                     cout << "Car data removed successfully" << endl;
//                 }
//             }
//         } else if (choice == 4) {
//             break;
//         }
//     }

//     delete[] cars;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void display() {
//         cout << "Base class display function" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         cout << "Derived class display function" << endl;
//     }
// };

// int main() {
//     Base b;
//     Derived d;
//     b.display();
//     d.display();
//     Base* bp = &d;
//     bp->display();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Car {
// private:
//     string make;
//     string model;
//     int year;

// public:
//     // Constructor
//     Car() {}
//     Car(string mk, string mdl, int yr) {
//         make = mk;
//         model = mdl;
//         year = yr;
//     }

//     // Method to display car information
//     void display() {
//         cout << "Car: " << make << " " << model << " " << year << endl;
//     }
// };

// class CarCollection {
// private:
//     Car* cars;
//     int capacity;
//     int size;

// public:
//     // Constructor
//     CarCollection() {}
//     CarCollection(int cap) {
//         capacity = cap;
//         cars = new Car[capacity]; // Error 1: This won't work directly since Car doesn't have a default constructor.
//         size = 0;
//     }

//     // Destructor
//     ~CarCollection() {
//         delete[] cars;
//     }

//     // Method to add a car
//     void addCar(string make, string model, int year) {
//         if (size < capacity) {
//             cars[size] = Car(make, model, year); // Error 2: This requires a valid default constructor for Car.
//             size++;
//         } else {
//             cout << "Collection is full" << endl;
//         }
//     }

//     // Method to display all cars
//     void displayCars() {
//         for (int i = 0; i < size; ++i) {
//             cars[i].display();
//         }
//     }

//     // Method to remove a car
//     void removeCar(int index) {
//         if (index < 1 || index > size) {
//             cout << "Invalid index" << endl;
//         } else {
//             for (int i = index - 1; i < size - 1; ++i) {
//                 cars[i] = cars[i + 1];
//             }
//             size--;
//         }
//     }
// };

// int main() {
//     CarCollection myCars(5);

//     myCars.addCar("Toyota", "Camry", 2010);
//     myCars.addCar("Honda", "Civic", 2012);
//     myCars.addCar("Ford", "Mustang", 2015);

//     cout << "All cars in the collection:" << endl;
//     myCars.displayCars();

//     cout << "Removing the second car:" << endl;
//     myCars.removeCar(2);
//     myCars.displayCars();

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Person {
// private:
//     string name;
//     int age;

// public:
//     // Constructors
//     Person() {}
//     Person(string n, int a) : name(n), age(a) {}

//     // Method to display person information
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }

//     int getAge() const {
//         return age;
//     }
// };

// class Family {
// private:
//     vector<Person> members;

// public:
//     // Method to add a member to the family
//     void addMember(string name, int age) {
//         Person p(name, age);
//         members.push_back(p);
//     }

//     // Method to display all family members
//     void displayMembers() {
//         for (int i = 0; i < members.size(); i++) {
//             members[i].display();
//         }
//     }

//     // Method to find the oldest member of the family
//     Person findOldestMember() {
//         if (members.empty()) {
//             cout << "Family has no members" << endl;
//             return Person();
//         }
        
//         Person oldest = members[0];
//         for (int i = 1; i < members.size(); ++i) {
//             if (members[i].getAge() > oldest.getAge()) {
//                 oldest = members[i];
//             }
//         }
//         return oldest;
//     }
// };

// int main() {
//     Family myFamily;

//     myFamily.addMember("Alice", 30);
//     myFamily.addMember("Bob", 25);
//     myFamily.addMember("Charlie", 35);

//     cout << "Family members:" << endl;
//     myFamily.displayMembers();

//     Person oldest = myFamily.findOldestMember();
//     cout << "Oldest family member:" << endl;
//     oldest.display();

//     return 0;
// }
 

// #include <iostream>
// #include <string>
// #include <cctype>
// #include <ctime>
// #include <windows.h>
// #include <iomanip>
// using namespace std;

// // Class representing a Book
// class Book {
// private:
//     string title;
//     string author;
//     bool available;

// public:
//     // Constructor
//     Book() {}
//     Book(string t, string a) : title(t), author(a), available(true) {}

//     // Getter methods
//     string getTitle() {
//         return title;
//     }
//     string getAuthor() {
//         return author;
//     }
//     bool isAvailable() {
//         return available;
//     }

//     // Method to borrow the book
//     void borrowBook() {
//         if (available) {
//             available = false;
//             cout << "Book '" << title << "' by " << author << " has been borrowed." << endl;
//         } else {
//             cout << "Book '" << title << "' by " << author << " is already borrowed." << endl;
//         }
//     }

//     // Method to return the book
//     void returnBook() {
//         if (!available) {
//             available = true;
//             cout << "Book '" << title << "' by " << author << " has been returned." << endl;
//         } else {
//             cout << "Book '" << title << "' by " << author << " is already available." << endl;
//         }
//     }
// };

// // Class representing a Library Member
// class Member {
// private:
//     string name;
//     int id;
//     bool active;

// public:
//     // Constructor
//     Member() {}
//     Member(string n, int i) : name(n), id(i), active(true) {}

//     // Getter methods
//     string getName() {
//         return name;
//     }
//     int getId() {
//         return id;
//     }
//     bool isActive() {
//         return active;
//     }

//     // Method to deactivate the member
//     void deactivate() {
//         active = false;
//         cout << "Member " << id << ": " << name << " has been deactivated." << endl;
//     }
// };

// // Class representing a Library
// class Library {
// private:
//     Book* books;
//     Member* members;
//     int numBooks;
//     int numMembers;

// public:
//     // Constructor
//     Library(int maxBooks, int maxMembers) : numBooks(0), numMembers(0) {
//         books = new Book[maxBooks];
//         members = new Member[maxMembers];
//     }

//     // Destructor
//     ~Library() {
//         delete[] books;
//         delete[] members;
//     }

//     // Method to add a book to the library
//     void addBook(string title, string author) {
//         if (numBooks < 10) {
//             books[numBooks++] = Book(title, author);
//             cout << "Book '" << title << "' by " << author << " has been added to the library." << endl;
//         } else {
//             cout << "Library is full. Cannot add more books." << endl;
//         }
//     }

//     // Method to add a member to the library
//     void addMember(string name, int id) {
//         if (numMembers < 5) {
//             members[numMembers++] = Member(name, id);
//             cout << "Member " << id << ": " << name << " has been added to the library." << endl;
//         } else {
//             cout << "Library membership limit reached. Cannot add more members." << endl;
//         }
//     }

//     // Method to display all books in the library
//     void displayBooks() {
//         cout << "Books available in the library:" << endl;
//         for (int i = 0; i < numBooks; ++i) {
//             cout << "Title: " << books[i].getTitle() << ", Author: " << books[i].getAuthor() << endl;
//         }
//     }

//     // Method to display all active members of the library
//     void displayActiveMembers() {
//         cout << "Active members of the library:" << endl;
//         for (int i = 0; i < numMembers; ++i) {
//             if (members[i].isActive()) {
//                 cout << "ID: " << members[i].getId() << ", Name: " << members[i].getName() << endl;
//             }
//         }
//     }
// };

// int main() {
//     // Create a Library object
//     Library library(10, 5);

//     // Add books to the library
//     library.addBook("The Great Gatsby", "F. Scott Fitzgerald");
//     library.addBook("To Kill a Mockingbird", "Harper Lee");
//     library.addBook("1984", "George Orwell");

//     // Add members to the library
//     library.addMember("Alice", 101);
//     library.addMember("Bob", 102);
//     library.addMember("Charlie", 103);

//     // Display all books in the library
//     library.displayBooks();

//     // Display all active members of the library
//     library.displayActiveMembers();

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <cctype>
// #include <ctime>
// #include <windows.h>
// #include <iomanip>
// using namespace std;

// // Class representing a Book
// class Book {
// private:
//     string title;
//     string author;
//     bool available;

// public:
//     // Constructor
//     Book() {}
//     Book(string t, string a) : title(t), author(a), available(true) {}

//     // Getter methods
//     string getTitle() {
//         return title;
//     }
//     string getAuthor() {
//         return author;
//     }
//     bool isAvailable() {
//         return available;
//     }

//     // Method to borrow the book
//     void borrowBook() {
//         if (available) {
//             available = false;
//             cout << "Book '" << title << "' by " << author << " has been borrowed." << endl;
//         } else {
//             cout << "Book '" << title << "' by " << author << " is already borrowed." << endl;
//         }
//     }

//     // Method to return the book
//     void returnBook() {
//         if (!available) {
//             available = true;
//             cout << "Book '" << title << "' by " << author << " has been returned." << endl;
//         } else {
//             cout << "Book '" << title << "' by " << author << " is already available." << endl;
//         }
//     }
// };

// // Class representing a Library Member
// class Member {
// private:
//     string name;
//     int id;
//     bool active;

// public:
//     // Constructor
//     Member() {}
//     Member(string n, int i) : name(n), id(i), active(true) {}

//     // Getter methods
//     string getName() {
//         return name;
//     }
//     int getId() {
//         return id;
//     }
//     bool isActive() {
//         return active;
//     }

//     // Method to deactivate the member
//     void deactivate() {
//         active = false;
//         cout << "Member " << id << ": " << name << " has been deactivated." << endl;
//     }
// };

// // Class representing a Library
// class Library {
// private:
//     Book* books;
//     Member* members;
//     int numBooks;
//     int numMembers;

// public:
//     // Constructor
//     Library(int maxBooks, int maxMembers) : numBooks(0), numMembers(0) {
//         books = new Book[maxBooks];
//         members = new Member[maxMembers];
//     }

//     // Destructor
//     ~Library() {
//         delete[] books;
//         delete[] members;
//     }

//     // Method to add a book to the library
//     void addBook(string title, string author) {
//         if (numBooks < 10) {
//             books[numBooks++] = Book(title, author);
//             cout << "Book '" << title << "' by " << author << " has been added to the library." << endl;
//         } else {
//             cout << "Library is full. Cannot add more books." << endl;
//         }
//     }

//     // Method to add a member to the library
//     void addMember(string name, int id) {
//         if (numMembers < 5) {
//             members[numMembers++] = Member(name, id);
//             cout << "Member " << id << ": " << name << " has been added to the library." << endl;
//         } else {
//             cout << "Library membership limit reached. Cannot add more members." << endl;
//         }
//     }

//     // Method to display all books in the library
//     void displayBooks() {
//         cout << "Books available in the library:" << endl;
//         for (int i = 0; i < numBooks; ++i) {
//             cout << "Title: " << books[i].getTitle() << ", Author: " << books[i].getAuthor() << endl;
//         }
//     }

//     // Method to display all members of the library
//     void displayMembers() {
//         cout << "Members of the library:" << endl;
//         for (int i = 0; i < numMembers; ++i) {
//             cout << "ID: " << members[i].getId() << ", Name: " << members[i].getName();
//             if (members[i].isActive()) {
//                 cout << " (Active)" << endl;
//             } else {
//                 cout << " (Deactivated)" << endl;
//             }
//         }
//     }

//     // Method to display deactivated members of the library
//     void displayDeactivatedMembers() {
//         cout << "Deactivated members of the library:" << endl;
//         for (int i = 0; i < numMembers; ++i) {
//             if (!members[i].isActive()) {
//                 cout << "ID: " << members[i].getId() << ", Name: " << members[i].getName() << endl;
//             }
//         }
//     }

//     // Method to deactivate a member
//     void deactivateMember(int memberId) {
//         for (int i = 0; i < numMembers; ++i) {
//             if (members[i].getId() == memberId) {
//                 members[i].deactivate();
//                 break;
//             }
//         }
//     }
// };

// int main() {
//     // Create a Library object
//     Library library(10, 5);

//     // Add books to the library
//     library.addBook("The Great Gatsby", "F. Scott Fitzgerald");
//     library.addBook("To Kill a Mockingbird", "Harper Lee");
//     library.addBook("1984", "George Orwell");

//     // Add members to the library
//     library.addMember("Alice", 101);
//     library.addMember("Bob", 102);
//     library.addMember("Charlie", 103);

//     // Display all books in the library
//     library.displayBooks();

//     // Display all members of the library
//     library.displayMembers();

//     // Deactivate a member
//     library.addMember("David", 104);
//     library.displayDeactivatedMembers(); // Displaying deactivated members after adding "David"
//     library.addMember("Eve", 105);
//     library.deactivateMember(104); // Deactivating member "David"
//     library.displayDeactivatedMembers(); // Displaying deactivated members after deactivation
//     library.displayMembers();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void display() {
//         std::cout << "Base class\n";
//     }
// };

// class Derived1 : public Base {
    // public:
    // void display() {
    //     cout<< "Derived1 class\n";
    // }
// };

// class Derived2 : public Base {
    // public:
    // void display() {
    //     cout<< "Derived2 class\n";
    // }
// };

// class Derived3 : public Derived1, public Derived2 {};

// int main() {
//     Derived3 obj;
//     obj.Derived2::display(); // This line will cause ambiguity
//     obj.Derived1::display(); // This line will cause ambiguity
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void display() {
//         std::cout << "Base class\n";
//     }
// };

// class Derived1 : virtual public Base {
//     public:
//     void display() {
//         cout<< "Derived2 class\n";
//     }
// };

// class Derived2 : virtual public Base {
    
// };

// class Derived3 : public Derived1, public Derived2 {};

// int main() {
//     Derived3 obj;
//     obj.display(); // This will call the display() method from Base
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// // Base class Item
// class Item {
// protected:
//     string title;
//     int id;

// public:
//     Item(string _title, int _id) : title(_title), id(_id) {}

// };

// // Derived class Book
// class Book : public Item {
// private:
//     string author;

// public:
//     Book(string _title, int _id, string _author) : Item(_title, _id), author(_author) {}

//     // Display book details
//     void displayDetails() {
//         cout << "Book Title: " << title << endl;
//         cout << "Book ID: " << id << endl;
//         cout << "Author: " << author << endl;
//     }
// };

// // Derived class Magazine
// class Magazine : public Item {
// private:
//     int issueNumber;

// public:
//     Magazine(string _title, int _id, int _issueNumber) : Item(_title, _id), issueNumber(_issueNumber) {}

//     // Display magazine details
//     void displayDetails()  {
//         cout << "Magazine Title: " << title << endl;
//         cout << "Magazine ID: " << id << endl;
//         cout << "Issue Number: " << issueNumber << endl;
//     }
// };

// // Derived class Newspaper
// class Newspaper : public Item {
// private:
//     string publicationDate;

// public:
//     Newspaper(string _title, int _id, string _publicationDate) : Item(_title, _id), publicationDate(_publicationDate) {}

//     // Display newspaper details
//     void displayDetails()  {
//         cout << "Newspaper Title: " << title << endl;
//         cout << "Newspaper ID: " << id << endl;
//         cout << "Publication Date: " << publicationDate << endl;
//     }
// };

// int main() {
//     // Creating instances of different items
//     Book book("The Great Gatsby", 101, "F. Scott Fitzgerald");
//     Magazine magazine("National Geographic", 201, 123);
//     Newspaper newspaper("The New York Times", 301, "June 1, 2024");

//     // Display details of each item
//     book.displayDetails();
//     cout << endl;
//     magazine.displayDetails();
//     cout << endl;
//     newspaper.displayDetails();

//     return 0;
// }

// program to test file creation open reading writing and closing in file
// handling

// #include <fstream>
// #include <iostream>
// #include <string>

// using namespace std;

// class FileManager {
// public:
//   // Function to create and write to a file
//   int createFile() {
//     ofstream outFile("sample.txt");
//     if (outFile.is_open()) {
//       outFile << "Saad Ali\n";
//       outFile << "Welcome to file handling in C++.\n";
//       outFile.close();
//       cout << "File created and written successfully." << endl;
//       return 0;
//     } else {
//       cerr << "Unable to open file for writing." << endl;
//       return 1;
//     }
//   }

//   // Function to read from a file
//   int readFile() {
//     ifstream inFile("sample.txt");
//     if (inFile.is_open()) {
//       string line;
//       while (getline(inFile, line)) {
//         cout << line << endl;
//       }
//       inFile.close();
//       return 0;
//     } else {
//       cerr << "Unable to open file for reading." << endl;
//       return 1;
//     }
//   }

//   // Function to append to a file
//   int appendToFile() {
//     ofstream outFile("sample.txt", ios::app);
//     if (outFile.is_open()) {
//       outFile << "Appending this line to the file.\n";
//       outFile.close();
//       cout << "File appended successfully." << endl;
//       return 0;
//     } else {
//       cerr << "Unable to open file for appending." << endl;
//       return 1;
//     }
//   }

//   // Function to delete a file
//   int deleteFile() {
//     if (remove("sample.txt") == 0) {
//       cout << "File deleted successfully." << endl;
//       return 0;
//     } else {
//       cerr << "Unable to delete the file." << endl;
//       return 1;
//     }
//   }
// };

// int main() {
//   FileManager fileManager;
//   fileManager.createFile();
//   fileManager.readFile();
//   fileManager.appendToFile();
//   fileManager.readFile(); // Read again to show appended content
//   fileManager.deleteFile();
//   return 0;
// }


// #include<iostream>
// #include<string>
// #include<fstream>

// using namespace std;

// int main()
// {
//     ofstream file("data.txt");
//     if(!file.is_open())
//     {
//         cout<<"Unable to open data.txt"<<endl;
//     }
//     else
//     {
//         file<<"Hello, world!"<<endl;
//         file<<"Welcome to the File handlinf in C++."<<endl;
//         file.close();
//         cout<<"File created successfully & colse."<<endl;
//     }

//     ifstream read("data.txt");
//     if(!read.is_open())
//     {
//         cout<<"Unable to open data.txt"<<endl;
//     }
//     else 
//     {
//         string content;
//         while(getline(read, content))
//         {
//             cout<<content<<endl;
//         }
//         read.close();
        
//     }
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// class FileHandler {
// private:
//     string filename;
// public:
//     FileHandler() {}
//     FileHandler(const string& filename) : filename(filename) {}

//     void writeToFile(const string& content) {
//         ofstream file(filename, ios::app);
//         if (!file.is_open()) {
//             cout << "Unable to open " << filename << endl;
//         } else {
//             file << content << endl;
//             file.close();
//             cout << "Content written to " << filename << " successfully." << endl;
//         }
//     }

//     void readFromFile() {
//         ifstream file(filename);
//         if (!file.is_open()) {
//             cout << "Unable to open " << filename << endl;
//         } else {
//             string content;
//             while (getline(file, content)) {
//                 cout << content << endl;
//             }
//             file.close();
//         }
//     }
// };

// int main() {
//     FileHandler fileHandler("data.txt");

//     // Writing to file
//     fileHandler.writeToFile("Hello, world!");
//     fileHandler.writeToFile("Welcome to the File handling in C++.");

//     // Reading from file
//     cout << "Contents of data.txt:" << endl;
//     fileHandler.readFromFile();

//     return 0;
// }


// #include<iostream>
// #include<cstring>
// #include<iomanip>

// using namespace std;

// class Book
// {
// private:
//     char* title;
//     char* author;
//     char* isbn;

// public:
//     // Default Constructor
//     Book()
//     {
//         title = new char[1];
//         author = new char[1];
//         isbn = new char[1];
//         title[0] = '\0';
//         author[0] = '\0';
//         isbn[0] = '\0';
//     }

//     // Parameterized Constructor
//     void setTitle(const char* _title)
//     {
//         delete[] title;
//         title = new char[strlen(_title) + 1];
//         strcpy(title, _title);
//     }

//     // Set Author
//     void setAuthor(const char* _author)
//     {
//         delete[] author;
//         author = new char[strlen(_author) + 1];
//         strcpy(author, _author);
//     }

//     // Set ISBN
//     void setIsbn(const char* _isbn)
//     {
//         delete[] isbn;
//         isbn = new char[strlen(_isbn) + 1];
//         strcpy(isbn, _isbn);
//     }

//     // Deep Copy Constructor
//     Book(const Book &other)
//     {
//         title = new char[strlen(other.title) + 1];
//         author = new char[strlen(other.author) + 1];
//         isbn = new char[strlen(other.isbn) + 1];
//         strcpy(title, other.title);
//         strcpy(author, other.author);
//         strcpy(isbn, other.isbn);
//     }

//     // Destructor
//     ~Book()
//     {
//         delete[] title;
//         delete[] author;
//         delete[] isbn;
//     }

//     // Display function
//     void displayAllBooks() 
//     {
//         cout << setw(28) << title << setw(30) << author << setw(30) << isbn << "\n";
//     }
// };

// int main()
// {
//     int books = 0;
//     int bookAdd;
//     int bookCapacity = 0;
    
//     while (true)
//     {
//         cout << "\n\n\t\tEnter the initial capacity for the book(s): ";
//         cin >> bookCapacity;
//         if (bookCapacity <= 0)
//         {
//             system("cls");
//             cout << "Invalid Number! Please enter a positive number." << endl;
//         }
//         else
//         {
//             break;
//         }
//     }
    
//     Book* bookArray = new Book[bookCapacity];

//     while (true)
//     {
//         cout << "\n\t\t ______________________________________________\n";
//         cout << "\t\t|       |" << setw(40) << "|\n";
//         cout << "\t\t| [1]   |     Add Book" << setw(27) << "|\n";
//         cout << "\t\t| [2]   |     Display Books" << setw(22) << "|\n";
//         cout << "\t\t| [3]   |     Test Copy" << setw(26) << "|\n";
//         cout << "\t\t| [0]   |     Exit" << setw(31) << "|\n";
//         cout << "\t\t|       |" << setw(40) << "|\n";
//         cout << "\t\t|_______|______________________________________|\n";
//         cout << "\n\t\tEnter your choice: ";
//         string choice;
//         cin >> choice;

//        if (choice == "1")
//         {
//             system("cls");
//             if (books < bookCapacity)
//             {
//                 while(true)
//                 {
//                     //  user to enter the number of books they want to add
//                     cout << "\n\tEnter the number of books you want to add: ";
//                     cin >> bookAdd;
//                     if (bookAdd <= 0)
//                     {
//                         system("cls");
//                         cout << "Invalid Number! Please enter a positive number." << endl;
//                     }
//                     else
//                     {
//                         break;
//                     }
//                 }
//                 // Check if adding the entered number of books exceeds the capacity
//                 if (books + bookAdd <= bookCapacity)
//                 {
//                     // Loop to add each book
//                     for (int i = 0; i < bookAdd; i++)
//                     {
//                         cout << "\n\nEnter Detail of Book " << i + 1 << endl;
//                         char title[100], author[100], isbn[100];
//                         // Prompt user to enter book details
//                         while (true) 
//                         {
//                             cout << "Enter Book Title: ";
//                             cin.ignore();
//                             cin.getline(title, 100);
//                             if (title[0] == '\0')
//                             {
//                                 cout << "Title cannot be empty. Please try again." << endl;
//                             }
//                             else
//                             {
//                                 break;
//                             }
//                         }
//                         while (true)
//                         {
//                             cout << "Enter Book Author name: ";
//                             cin.getline(author, 100);
//                             if (author[0] == '\0') 
//                             {
//                                 cout << "Author name cannot be empty. Please try again." << endl;
//                             }
//                             else
//                             {
//                                 break;
//                             }
//                         }
//                         while (true) 
//                         {
//                             cout << "Enter Book ISBN (International Standard Book Number): ";
//                             cin.getline(isbn, 100);
//                             if (isbn[0] == '\0')
//                             {
//                                 cout << "ISBN cannot be empty. Please try again." << endl;
//                             }
//                             else
//                             {
//                                 break;
//                             }
//                         }

//                         // Add the book to the array and increment the book count
//                         bookArray[books].setTitle(title);
//                         bookArray[books].setAuthor(author);
//                         bookArray[books].setIsbn(isbn);
//                         books++;
//                     }
//                 }
//                 else
//                 {
//                     // If adding books exceeds capacity, display error message
//                     cout << "\n\n\tError-> Please add books within the limit.\n" << endl;
//                 }
//             }
//             else
//             {
//                 // If there's no space for additional books, display appropriate message
//                 cout << "\n\n\tNo more space for additional books.\n" << endl;
//             }
//         }
//         else if (choice == "2")
//         {
//             if (books == 0)
//             {
//                 cout << "No books in the system." << endl;
//             }
//             else
//             {
//                 system("cls");
//                 cout << "\n\n\t\t\t\t\tAll books in the system.\n\n";
//                 cout << setw(35) << "Book Title" << setw(30) << "Book Author" << setw(30) << "Book ISBN" << setw(30) << "\n";
//                 cout << "\t\t________________________________________________________________________________________\n" << endl;
//                 for (int i = 0; i < books; ++i)
//                 {
//                     bookArray[i].displayAllBooks();
//                 }
//             }
//         }
//         else if (choice == "3")
//         {
//             system("cls");
//             while(true)
//             {
//                 cout << "\n\t\t ______________________________________________\n";
//                 cout << "\t\t|       |" << setw(40) << "|\n";
//                 cout << "\t\t| [1]   |     Test Shallow Copy" << setw(18) << "|\n";
//                 cout << "\t\t| [2]   |     Test Deep Copy" << setw(21) << "|\n";
//                 cout << "\t\t| [0]   |     Main Page" << setw(26) << "|\n";
//                 cout << "\t\t|       |" << setw(40) << "|\n";
//                 cout << "\t\t|_______|______________________________________|\n";
//                 cout << "\n\t\tEnter your choice: ";
//                 string copyChoice;
//                 cin>>copyChoice;
//                 if(copyChoice == "1")
//                 {
//                     system("cls");
//                     int shallowIndex = -1;
//                     if (books == 0)
//                     {
//                         cout<<"No book in the system"<<endl;
//                     }
//                     else
//                     {
//                         while(true)
//                         {
//                             cout << "Enter the index no for shallow copy: ";
//                             cin >> shallowIndex;
//                             if (shallowIndex < 0 || shallowIndex >= books )
//                             {
//                                 system("cls");
//                                 cout << "Invalid index number!" << endl;
//                             }
//                             else
//                             {
//                                 system("cls");
//                                     // Display original book data
//                                 cout << "Original Book Data: " << setw(15) << "Book Title" << setw(30) << "Book Author" << setw(30) << "Book ISBN" << setw(30) << endl;
//                                 bookArray[shallowIndex].displayAllBooks();
//                                 // Perform shallow copy
//                                 cout << "\nShallow Copy Data: " << endl;
//                                 Book shallowCopy = bookArray[shallowIndex]; // Shallow copy created
//                                 shallowCopy.displayAllBooks(); // Display shallow copy data
//                                 break;
//                             }
//                         }
//                     }
//                 }
//                 else if (copyChoice == "2")
//                 {
//                     system("cls");
//                     int deepIndex = -1;
//                     if (books == 0)
//                     {
//                         cout<<"No book in the system"<<endl;
//                     }
//                     else
//                     {
//                         while(true)
//                         {
//                             cout << "Enter the index no for deep copy: ";
//                             cin >> deepIndex;
//                             if (deepIndex < 0 || deepIndex >= books)
//                             {
//                                 system("cls");
//                                 cout << "Invalid index number!" << endl;
//                             }
//                             else
//                             {
//                                 system("cls");
//                                 // Display original book data
//                                 cout << "Original Book Data: " << setw(15) << "Book Title" << setw(30) << "Book Author" << setw(30) << "Book ISBN" << setw(30) << endl;
//                                 bookArray[deepIndex].displayAllBooks();
//                                 // Perform shallow copy
//                                 cout << "\ndeep Copy Data: " << endl;
//                                 Book deepCopy(bookArray[deepIndex]); // deep copy created
//                                 deepCopy.displayAllBooks(); // Display deep copy data
//                                 break;
//                             }
//                         }
//                     }
//                 }
//                 else if (copyChoice == "0")
//                 {
//                     // go to main page ithout any performance 
//                     break;
//                 }
//                 else
//                 {
//                     cout << "\n\n\tInvalid choice. Please enter a valid option." << endl;
//                 }
//             }
           
//         }   
//         else if (choice == "0")
//         {
//             cout<<"\n\n\t\tCode by Saad Ali on Earth\n\n"<<endl;
//             delete[] bookArray;
//             break;
//         }
//         else
//         {
//             cout << "\n\n\tInvalid choice. Please enter a valid option." << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// // Engine class (for composition)
// class Engine {
// public:
//     Engine(const string& type, int horsepower)
//         : type(type), horsepower(horsepower) {}

//     void display() const {
//         cout << "Engine Type: " << type << ", Horsepower: " << horsepower << endl;
//     }

// private:
//     string type;
//     int horsepower;
// };

// // Driver class (for aggregation)
// class Driver {
// public:
//     Driver(const string& name, int experience)
//         : name(name), experience(experience) {}

//     void display() const {
//         cout << "Driver Name: " << name << ", Experience: " << experience << " years" << endl;
//     }

// private:
//     string name;
//     int experience;
// };

// // Car class (contains an Engine object and a reference to a Driver object)
// class Car {
// public:
//     Car(const string& make, const string& model, const Engine& engine, const Driver& driver)
//         : make(make), model(model), engine(engine), driver(driver) {}

//     void display() const {
//         cout << "Car Make: " << make << ", Model: " << model << endl;
//         engine.display();
//         driver.display();
//     }

// private:
//     string make;
//     string model;
//     Engine engine;  // Composition: Car has an Engine
//     const Driver& driver; // Aggregation: Car refers to a Driver
// };

// int main() {
//     Engine myEngine("V8", 400);
//     Driver myDriver("John Doe", 5);
//     Car myCar("Ford", "Mustang", myEngine, myDriver);

//     myCar.display();

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// class Engine {
// public:
//     Engine(const string& type, int horsepower)
//         : type(type), horsepower(horsepower) {}

//     void display() const {
//         cout << "Engine Type: " << type << ", Horsepower: " << horsepower << endl;
//     }

// private:
//     string type;
//     int horsepower;
// };

// class Car {
// public:
//     Car(const string& make, const string& model, const Engine& engine)
//         : make(make), model(model), engine(engine) {}

//     void display() const {
//         cout << "Car Make: " << make << ", Model: " << model << endl;
//         engine.display();
//     }

// private:
//     string make;
//     string model;
//     Engine engine;
// };

// int main() {
//     Engine myEngine("V8", 400);
//     Car myCar("Ford", "Mustang", myEngine);

//     myCar.display();

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// // Engine class (for composition)
// class Engine {
// public:
//     Engine() : type(""), horsepower(0) {}
//     Engine(const string& type, int horsepower)
//         : type(type), horsepower(horsepower) {}

//     void display() const {
//         cout << "Engine Type: " << type << ", Horsepower: " << horsepower << endl;
//     }

// private:
//     string type;
//     int horsepower;
// };

// // Driver class (for aggregation)
// class Driver {
// public:
//     Driver() : name(""), experience(0) {}
//     Driver(const string& name, int experience)
//         : name(name), experience(experience) {}

//     void display() const {
//         cout << "Driver Name: " << name << ", Experience: " << experience << " years" << endl;
//     }

// private:
//     string name;
//     int experience;
// };

// // Car class (contains an Engine object and a reference to a Driver object)
// class Car {
// public:
//     Car() : make(""), model(""), driver(nullptr) {}
//     Car(const string& make, const string& model, const Engine& engine,  Driver* driver)
//         : make(make), model(model), engine(engine), driver(driver) {}

//     void display() const {
//         cout << "Car Make: " << make << ", Model: " << model << endl;
//         engine.display();
//         if (driver) {
//             driver->display();
//         }
//     }

// private:
//     string make;
//     string model;
//     Engine engine;  // Composition: Car has an Engine
//     Driver* driver; // Aggregation: Car refers to a Driver
// };

// int main() {
//     int numCars;
//     cout << "Enter the number of cars: ";
//     cin >> numCars;

//     Car* cars = new Car[numCars];
//     Driver* drivers = new Driver[numCars]; // Array to store drivers separately

//     for (int i = 0; i < numCars; ++i) {
//         string make, model, engineType, driverName;
//         int horsepower, experience;

//         cout << "Enter details for car " << i + 1 << ":\n";
//         cout << "Make: ";
//         cin >> make;
//         cout << "Model: ";
//         cin >> model;

//         cout << "Engine Type: ";
//         cin >> engineType;
//         cout << "Horsepower: ";
//         cin >> horsepower;
//         Engine engine(engineType, horsepower);

//         cout << "Driver Name: ";
//         cin >> driverName;
//         cout << "Experience (years): ";
//         cin >> experience;
//         drivers[i] = Driver(driverName, experience);

//         cars[i] = Car(make, model, engine, &drivers[i]);
//     }

//     cout << "\nDisplaying car details:\n";
//     for (int i = 0; i < numCars; ++i) {
//         cout << "Car " << i + 1 << ":\n";
//         cars[i].display();
//     }

//     // Clean up dynamically allocated memory
//     delete[] cars;
//     delete[] drivers;

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// // Function to convert a single hexadecimal digit to its binary representation
// string hexToBinary(char hex) {
//     switch (toupper(hex)) {
//         case '0': return "0000";
//         case '1': return "0001";
//         case '2': return "0010";
//         case '3': return "0011";
//         case '4': return "0100";
//         case '5': return "0101";
//         case '6': return "0110";
//         case '7': return "0111";
//         case '8': return "1000";
//         case '9': return "1001";
//         case 'A': return "1010";
//         case 'B': return "1011";
//         case 'C': return "1100";
//         case 'D': return "1101";
//         case 'E': return "1110";
//         case 'F': return "1111";
//         default: return "Invalid hexadecimal digit";
//     }
// }

// int main() {
//     char hexDigit;
//     cout << "Enter a hexadecimal digit (0-9, A-F): ";
//     cin >> hexDigit;

//     string binaryRepresentation = hexToBinary(hexDigit);

//     cout << "The binary representation of " << hexDigit << " is: " << binaryRepresentation << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// // Function to convert a character digit to its integer value
// int charToValue(char c) {
//     if (c >= '0' && c <= '9') return c - '0';
//     if (c >= 'A' && c <= 'F') return c - 'A' + 10;
//     if (c >= 'a' && c <= 'f') return c - 'a' + 10;
//     return -1; // Invalid character
// }

// // Function to convert an integer value to its character digit
// char valueToChar(int value) {
//     if (value >= 0 && value <= 9) return value + '0';
//     if (value >= 10 && value <= 15) return value - 10 + 'A';
//     return '?'; // Invalid value
// }

// // Function to convert a number from a given base to decimal
// long long toDecimal(const string& number, int base) {
//     long long decimalValue = 0;
//     int len = number.length();
//     for (int i = 0; i < len; ++i) {
//         int value = charToValue(number[i]);
//         if (value == -1 || value >= base) {
//             cerr << "Invalid digit in the number for base " << base << endl;
//             exit(1);
//         }
//         decimalValue = decimalValue * base + value;
//     }
//     return decimalValue;
// }

// // Function to convert a decimal number to a given base
// string fromDecimal(long long decimal, int base) {
//     if (decimal == 0) return "0";
//     string result;
//     while (decimal > 0) {
//         int remainder = decimal % base;
//         result += valueToChar(remainder);
//         decimal /= base;
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }

// // Function to convert a number from one base to another
// string convertBase(const string& number, int fromBase, int toBase) {
//     long long decimal = toDecimal(number, fromBase);
//     return fromDecimal(decimal, toBase);
// }

// int main() {
//     string number;
//     int fromBase, toBase;

//     cout << "Enter the number: ";
//     cin >> number;

//     cout << "Enter the base of the number (2, 8, 10, 16): ";
//     cin >> fromBase;

//     cout << "Enter the base to convert to (2, 8, 10, 16): ";
//     cin >> toBase;

//     if ((fromBase != 2 && fromBase != 8 && fromBase != 10 && fromBase != 16) ||
//         (toBase != 2 && toBase != 8 && toBase != 10 && toBase != 16)) {
//         cerr << "Invalid base. Supported bases are 2, 8, 10, and 16." << endl;
//         return 1;
//     }

//     string result = convertBase(number, fromBase, toBase);
//     cout << "The number " << number << " in base " << fromBase << " is " << result << " in base " << toBase << "." << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// // Base class Person
// class Person {
// protected:
//     string mName;
//     string mBirthDate;
//     char mSex;

// public:
//     Person(const string& name, const string& birthDate, char sex)
//         : mName(name), mBirthDate(birthDate), mSex(sex) {}

//     string getName() const {
//         return mName;
//     }

//     string getBirthDate() const {
//         return mBirthDate;
//     }

//     char getSex() const {
//         return mSex;
//     }
// };

// // Derived class Student
// class Student : virtual public Person {
// protected:
//     string mAddress;
//     string mDepartment;

// public:
//     Student(const string& name, const string& birthDate, char sex, const string& address, const string& department)
//         : Person(name, birthDate, sex), mAddress(address), mDepartment(department) {}

//     string getAddress() const {
//         return mAddress;
//     }

//     string getDepartment()  {
//         return mDepartment;
//     }
// };

// // Derived class Teacher
// class Teacher : virtual public Person {
// protected:
//     string mRank;
//     string mDepartment;
//     string mCourseInfo;

// public:
//     Teacher(const string& name, const string& birthDate, char sex, const string& rank, const string& department, const string& courseInfo)
//         : Person(name, birthDate, sex), mRank(rank), mDepartment(department), mCourseInfo(courseInfo) {}

//     string getRank() const {
//         return mRank;
//     }

//     string getDepartment() {
//         return mDepartment;
//     }

//     string getCourseInfo() const {
//         return mCourseInfo;
//     }
// };

// // Derived class GradTeachingFellow
// class GradTeachingFellow : public Student, public Teacher {
// private:
//     string mSupervisor;

// public:
//     GradTeachingFellow(const string& name, const string& birthDate, char sex, const string& address, const string& studentDepartment, const string& rank, const string& teacherDepartment, const string& courseInfo, const string& supervisor)
//         : Person(name, birthDate, sex), Student(name, birthDate, sex, address, studentDepartment), Teacher(name, birthDate, sex, rank, teacherDepartment, courseInfo), mSupervisor(supervisor) {}

//     string getSupervisor() const {
//         return mSupervisor;
//     }
// };

// int main() {
//     // Create objects of each class and display their information
//     Student student("Alice", "2000-01-01", 'F', "123 Main St", "Computer Science");
//     Teacher teacher("Bob", "1980-02-02", 'M', "Professor", "Mathematics", "Calculus");
//     GradTeachingFellow gtf("Charlie", "1995-03-03", 'M', "456 Elm St", "Physics", "Lecturer", "Physics", "Quantum Mechanics", "Dr. Smith");

//     // Display student information
//     cout << "Student:" << endl;
//     cout << "Name: " << student.getName() << endl;
//     cout << "Birth Date: " << student.getBirthDate() << endl;
//     cout << "Sex: " << student.getSex() << endl;
//     cout << "Address: " << student.getAddress() << endl;
//     cout << "Department: " << student.getDepartment() << endl;
//     cout << endl;

//     // Display teacher information
//     cout << "Teacher:" << endl;
//     cout << "Name: " << teacher.getName() << endl;
//     cout << "Birth Date: " << teacher.getBirthDate() << endl;
//     cout << "Sex: " << teacher.getSex() << endl;
//     cout << "Rank: " << teacher.getRank() << endl;
//     cout << "Department: " << teacher.getDepartment() << endl;
//     cout << "Course Info: " << teacher.getCourseInfo() << endl;
//     cout << endl;

//     // Display grad teaching fellow information
//     cout << "Grad Teaching Fellow:" << endl;
//     cout << "Name: " << gtf.getName() << endl;
//     cout << "Birth Date: " << gtf.getBirthDate() << endl;
//     cout << "Sex: " << gtf.getSex() << endl;
//     cout << "Address: " << gtf.getAddress() << endl;
//     cout << "Student Department: " << gtf.Student::getDepartment() << endl;
//     cout << "Rank: " << gtf.getRank() << endl;
//     cout << "Teacher Department: " << gtf.Teacher::getDepartment() << endl;
//     cout << "Course Info: " << gtf.getCourseInfo() << endl;
//     cout << "Supervisor: " << gtf.getSupervisor() << endl;

//     return 0;
// }



// #include <iostream>
// #include <string>
// #include <ctime>

// using namespace std;

// string GetCurrentTime() {
//     time_t now = time(0);
//     tm* ltm = localtime(&now);
//     return to_string(1900 + ltm->tm_year) + "-" + to_string(ltm->tm_mon + 1) + "-" + to_string(ltm->tm_mday) + " " + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec);
// }

// class Person {
// private:
//     string name;
//     string entryTime;
//     string exitTime;

// public:
//     Person(const string& name) : name(name) {}

//     void logEntry() {
//         entryTime = GetCurrentTime();
//         cout << "Entry time logged for " << name << " at " << entryTime << endl;
//     }

//     void logExit() {
//         // Introduce a slight delay to ensure different exit time
//         cout << "Waiting for 2 seconds before logging exit..." << endl;
//         for (int i = 0; i < 2000000000; ++i) {} // Simulate waiting for 2 seconds
//         exitTime = GetCurrentTime();
//         cout << "Exit time logged for " << name << " at " << exitTime << endl;
//     }

//     void displayLogs() const {
//         cout << "Time logs for " << name << ":" << endl;
//         cout << "Entry: " << entryTime << ", Exit: " << exitTime << endl;
//     }
// };

// int main() {
//     string name;
//     cout << "Enter your name: ";
//     getline(cin, name);

//     Person person(name);
//     int choice;

//     while (true) {
//         cout << "\nMenu:\n";
//         cout << "1. Log Entry\n";
//         cout << "2. Log Exit\n";
//         cout << "3. Display Logs\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 person.logEntry();
//                 break;
//             case 2:
//                 person.logExit();
//                 break;
//             case 3:
//                 person.displayLogs();
//                 break;
//             case 4:
//                 cout << "Exiting program..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <ctime>

// using namespace std;

// const int MAX_PERSONS = 100;

// string GetCurrentTime() {
//     time_t now = time(0);
//     tm* ltm = localtime(&now);
//     return to_string(1900 + ltm->tm_year) + "-" + to_string(ltm->tm_mon + 1) + "-" + to_string(ltm->tm_mday) + " " + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec);
// }

// class Person {
// private:
//     string name;
//     string entryTime;
//     string exitTime;

// public:
//     Person() : name(""), entryTime(""), exitTime("") {}

//     void setName(const string& name) {
//         this->name = name;
//     }

//     const string& getName() const {
//         return name;
//     }

//     void logEntry() {
//         entryTime = GetCurrentTime();
//         cout << "Entry time logged for " << name << " at " << entryTime << endl;
//     }

//     void logExit() {
//         // // Introduce a slight delay to ensure different exit time
//         // cout << "Waiting for 2 seconds before logging exit..." << endl;
//         // for (int i = 0; i < 2000000000; ++i) {} // Simulate waiting for 2 seconds
//         exitTime = GetCurrentTime();
//         cout << "Exit time logged for " << name << " at " << exitTime << endl;
//     }

//     void displayLogs() const {
//         cout << "Time logs for " << name << ":" << endl;
//         cout << "Entry: " << entryTime << ", Exit: " << exitTime << endl;
//     }
// };

// int findPerson(Person persons[], int personCount, const string& name) {
//     for (int i = 0; i < personCount; ++i) {
//         if (persons[i].getName() == name) {
//             return i;
//         }
//     }
//     return -1; // Not found
// }

// void displayAllLogs(Person persons[], int personCount) {
//     cout << "\nAll Persons' Entry and Exit Logs:\n";
//     for (int i = 0; i < personCount; ++i) {
//         cout << "Person: " << persons[i].getName() << endl;
//         persons[i].displayLogs();
//         cout << endl;
//     }
// }


// int main() {
//     Person persons[MAX_PERSONS];
//     int personCount = 0;
//     int choice;

//     while (true) {
//         cout << "\nMenu:\n";
//         cout << "1. Add Person\n";
//         cout << "2. Log Entry\n";
//         cout << "3. Log Exit\n";
//         cout << "4. Display Logs\n";
//         cout << "5. Display All Logs\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 if (personCount < MAX_PERSONS) {
//                     string name;
//                     cout << "Enter name: ";
//                     cin.ignore();
//                     getline(cin, name);
//                     persons[personCount].setName(name);
//                     personCount++;
//                     cout << "Person added." << endl;
//                 } else {
//                     cout << "Person limit reached." << endl;
//                 }
//                 break;
//             }
//             case 2: {
//                 string name;
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 int index = findPerson(persons, personCount, name);
//                 if (index != -1) {
//                     persons[index].logEntry();
//                 } else {
//                     cout << "Person not found." << endl;
//                 }
//                 break;
//             }
//             case 3: {
//                 string name;
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 int index = findPerson(persons, personCount, name);
//                 if (index != -1) {
//                     persons[index].logExit();
//                 } else {
//                     cout << "Person not found." << endl;
//                 }
//                 break;
//             }
//             case 4: {
//                 string name;
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 int index = findPerson(persons, personCount, name);
//                 if (index != -1) {
//                     persons[index].displayLogs();
//                 } else {
//                     cout << "Person not found." << endl;
//                 }
//                 break;
//             }
//             case 5:
//                 displayAllLogs(persons, personCount);
//                     break;
//             case 6:
//                 cout << "Exiting program..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <ctime>

// using namespace std;

// string GetCurrentTime() {
//     time_t now = time(0);
//     tm* ltm = localtime(&now);
//     return to_string(1900 + ltm->tm_year) + "-" + to_string(ltm->tm_mon + 1) + "-" + to_string(ltm->tm_mday) + " " + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec);
// }

// class Person {
// private:
//     string name;
//     string entryTime;
//     string exitTime;

// public:
//     Person(const string& name) : name(name), entryTime(""), exitTime("") {}

//     const string& getName() const {
//         return name;
//     }

//     void logEntry() {
//         entryTime = GetCurrentTime();
//         cout << "Entry time logged for " << name << " at " << entryTime << endl;
//     }

//     void logExit() {
//         exitTime = GetCurrentTime();
//         cout << "Exit time logged for " << name << " at " << exitTime << endl;
//     }

//     void displayLogs() const {
//         cout << "Time logs for " << name << ":" << endl;
//         cout << "Entry: " << entryTime << ", Exit: " << exitTime << endl;
//     }
// };

// class PersonManager {
// private:
//     Person persons[MAX_PERSONS];
//     int personCount;

// public:
//     PersonManager() : personCount(0) {}

//     void addPerson(const string& name) {
//         if (personCount < MAX_PERSONS) {
//             persons[personCount] = Person(name);
//             personCount++;
//             cout << "Person added." << endl;
//         } else {
//             cout << "Person limit reached." << endl;
//         }
//     }

//     int findPerson(const string& name) const {
//         for (int i = 0; i < personCount; ++i) {
//             if (persons[i].getName() == name) {
//                 return i;
//             }
//         }
//         return -1; // Not found
//     }

//     void logPersonEntry(const string& name) {
//         int index = findPerson(name);
//         if (index != -1) {
//             persons[index].logEntry();
//         } else {
//             cout << "Person not found." << endl;
//         }
//     }

//     void logPersonExit(const string& name) {
//         int index = findPerson(name);
//         if (index != -1) {
//             persons[index].logExit();
//         } else {
//             cout << "Person not found." << endl;
//         }
//     }

//     void displayPersonLogs(const string& name) const {
//         int index = findPerson(name);
//         if (index != -1) {
//             persons[index].displayLogs();
//         } else {
//             cout << "Person not found." << endl;
//         }
//     }

//     void displayAllLogs() const {
//         cout << "\nAll Persons' Entry and Exit Logs:\n";
//         for (int i = 0; i < personCount; ++i) {
//             cout << "Person: " << persons[i].getName() << endl;
//             persons[i].displayLogs();
//             cout << endl;
//         }
//     }
// };

// int main() {
//     PersonManager manager;
//     int choice;

//     while (true) {
//         cout << "\nMenu:\n";
//         cout << "1. Add Person\n";
//         cout << "2. Log Entry\n";
//         cout << "3. Log Exit\n";
//         cout << "4. Display Logs\n";
//         cout << "5. Display All Logs\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         string name;
//         switch (choice) {
//             case 1:
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 manager.addPerson(name);
//                 break;
//             case 2:
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 manager.logPersonEntry(name);
//                 break;
//             case 3:
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 manager.logPersonExit(name);
//                 break;
//             case 4:
//                 cout << "Enter name: ";
//                 cin.ignore();
//                 getline(cin, name);
//                 manager.displayPersonLogs(name);
//                 break;
//             case 5:
//                 manager.displayAllLogs();
//                 break;
//             case 6:
//                 cout << "Exiting program..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// class Person
// {
// protected:
//     string name;
//     int age;
//     string gender;

// public:
//     Person(string name, int age, string gender)
//     {
//         this->name = name;
//         this->age = age;
//         this->gender = gender;
//     }

//     void display() const
//     {
//         cout << "\nName: " << name << "\nAge: " << age << "\nGender: " << gender << endl;
//     }
// };

// class Student : virtual public Person
// {
// protected:
//     string studentId;
//     string grade;

// public:
//     Student(string name, int age, string gender, string studentId, string grade) : Person(name, age, gender)
//     {
//         this->studentId = studentId;
//         this->grade = grade;
//     }
//     void display() const
//     {
//         Person::display();
//         cout << "\nStudent ID: " << studentId << "\nGrade: " << grade << endl;
//     }
// };

// class Teacher : virtual public Person
// {
// protected:
//     string employeeId;
//     string subject;

// public:
//     Teacher(string name, int age, string gender, string employeeId, string subject): Person(name, age, gender)
//     {
//         this->employeeId = employeeId;
//         this->subject = subject;
//     }

//     void display() const
//     {
//         Person::display();
//         cout << "\nEmployee ID: " << employeeId << "\nSubject: " << subject << endl;
//     }
// };

// class Faculty : public Teacher, public Student
// {
// public:
//     Faculty(string name, int age, string gender, string employeeId, string subject, string studentId, string grade)
//         : Person(name, age, gender), Teacher(name, age, gender, employeeId, subject), Student(name, age, gender, studentId, grade)
//     {
//     }
//     void display() const
//     {
//         Teacher::display();
//         Student::display();
//     }
// };

// int main()
// {
//     string name, gender, studentId, grade, employeeId, subject;
//     int age;

//     cout << "Enter name: ";
//     getline(cin, name);
//     cout << "Enter age: ";
//     cin >> age;
//     cin.ignore();
//     cout << "Enter gender: ";
//     getline(cin, gender);

//     cout << "Enter student ID: ";
//     getline(cin, studentId);
//     cout << "Enter grade: ";
//     getline(cin, grade);

//     cout << "Enter employee ID: ";
//     getline(cin, employeeId);
//     cout << "Enter subject: ";
//     getline(cin, subject);

//     Faculty faculty(name, age, gender, employeeId, subject, studentId, grade);

//     cout << "\nFaculty Details:" << endl;
//     faculty.display();

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// class Engine
// {
// private:
//     string type;

// public:
//     Engine() {}
//     Engine(string type)
//     {
//         this->type = type;
//         cout << "\nEngine created: " << type << endl;
//     }
//     ~Engine()
//     {
//         cout << "\nEngine destroyed: " << type << endl;
//     }

//     void start() const
//     {
//         cout << "\nEngine started: " << type << endl;
//     }
// };

// class Car
// {
// private:
//     string model;
//     Engine engine; // Engine is a part of Car
// public:
//     Car(string model, string engineType)
//     {
//         this->model = model;
//         engine = Engine(engineType); // creation of object of other class in constructor
//         // this->model = model;

//         cout << "\nCar created: " << model << endl;
//     }
//     ~Car()
//     {
//         cout << "\nCar destroyed: " << model << endl;
//     }

//     void start() const
//     {
//         cout << "\nCar model: " << model << endl;
//         engine.start();
//     }
// };
// int main()
// {
//     Car myCar("Toyota", "V8");
//     myCar.start();

//     return 0;
// }

// #include <iostream>
// #include <conio.h>
// using namespace std;
// class Rectangle
// {
// private:
// 		int length;
// 		int width;
// 		int area;
//     public:
// 	Rectangle()
// 	{
// 		length = 0;
// 		width = 0;
// 			}
// 	Rectangle(int a, int b)
// 	{
// 		length = a;
// 		width = b;
// 	}
// void setData(int l, int w)
// 	{
// 		length = l;
// 		width = w;
// 	}	
// void calcArea()
// 	{
// 		area = length * width;
// 	}
// 	void displayArea()
// 	{
// 		cout<<area<<endl;
// 	}	
// };
// int main()
// {
// 	Rectangle r1;
// 	r1.setData(20,30);
// 	r1.calcArea();
// 	r1.displayArea();
// 	Rectangle r2(10,2);
// 	r2.calcArea();
// 	r2.displayArea();
// 	r2.setData(20,30);
// 	r2.calcArea();
// 	r2.displayArea();
// 	getch();
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// class test{
// private:
// int *a;
// public:
// test(int q){
// a= new int;
// *a=q;
// }
// test(test &obj){
// a= new int;
// *a= *obj.a;
// }
// void mod(int e){
// *a=e;
// }
// void show(){
// cout<<"The value is :"<<*a<<endl;
// }
// };
// main()
// {
// test q1(8);
// test q2= q1;
// q2.show();
// q1.mod(5);
// q2.show();
// q1.show();
// }


// class TestShallow{
// private:
// int *x, *y;
// public:
// TestShallow(int m, int n){
// x = new int;
// *x = m;
// y = new int;
// *y = n;
// }
// void Pint(){
// cout<<"x is "<<*x<<" y is "<<*y<<endl;
// }
// void setter(int m, int n){
// *x= m;
// *y= n;
// }};

// int main(){
// TestShallow t1(10,20);
// TestShallow t2 = t1;
// t2.Pint();
// t1.setter(5,50);
// t2.Pint();
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// struct Student {
//     string name;
//     string sapId;
// };

// // Function to add a new student record to the file
// void addRecord(const string& filename, const Student& student) {
//     ofstream file(filename, ios::app);
//     if (file.is_open()) {
//         file << student.name << " " << student.sapId << endl;
//         file.close();
//         cout << "Record added successfully." << endl;
//     } else {
//         cout << "Unable to open file." << endl;
//     }
// }

// // Function to display all student records from the file
// void displayRecords(const string& filename) {
//     ifstream file(filename);
//     if (file.is_open()) {
//         string name, sapId;
//         cout << "Student Records:" << endl;
//         while (file >> name >> sapId) {
//             cout << "Name: " << name << ", SAP ID: " << sapId << endl;
//         }
//         file.close();
//     } else {
//         cout << "Unable to open file." << endl;
//     }
// }

// // Function to remove a student record from the file based on SAP ID
// void removeRecord(const string& filename, const string& sapIdToRemove) {
//     ifstream inFile(filename);
//     ofstream tempFile("temp.txt");
//     if (!inFile.is_open()) {
//         cout << "Unable to open file." << endl;
//         return;
//     }

//     string name, sapId;
//     bool found = false;
//     while (inFile >> name >> sapId) {
//         if (sapId != sapIdToRemove) {
//             tempFile << name << " " << sapId << endl;
//         } else {
//             found = true;
//         }
//     }
//     inFile.close();
//     tempFile.close();

//     if (found) {
//         remove(filename.c_str());
//         rename("temp.txt", filename.c_str());
//         cout << "Record removed successfully." << endl;
//     } else {
//         cout << "Record with SAP ID " << sapIdToRemove << " not found." << endl;
//         remove("temp.txt");
//     }
// }

// int main() {
//     string filename = "student_records.txt";
//     int choice;
//     do {
//         cout << "Menu:" << endl;
//         cout << "1. Add Record" << endl;
//         cout << "2. Display Records" << endl;
//         cout << "3. Remove Record" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 Student newStudent;
//                 cout << "Enter student name: ";
//                 cin >> newStudent.name;
//                 cout << "Enter student SAP ID: ";
//                 cin >> newStudent.sapId;
//                 addRecord(filename, newStudent);
//                 break;
//             }
//             case 2:
//                 displayRecords(filename);
//                 break;
//             case 3: {
//                 string sapIdToRemove;
//                 cout << "Enter SAP ID of student to remove: ";
//                 cin >> sapIdToRemove;
//                 removeRecord(filename, sapIdToRemove);
//                 break;
//             }
//             case 4:
//                 cout << "Exiting program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
//         }
//     } while (choice != 4);

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// class Student {
// private:
//     string name;
//     string sapId;

// public:
//     // Constructor
//     Student(const string& newName = "", const string& newSapId = "") : name(newName), sapId(newSapId) {}

//     // Getters and setters
//     string getName() const { return name; }
//     void setName(const string& newName) { name = newName; }
//     string getSapId() const { return sapId; }
//     void setSapId(const string& newSapId) { sapId = newSapId; }
// };

// // Function to add a new student record to the file
// void addRecord(const string& filename, const Student& student) {
//     ofstream file(filename, ios::app);
//     if (file.is_open()) {
//         file << student.getName() << " " << student.getSapId() << endl;
//         file.close();
//         cout << "Record added successfully." << endl;
//     } else {
//         cout << "Unable to open file." << endl;
//     }
// }

// // Function to display all student records from the file
// void displayRecords(const string& filename) {
//     ifstream file(filename);
//     if (file.is_open()) {
//         string name, sapId;
//         cout << "Student Records:" << endl;
//         while (file >> name >> sapId) {
//             cout << "Name: " << name << ", SAP ID: " << sapId << endl;
//         }
//         file.close();
//     } else {
//         cout << "Unable to open file." << endl;
//     }
// }

// // Function to remove a student record from the file based on SAP ID
// void removeRecord(const string& filename, const string& sapIdToRemove) {
//     ifstream inFile(filename);
//     ofstream tempFile("temp.txt");
//     if (!inFile.is_open()) {
//         cout << "Unable to open file." << endl;
//         return;
//     }

//     string name, sapId;
//     bool found = false;
//     while (inFile >> name >> sapId) {
//         if (sapId != sapIdToRemove) {
//             tempFile << name << " " << sapId << endl;
//         } else {
//             found = true;
//         }
//     }
//     inFile.close();
//     tempFile.close();

//     if (found) {
//         remove(filename.c_str());
//         rename("temp.txt", filename.c_str());
//         cout << "Record removed successfully." << endl;
//     } else {
//         cout << "Record with SAP ID " << sapIdToRemove << " not found." << endl;
//         remove("temp.txt");
//     }
// }

// int main() {
//     string filename = "student_records.txt";
//     int choice;
//     do {
//         cout << "Menu:" << endl;
//         cout << "1. Add Record" << endl;
//         cout << "2. Display Records" << endl;
//         cout << "3. Remove Record" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 Student newStudent;
//                 cout << "Enter student name: ";
//                 cin.ignore();
//                 getline(cin, newStudent.setName());
//                 cout << "Enter student SAP ID: ";
//                 cin >> newStudent.setSapId();
//                 addRecord(filename, newStudent);
//                 break;
//             }
//             case 2:
//                 displayRecords(filename);
//                 break;
//             case 3: {
//                 string sapIdToRemove;
//                 cout << "Enter SAP ID of student to remove: ";
//                 cin >> sapIdToRemove;
//                 removeRecord(filename, sapIdToRemove);
//                 break;
//             }
//             case 4:
//                 cout << "Exiting program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
//         }
//     } while (choice != 4);

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// // Function to add a new student record to the file
// void addRecord(const string& filename, const string& name, const string& sapId) {
//     ofstream file(filename, ios::app);
//     if (file.is_open()) {
//         file << name << " " << sapId << endl;
//         file.close();
//         cout << "Record added successfully." << endl;
//     } else {
//         cout << "Unable to open file." << endl;
//     }
// }

// // Function to display all student records from the file
// void displayRecords(const string& filename) {
//     ifstream file(filename);
//     if (file.is_open()) {
//         string name, sapId;
//         cout << "Student Records:" << endl;
//         while (file >> name >> sapId) {
//             cout << "Name: " << name << ", SAP ID: " << sapId << endl;
//         }
//         file.close();
//     } else {
//         cout << "Unable to open file." << endl;
//     }
// }

// // Function to remove a student record from the file based on SAP ID
// void removeRecord(const string& filename, const string& sapIdToRemove) {
//     ifstream inFile(filename);
//     ofstream tempFile("temp.txt");
//     if (!inFile.is_open()) {
//         cout << "Unable to open file." << endl;
//         return;
//     }

//     string name, sapId;
//     bool found = false;
//     while (inFile >> name >> sapId) {
//         if (sapId != sapIdToRemove) {
//             tempFile << name << " " << sapId << endl;
//         } else {
//             found = true;
//         }
//     }
//     inFile.close();
//     tempFile.close();

//     if (found) {
//         remove(filename.c_str());
//         rename("temp.txt", filename.c_str());
//         cout << "Record removed successfully." << endl;
//     } else {
//         cout << "Record with SAP ID " << sapIdToRemove << " not found." << endl;
//         remove("temp.txt");
//     }
// }

// int main() {
//     string filename = "student_records.txt";
//     int choice;
//     do {
//         cout << "Menu:" << endl;
//         cout << "1. Add Record" << endl;
//         cout << "2. Display Records" << endl;
//         cout << "3. Remove Record" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 string name, sapId;
//                 cout << "Enter student name: ";
//                 cin >> ws; // Clear input buffer
//                 getline(cin, name);
//                 cout << "Enter student SAP ID: ";
//                 cin >> sapId;
//                 addRecord(filename, name, sapId);
//                 break;
//             }
//             case 2:
//                 displayRecords(filename);
//                 break;
//             case 3: {
//                 string sapIdToRemove;
//                 cout << "Enter SAP ID of student to remove: ";
//                 cin >> sapIdToRemove;
//                 removeRecord(filename, sapIdToRemove);
//                 break;
//             }
//             case 4:
//                 cout << "Exiting program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
//         }
//     } while (choice != 4);

//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Distance {
// private:
// int feet;
// float inches;
// public:
// void getdist(){
// cout << " Enter feet: "; 
// cin >> feet;
// cout << " Enter inches: "; 
// cin >> inches;
// }
// void showdist() 
// { cout << feet << "-"<< inches; 
// }
// };
// int main(){
// Distance dist[50]; 
// int n=0; 
// char ans;
// do { 
// cout << "“Enter distance number “" << n+1;
// dist[n++].getdist(); 
// cout << "“Enter another (y/n)?: “";
// cin >> ans;
// } 
// while( ans != 'n' ); 
// for(int j=0; j<n; j++){
// cout << "“Distance number“"<<j+1<<"“is“";
// dist[j+1].showdist();
// }
// cout << endl;
// }

// class MyClass{
// private:
// int itsAge;
// int itsWeight;
// public:
// MyClass() { 
// itsAge = 1; 
// itsWeight=5; 
// } 
// ~MyClass() {}
// int GetAge() { 
// return itsAge; 
// }
// int GetWeight() { 
// return itsWeight; 
// }
// void SetAge(int age){ 
// itsAge = age;
// }
// };
// int main() {
// MyClass myObject[5];
// for (int i = 0; i < 5; i++)
// myObject[i].SetAge(2*i +1);
// for (int i = 0; i < 5; i++)
// cout << " #" << i+1<< ": " << 
// myObject[i].GetAge();
// return 0;
// }

// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;
// class FileHandling
// {
// private:
//     string name;
//     string sapId;

// public:
//     void writerecord(string n, string s)
//     {
//         ofstream outfile("record.txt", ios_base::app);
//         outfile << n << " " << s << "\n";
//     }
//     void readrecord()
//     {
//         ifstream infile("record.txt");
//         string recordline;
//         while (getline(infile, recordline))
//         {
//             cout << recordline << endl;
//         }
//     }
//     void removerecord(string s)
//     {
//         bool f = true;
//         ifstream infile("record.txt");
//         ofstream outfile("temp.txt");
//         string recordline;
//         while (getline(infile, recordline))
//         {
//             if (recordline.find(s) == string::npos)
//             {
//                 outfile << recordline << endl;
//             }
//             else
//             {
//                 f = false;
//             }
//         }
//         if (f)
//         {
//             cout << "Record not found" << endl;
//         }
//         else
//         {
//             cout << "Record deleted" << endl;
//             infile.close();
//             outfile.close();
//             remove("record.txt");
//             rename("temp.txt", "record.txt");
//         }
//     }
// };
// int main()
// {
//     FileHandling file;
//     while (true)
//     {
//         cout << "\n\n1.  Add";
//         cout << "\n2.  remove";
//         cout << "\n3.  Display";
//         cout << "\n4.  Exit";
//         cout << "\n\nEnter your choice: ";
//         string choice;
//         cin >> choice;
//         if (choice == "1")
//         {
//             cout << "\nEnter name: ";
//             string n;
//             cin >> n;
//             cout << "\nEnter sapId: ";
//             string s;
//             cin >> s;
//             file.writerecord(n, s);
//         }
//         else if (choice == "2")
//         {
//             cout << "\nEnter sapId to remove: ";
//             string s;
//             cin >> s;
//             file.removerecord(s);
//         }
//         else if (choice == "3")
//         {
//             file.readrecord();
//         }
//         else if (choice == "4")
//         {
//             break;
//         }
//         else
//         {
//             cout << "Invalid choice. Please try again." << endl;            
//         }
//     }
// }
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler {
public:
    // Function to get user input lines
    int getUserInput(string* lines, int capacity) {
        cout << "Enter lines to write to the file (type 'STOP' to end input):" << endl;
        string line;
        int size = 0;

        while (size < capacity) {
            getline(cin, line);
            if (line == "STOP") break;
            lines[size++] = line;
        }
        return size;
    }

    // Function to write lines to the file
    void writeToFile(string* lines, int size) {
        ofstream outFile("example.txt");
        if (outFile.is_open()) {
            for (int i = 0; i < size; ++i) {
                outFile << lines[i] << endl;
            }
            outFile.close();
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Function to read lines from the file and display each line in reverse order
    void readFromFileAndReverseLines() {
        ifstream inFile("example.txt");
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                reverseAndDisplayLine(line);
            }
            inFile.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }

private:
    // Helper function to reverse and display a line
    void reverseAndDisplayLine(string &line) {
        for (int i = line.length() - 1; i >= 0; --i) {
            cout << line[i];
        }
        cout << endl;
    }
};

int main() {
    FileHandler fileHandler;

    int capacity;
    cout << "Enter the number of lines you want to enter: ";
    cin >> capacity;
    cin.ignore();  // To ignore the newline character left by cin

    string* linesToWrite = new string[capacity];
    int size = fileHandler.getUserInput(linesToWrite, capacity);

    // Write lines to the file
    fileHandler.writeToFile(linesToWrite, size);

    // Clean up dynamically allocated memory
    delete[] linesToWrite;

    // Read lines from the file and display each line in reverse order
    cout << "Lines with content in reverse order:" << endl;
    fileHandler.readFromFileAndReverseLines();

    return 0;
}
