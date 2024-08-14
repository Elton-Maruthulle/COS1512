// Chapter 4: Type Casting
// Type casting is changing a data type, e.g., from string to int

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Introduction
    cout << "Chapter 4: Type Casting\n" << endl;
    cout << "Type casting is changing a data type, e.g., from string to int using the function." << endl;
    cout << "If 'f' is a float, you can convert it like this: int i = (int) f \n" << endl;

    // Example: Float to Int
    cout << "Float to Int" << endl;
    cout << "EXAMPLE" << endl;
    cout << "float f = 10.2;" << endl;
    cout << "int i = (int) f;" << endl;

    // Perform Float to Int conversion
    float f = 10.2;
    int i = (int) f;

    // Output the results of the conversion
    cout << "This is a float to int conversion:" << endl;
    cout << "The float is " << f << ", the int is " << i << endl;

    // Example: Int to Float
    cout << "\nIf you have 3 / 7 and they are integers, you get an int output." << endl;
    cout << "But with typecasting, you can get a float result." << endl;
    cout << "int n = 3;" << endl;
    cout << "int v = 7;" << endl;
    cout << "float result = (float) n / (float) v;" << endl;

    // Perform Int to Float conversion
    int n = 3;
    int v = 7;
    float result = (float) n / (float) v;

    // Output the results of the conversion
    cout << "The output will be " << result << ", which is a float even though the variables n and v were int type." << endl;
    cout << "\n" << endl;

    // Example: Int to String
    cout << "Int to String" << endl;
    cout << "To convert from int to string, you use the function to_string()" << endl;
    cout << "int y = 40;\n" << endl;
    cout << "string z = to_string(y);\n" << endl;
    cout << "cout << z << endl;\n" << endl;

    // Perform Int to String conversion
    int y = 40;
    string z = to_string(y);

    // Output the results of the conversion
    cout << "This outputs a string of \"" << z << "\" typecasted from int.\n\n" << endl;

    // Example: String to Int
    cout << "For string to int, you use the stoi() function." << endl;
    string str = "123";
    int num = stoi(str);

    cout << "string str = \"123\";" << endl;
    cout << "int num = stoi(str);" << endl;
    cout << "The integer value is: " << num << endl;

    return 0;
}
