#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma pack(push, 1) // Redmoves struct padding

struct Person {
	char name[50];
	int age;
	double height;
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

	

	Person someone = {"Frodo", 220, 0.8};

	string outFileName = "test.bin";

	// Writing to binary file
	ofstream outputFile;
	outputFile.open(outFileName, ios::binary);
	if (outputFile.is_open()) {
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outputFile.close();
	}
	else {
		cout << "Could not create file " << outFileName << endl;
	}

	// Reading a binary file
	Person someoneElse = {};

	ifstream inputFile;
	inputFile.open(outFileName, ios::binary);
	if (inputFile.is_open()) {
		inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
		inputFile.close();
	}
	else {
		cout << "Could no read file " << outFileName << endl;
	}

	cout << someoneElse.name << ',' << someoneElse.age << ',' << someoneElse.height << endl;

	return 0;
}