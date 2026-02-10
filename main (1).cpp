#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct BusinessCard {
    string companyName;
    string companyAddress;
    string phoneNumber;
    string workingHours;
    string representative;
    int priceQuoted;
};

int main() {
    srand(time(0));

    BusinessCard companies[5] = {
        {"Co1", "123 Main Street", "123-456-7890", "11AM-9PM", "Ally", rand() % 500 + 100},
        {"Co2", "456 Ramona Expressway", "098-765-4321", "8:30AM-5PM", "Barney", rand() % 500 + 100},
        {"Co3", "99th Ave", "122-344-5667", "24/7", "Carol", rand() % 500 + 100},
        {"Co4", "789 West St", "800-com-four", "10AM-8PM", "Dave", rand() % 500 + 100},
        {"Co5", "107th Street", "555-555-5557", "9AM-6PM", "Eliza", rand() % 500 + 100}
    };

    int bestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (companies[i].priceQuoted < companies[bestIndex].priceQuoted) {
            bestIndex = i;
        }
    }

    cout << "Best company: " << companies[bestIndex].companyName << endl;
    cout << "Price: $" << companies[bestIndex].priceQuoted << endl;
    cout << "Address: " << companies[bestIndex].companyAddress << endl;
    cout << "Phone: " << companies[bestIndex].phoneNumber << endl;
    cout << "Hours: " << companies[bestIndex].workingHours << endl;
    cout << "Rep: " << companies[bestIndex].representative << endl;

    return 0;}