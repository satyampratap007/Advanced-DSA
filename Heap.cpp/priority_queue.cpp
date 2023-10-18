#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Person {
    double ht;
    double age;
    Person() {}
    Person(double a, double h) : age(a), ht(h) {}
};

struct my_cmp {
    bool operator()(const Person& p1, const Person& p2) {
        // return p1.ht > p2.ht; // Compare based on height
        // return p1.age > p2.age; // Compare based on age
    }
};

int main() {
    // <age, height>
    vector<Person> vec = {{60, 5.5}, {50, 6.0}, {70, 6.5}, {80, 6.7}, {40, 4.0}};

    priority_queue<Person, vector<Person>, my_cmp> pq(vec.begin(), vec.end());

    while (!pq.empty()) {
        Person p = pq.top();
        cout << "Age: " << p.age << ", Height: " << p.ht << endl;
        pq.pop();
    }

    return 0;
}
