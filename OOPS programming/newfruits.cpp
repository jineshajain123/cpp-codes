#include<iostream>
using namespace std;

class Fruits {
protected:
    static int total_fruits;  // Static member to keep track of total number of fruits

public:
    Fruits(int count) {
        total_fruits += count;  // Update total fruits whenever a new fruit is added
    }

    static int getTotalFruits() {
        return total_fruits;
    }
};

int Fruits::total_fruits = 0;  // Initialize static member

class Apples : public Fruits {
private:
    int apple_count;

public:
    Apples(int count) : Fruits(count), apple_count(count) {}

    int getAppleCount() const {
        return apple_count;
    }
};

class Mangoes : public Fruits {
private:
    int mango_count;

public:
    Mangoes(int count) : Fruits(count), mango_count(count) {}

    int getMangoCount() const {
        return mango_count;
    }
};

int main() {
    Apples apples(10);
    Mangoes mangoes(5);

    std::cout << "Number of Apples: " << apples.getAppleCount() << std::endl;
    std::cout << "Number of Mangoes: " << mangoes.getMangoCount() << std::endl;
    std::cout << "Total number of fruits in the basket: " << Fruits::getTotalFruits() << std::endl;

    return 0;
}