#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

// Usage:
// cat input.txt | ./main > output.txt
// ./main input.txt > output.txt
// ./main input.txt output.txt

void processAllCases(std::istream &is, std::ostream &os);
void processCase(const int iteration, std::istream &is, std::ostream &os);

int main(int argc, char *argv[]) {
    std::ostream* os;
    std::istream* is;
    std::ofstream fout;
    std::ifstream fin;
    switch(argc) {
        case 1:
            os = &std::cout;
            is = &std::cin;
            break;
        case 2:
            fin.open(argv[1]);
            is = &fin;
            os = &std::cout;
            break;
        case 3:
            fin.open(argv[1]);
            is = &fin;
            fout.open(argv[2]);
            os = &fout;
            break;
        default:
            std::cout
                << "Usage:" << std::endl
                << "cat input.txt | ./main > output.txt" << std::endl
                << "./main input.txt > output.txt" << std::endl
                << "./main input.txt output.txt" << std::endl;
            return 1;
    }
    processAllCases(*is, *os);
    return 0;
}

// process all cases
void processAllCases(std::istream &is, std::ostream &os)
{
    int totalCases;
    is >> totalCases;
    for(int caseNumber = 1; caseNumber <= totalCases; ++caseNumber)
    {
        processCase(caseNumber, is, os);
    }
}

// process individual case, caseNumber = 1..totalCases
void processCase(const int caseNumber, std::istream &is, std::ostream &os)
{
    // only change this function for codejam problems
}
