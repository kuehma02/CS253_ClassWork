#include "exercise5.hpp"

int main() {
    srand(253);
    cout << "Exercise 5: Structures" << endl;
    cout << "\nTask 1" << endl;
    /*
     * Task 1
     * Declare and initialize a variable of type Contact and print its values.
     * */
    Contact *contact1 = new Contact;
    contact1->name ="Alice";
    contact1->phone = "563-555-1234";

    Contact contact2;
    contact2.name ="Roman";
    contact2.phone = "563-387-1171";

    cout << contact1->name << ": " << contact1->phone << endl;
    cout << contact2.name << ": " << contact2.phone << endl;

    delete contact1;

    cout << "\nTask 2" << endl;
    /* 
     * Task 2
     * Declare and initialize a variable of type Room and print its values.
     * */
    //TODO
    Room *room1 = new Room;
    room1->building="Main";
    room1->number = 101;

    Room room2;
    room2.building = "Olin";
    room2.number = 202;
    cout << room1->building << " " << room1->number << endl;
    cout << room2.building << " " << room2.number << endl;

    delete room1;

    cout << "\nTask 3" << endl;
    /*
     * Task 3
     * Declare and initialize a variable of type Employee and print its values.
     * The output should depend on the full-time/part-time status
     * */
    //TODO

    Employee *employee1 = new Employee;
    employee1->firstName = "Alice";
    employee1->lastName = "Anderson";
    employee1->salary = 100000;
    employee1->isFullTime = true;

    Employee employee2;
    employee2.firstName = "Bob";
    employee2.lastName = "Black";
    employee2.salary = 50000;
    employee2.isFullTime = false;

    cout << employee1->firstName << " " << employee1->lastName << " is a ";
    if (employee1->isFullTime){
        cout << "full time employee ";
    }else{
        cout << "part time employee ";
    }
    cout << "earning " << fixed << setprecision(2) << employee1->salary << endl;

    cout << employee2.firstName << " " << employee2.lastName << " is a ";
    if (employee2.isFullTime){
        cout << "full time employee ";
    }else{
        cout << "part time employee ";
    }
    cout << "earning " << fixed << setprecision(2) << employee2.salary << endl;

    delete employee1;

    cout << "\nTask 4" << endl;
    /*
     * Task 4
     * Declare and initialize a variable of type Animal and print its values.
     * Weight should be a random number up to 1000
     * */
    double weight1, weight2;
    weight1 = rand() % 1000;
    weight2 = rand() % 1000;
    Animal *animal1 = new Animal;
    animal1->weight = weight1;
    animal1->isHungry = true;

    Animal animal2;
    animal2.weight = weight2;
    animal2.isHungry = false;

    if (animal1->isHungry){
        cout << "Hungry";
    }else{
        cout << "Well-fed";
    }
    cout << " animal weighs " << animal1->weight << endl;

    if (animal2.isHungry){
        cout << "Hungry";
    }else{
        cout << "Well-fed";
    }
    cout << " animal weighs " << animal2.weight<< endl;

    delete animal1;
    
    cout << "\nTask 5" << endl;
    /*
     * Task 5
     * Declare and initialize a variable of type Game and print its values.
     * Declare and initialize a variable of type Game in the main function and print its values.
     * Change the value of rating and print them again.
     * */
    //TODO
    Game *game1 = new Game;
    game1->title = "The Legend of Zelda: Breath of the Wild";
    game1->rating =9;
    
    Game game2;
    game2.title = "Resident Evil 7: Biohazard";
    game2.rating = 8;

    cout << game1->title << " has a rating of " << game1->rating << endl;
    cout << game2.title << " has a rating of " << game2.rating << endl;
    
    game1->rating = 10;
    game2.rating = 7;

    cout << game1->title << " has a rating of " << game1->rating << endl;
    cout << game2.title << " has a rating of " << game2.rating << endl;

    delete game1;

    cout << "\nTask 6" << endl;
    /*
     * Task 6
     * Declare and initialize a vector of 3 Songs.
     * Print the values of all songs.
     * */
    Song song1;
    song1.title = "Perfect";
    song1.artist = "Ed Sheeran";
    Song song2;
    song2.title = "Finesse";
    song2.artist = "Bruno Mars & Cardi B";
    Song song3;
    song3.title = "Pray For Me";
    song3.artist = "The Weeknd & Kendrick Lamar";

    cout <<song1.title << " by " << song1.artist << endl;
    cout <<song2.title << " by " << song2.artist << endl;
    cout <<song3.title << " by " << song3.artist << endl;

    cout << "\nTask 7" << endl;
    /*
     * Task 7
     * Declare and instantiate a variable of type Company.
     * Use function setStockPrice() to change the value of stockPrice.
     * Use function getStockPrice() to print the value of stockPrice.
     * */
    
    Company *company1 = new Company;
    company1->name = "Apple";
    company1->stockPrice = 177.97;


    cout << company1->name << " stock price: " << getStockPrice(*company1) << endl;
    
    setStockPrice(*company1, 180.00);
    
    cout << company1->name << " stock price: " << getStockPrice(*company1) << endl;

    delete company1;

    cout << "\nTask 8" << endl;
    /*
     * Task 8
     * Declare and initialize a variable of type Laptop and print its values.
     * */
    //TODO

    Laptop *laptop1 = new Laptop;
    Laptop laptop2;
   
    cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs " << fixed << laptop1->price << endl;

    initLaptop(*laptop1, "Apple", 1499.99, "Silver");

    cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs " << fixed << laptop1->price << endl;

    cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs " << fixed << laptop2.price << endl;

    initLaptop(laptop2, "Dell", 499.99, "Red");

    cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs " << fixed << laptop2.price << endl;


    delete laptop1;

    cout << "\nTask 9" << endl;
    /*
     * Task 9
     * Declare and instantiate a variable of type University.
     * Change the value of rating and print it.
     * Use functions, rather 
     * */
    University university1;

    cout << university1.getName() << " has a rating of " << university1.getRating() << endl;
    university1.setName("Luther College");
    university1.setRating(100);
    cout << university1.getName() << " has a rating of " << university1.getRating() << endl;

    cout << "\nTask 10" << endl;
    /*
     * Task 10
     * Declare and populate a vector of students.
     * Read student data from the provided exercise5_in.txt 
     * Store it in the vector and print information about all students (Name, Major, GPA).
     * */
    vector<Student> roster = vector<Student>();
    Student student;


    ifstream fileIn;
    fileIn.open("data/exercise5_in.txt");
    while (!fileIn.eof()) {
        string tempgpa;
        getline(fileIn, student.name, ' ');
        getline(fileIn, student.major, ' ');
        getline(fileIn, tempgpa, '\n');
        student.gpa = stod(tempgpa);

        roster.push_back(student);
    }

    for (Student student: roster) {
        cout << left << setw(10) << student.name << setw(15) << student.major << fixed << student.gpa << endl;
    }

    return 0;
}
