#include <iostream>
#include <list>
#include <vector>
using namespace std;
class Animal {
private:
    string name;
    string speices;

public:
     static inline int numOfAnimals = 0;

    Animal(string theName, string theSpecies){
        name = theName;
        speices = theSpecies;
        numOfAnimals++;
    }
    string getAnimalName(){
    return name;

 }
 string getAnimalSpecies(){
    return speices;
 }
};
int main()
{

cout << "Welcome to my MidTerm Check in" << "\n" << endl;

cout << "\n Num of aniamls is: " << Animal::numOfAnimals << "\n\n" << endl;


 Animal myNewAnimal01("This is the name", "and the species");

 Animal animalTwo("This is Animal two", "Hyena");

cout << "\n\ After creating a couple animals, numOfAnimals is " << Animal::numOfAnimals << "\n\n" << endl;

cout << "The name of this animal is: " << animalTwo.getAnimalName() << endl;
cout << "The species is: " << animalTwo.getAnimalSpecies() << endl;

cout << "The name of this animal is: " << animalTwo.getAnimalName() << endl;
cout << "The species is: " << myNewAnimal01.getAnimalSpecies() << endl;





    return 0;

}
