#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("output.txt");

  // Write to the file
  MyFile << "Hollo world!";

  // Close the file
  MyFile.close();
}