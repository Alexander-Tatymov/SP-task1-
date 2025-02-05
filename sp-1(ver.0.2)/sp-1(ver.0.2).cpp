#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


struct Person {
    string name;
    int age;
};

bool compareByAge(const Person& a, const Person& b) {
    return a.age > b.age; // Сравниваем по убыванию возраста
}

int main() {
    int n;
    cout << "Type the number of persons: ";
    cin >> n;

    vector<Person> people(n);


    for (int i = 0; i < n; ++i) {
        cout << "Type name and age: " << i + 1 << ": ";
        cin >> people[i].name >> people[i].age;
    }


    sort(people.begin(), people.end(), compareByAge);


    cout << "Sort data (from eldest to youngest) : " << endl;
    for (const auto& person : people) {
        cout << person.name << endl;
    }

    return 0;
}