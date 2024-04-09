#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //Task_1
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Ошибка открытия файла\n";
        return 1;
    }
	ofstream outputFile("output.txt");
    if (!inputFile) {
        cerr << "Ошибка при открытии файла input.txt\n";
        return 1;
    }
    if (!outputFile) {
        cerr << "Ошибка при создании файла output.txt\n";
        return 1;
    }
    string word;
    while (inputFile >> word) {
        if (word.length() >= 7) {
            outputFile << word << " ";
        }
    }
    inputFile.close();
    outputFile.close();
    cout << "Файл успешно создан\n";
    //Task_2
    ifstream inputFile_1("input_1.txt");
    if (!inputFile_1) {
        cerr << "Ошибка открытия файла\n";
        return 1;
    }
    ofstream outputFile_1("output_1.txt");
    if (!outputFile_1) {
        cerr << "Ошибка создания файла\n";
        return 1;
    }
    string line;
    while (getline(inputFile_1, line)) {
        outputFile_1 << line << "\n";
    }
    inputFile_1.close();
    outputFile_1.close();

}
