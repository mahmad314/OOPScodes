#include<iostream>
using namespace std;
class Container {
    friend class Iterator; // Declare Iterator as a friend class
private:
    int* data;
public:
    Container() {
        // Allocate memory for data
        data = new int[10];
        // Initialize data
        for (int i = 0; i < 10; ++i) {
            data[i] = i;
        }
    }
    ~Container() {
        delete[] data;
    }
    // Other member functions...
};

class Iterator {
private:
    const Container* container;
    int index;
public:
    Iterator(const Container* c) : container(c), index(0) {}

    bool hasNext() const {
        return index < 10;
    }

    int next() {
        if (!hasNext()) {
            throw std::out_of_range("No more elements");
        }
        // Access Container's private data member
        return container->data[index++];
    }
};

int main() {
    Container c;
    Iterator it(&c);

    while (it.hasNext()) {
        std::cout << it.next() << ' ';
    }
    // Outputs: 0 1 2 3 4 5 6 7 8 9
}