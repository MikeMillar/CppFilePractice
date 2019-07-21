#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma pack(push, 1) // Redmoves struct padding

struct Person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop) // Re-enables padding for anything below

int main() {

	// Writing to file
	//ofstream outFile;

	//string outputFileName = "text.txt";

	//outFile.open(outputFileName);

	//if (outFile.is_open()) {
	//	for (int i = 1; i < 11; i++) {
	//		outFile << i << ". Hello There." << endl;
	//	}
	//	outFile.close();
	//}
	//else {
	//	cout << "Could not create file: " << outputFileName << endl;
	//}


	// Reading from file
	string inFileName = "text.txt";
	ifstream inFile;
	/*
	inFile.open(inFileName);

	if (inFile.is_open()) {
		string line;

		while (inFile) {
			getline(inFile, line);
			cout << line << endl;
		}		

		inFile.close();
	}
	else {
		cout << "Cannot open file: " << inFileName << endl;
	}*/


	//inFile.open(inFileName);
	//if (!inFile.is_open()) {
	//	return 1;
	//}

	//while (inFile) {
	//	string line;
	//	getline(inFile, line, ':');

	//	int pop;
	//	inFile >> pop;

	//	//inFile.get();
	//	inFile >> ws;

	//	cout << "'" << line << "'" << "---" << "'" << pop << "'" << endl;

	//	if (!inFile) {
	//		break;
	//	}
	//}

	//inFile.close();

	cout << sizeof(Person) << endl;

	return 0;
}