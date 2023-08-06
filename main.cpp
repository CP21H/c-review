#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Function Declarations */
void menu();    // this should print the menu ONLY
void ifStatements();
void loops();
void arrays();
void ioStream();
void classes();
void DMA();
void pvavFuncts();
void printMenu(int);   // this should take an input and print out the stuff user wants



/* Main */
int main() {
    char cont;
    int menuChoice;

    // welcome message
    cout << "\nWelcome to the C++ Review Program\n";
    cout << "This program was written entirely by: Cristhian Prado\n";

    do {
        menu();
        cout << "What would you like to review first? (1-7): ";
        cin >> menuChoice;

        printMenu(menuChoice);

        cout << "Would you like to continue reviewing? (Y/N): ";
        cin >> cont;
    } while(cont == 'Y' or cont == 'y');

    return 0;
}

/* Function Definitions */
void menu() {
    cout << "--------------------- MENU -------------------\n";
    cout << "1 - IF-Statements\n";
    cout << "2 - While, do-While, for Loops\n";
    cout << "3 - Arrays\n";
    cout << "4 - File I/O Stream\n";
    cout << "5 - Classes\n";
    cout << "6 - Dynamic Memory Allocation\n";
    cout << "7 - Purely Virtual & Virtual Functions\n";
    cout << "---------------------------------------------\n";
}

void ifStatements() {
    cout << "\n----- General Forms of IF-Statements -----\n";
    cout << "if (condition) {\n";
    cout << "\t(code)\n";
    cout << "};\n";
    cout << "if (variable != 'Y') {code};\n\n";
}

void loops() {
    cout << "\n----- General Forms of while loops -----\n";
    cout << "while (condition) {\n";
    cout << "\t(code)\n";
    cout << "};\n\n";

    cout << "\n----- General Forms of do-while loops -----\n";
    cout << "do {\n";
    cout << "\t(code)\n";
    cout << "} while (condition);\n\n";

    cout << "\n----- General Forms of for loops -----\n";
    cout << "for (int i = 0; i-condition; i-incr/decr;) {\n";
    cout << "\t(code)\n";
    cout << "};\n\n";
};

void arrays() {
    cout << "\nThis one is a lot easier to learn / review through the arrays.cpp file.\n\n";
};

void ioStream() {
    cout << "\n----- General File I/O Stream -----\n";
    cout << "\tLibrary Required: #include <fstream>\n";
    cout << "\tCreate variable [fin] with INPUT FILE datatype: ifstream fin;\n";
    cout << "\tCreate variable [fout] with OUTPUT FILE datatype: ofstream fout;\n\n";

    cout << "\t// Input Functions\n";
    cout << "\t\t.fin >>\n";
    cout << "\t\t\t- Standard form for reading / extracting information FROM a file.\n";

    cout << "\t\t.clear()\n";
    cout << "\t\t\t- Sets a new value for the stream's internal error state flags.\n";

    cout << "\t\t.open()\n";
    cout << "\t\t\t- Opens the file that is passed in as a parameter.\n";

    cout << "\t\t.is_open()\n";
    cout << "\t\t\t- Checks whether a file is open or not.\n";

    cout << "\t\t.ignore()\n";
    cout << "\t\t\t- Extracts characters from the input sequence and discards them.\n";

    cout << "\t\t.close()\n";
    cout << "\t\t\t- Closes the file currently associated with the object, no longer in stream.\n";



    cout << "\t// Output Functions\n";
    cout << "\t\t.fout <<\n";
    cout << "\t\t\t- Standard form for outputting information TO a file.\n";

    cout << "\t\t.open()\n";
    cout << "\t\t\t- Opens the file that is passed in as a parameter.\n";

    cout << "\t\t.close()\n";
    cout << "\t\t\t- Closes the file currently associated with the object, no longer in stream.\n";

    cout << "\n";
};

void classes() {
    cout << "\n----- General Class Information -----\n";
    cout << "\tLibrary Required: #include ""class.h\n";

    cout << "\n\tStandard Class Declaration:\n";
    cout << "\t\tclass className {\n";
    cout << "\t\t\tpublic:\n";
    cout << "\t\t\t\t//- Constructor Declarations\n";
    cout << "\t\t\t\t//- Member Function Declarations\n\n";
    cout << "\t\t\tprivate:\n";
    cout << "\t\t\t\t//- Private Variables\n";
    cout << "\t\t};\n";

    cout << "\n\tStandard Class Definition:\n";
    cout << "\t\tConstructor: className::className() {}\n";
    cout << "\t\tDestructor: className::~className() {}\n";
    cout << "\t\tMember Function: type className::functionName() {}\n\n";
};

void DMA() {
    cout << "\n----- General DMA Information -----\n";
    cout << "\t-> Dynamic memory is allocated using operator 'new'.\n";
    cout << "\t-> 'new' is followed by a data type specifier and, if we want an array, followed by [].\n";

    cout << "\n\tExample:\n";
    cout << "\t\tint * foo;             -- Creates a pointer.\n";
    cout << "\t\tfoo = new int [5];     -- foo now points to an array of 5 indices.\n";
    cout << "\t\tdelete pointer;        -- Releases memory of a single element allocated with 'new'.\n";
    cout << "\t\tdelete[] pointer;      -- Releases memory for arrays allocated with 'new'.\n\n";
};

void pvavFuncts() {
    cout << "\n----- General Pure Virtual Function Information -----\n";
    cout << "\t-> A virtual function is a member function that is declared in the BASE class using\n";
    cout << "\tthey keyword VIRTUAL and is re-defined in the DERIVED class.\n";
    cout << "\t-> A PURE virtual function is declared by assigning 0 in declaration.\n";

    cout << "\n\tExample:\n";
    cout << "\t\tvirtual void printSound();            -- Creates a virtual function in base class.\n";
    cout << "\t\tvirtual void printSound() = 0;        -- Creates a purely virtual function in base class.\n\n";
};

void printMenu(int input) {
    switch (input) {
        case 1:
            ifStatements();
            break;

        case 2:
            loops();
            break;

        case 3:
            arrays();
            break;

        case 4:
            ioStream();
            break;

        case 5:
            classes();
            break;

        case 6:
            DMA();
            break;

        case 7:
            pvavFuncts();
            break;

        default:
            cout << "Please input a correct choice.\n";
            break;
    }
};