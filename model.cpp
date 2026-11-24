#include <iostream>
#include <string>

// Practice 13 · Part 2 — Andres Valenzuela
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Student {
	std::string name;
	int id;
	double gpa;
};

void printStudent(const Student& s) {
	std::cout << s.name << " "
		<< s.id << " "
		<< s.gpa << "\n";
}

int main() {
	Student student1{ "Lenny", 1, 4.0 };
	Student student2{ "Ben", 2, 2.9 };
	printStudent(student1);
	printStudent(student2);
  return 0;
}
