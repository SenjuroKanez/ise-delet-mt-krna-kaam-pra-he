// DsaLab5.cpp
#include <iostream>

int main() {
    int x = 42;
    float y = 3.14f;

    int* px = &x;
    float* py = &y;

    std::cout << "Value of x (via pointer): " << *px << '\n';
    std::cout << "Address of x (pointer): " << px << '\n';

    std::cout << "Value of y (via pointer): " << *py << '\n';
    std::cout << "Address of y (pointer): " << py << '\n';

    return 0;
}
#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[100];
    double grade;
};

void addStudentDetails(Student* students, int count) {
    for (int i = 0; i < count; ++i) {
        cout << "Enter details for student " << (i + 1) << ":\n";
        cout << "  ID: ";
        cin >> (students + i)->id;
        cin.ignore(1000, '\n');
        cout << "  Name: ";
        cin.getline((students + i)->name, 100);
        cout << "  Grade: ";
        cin >> (students + i)->grade;
        cin.ignore(1000, '\n');
    }
}

void displayStudents(const Student* students, int count) {
    for (int i = 0; i < count; ++i) {
        const Student* s = students + i;
        cout << "Student " << (i + 1) << ": ID=" << s->id
             << ", Name=\"" << s->name << "\""
             << ", Grade=" << s->grade << '\n';
    }
}

double averageGrade(const Student* students, int count) {
    if (count == 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i < count; ++i) sum += (students + i)->grade;
    return sum / count;
}

int main() {
    const int N = 3;
    Student* students = new Student[N];

    addStudentDetails(students, N);

    cout << "\nEntered students:\n";
    displayStudents(students, N);

    double avg = averageGrade(students, N);
    int whole = static_cast<int>(avg);
    int cents = static_cast<int>((avg - whole) * 100 + 0.5);
    if (cents == 100) { whole += 1; cents = 0; }

    cout << "Average grade: " << whole << '.';
    if (cents < 10) cout << '0';
    cout << cents << '\n';

    delete[] students;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    float x, y, z;
    float *px = &x, *py = &y, *pz = &z;

    *px = 1.25f;
    *py = 2.5f;
    *pz = 3.75f;

    float sum = *px + *py + *pz;
    cout << "Sum = " << sum << '\n';
    return 0;
}

#include <iostream>
using namespace std;

void swapValues(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;       
    *a = *a - *b;
}

int main() {
    cout << "Enter two integers: ";
    int x, y;
    if (!(cin >> x >> y)) return 1;

    cout << "Before swap: x=" << x << ", y=" << y << '\n';
    swapValues(&x, &y);
    cout << "After swap:  x=" << x << ", y=" << y << '\n';

    return 0;
}