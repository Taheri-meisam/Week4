#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

// pass array to function 

void printArray(int Myarr[], size_t size);
void setArray(int Myarr[], size_t size, int value);

void printArray(/* const*/ int Myarr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << Myarr[i] << " ";
    }
    std::cout << std::endl;
   
}
void setArray(/* const*/ int Myarr[], size_t size, int value) {
    for (size_t i = 0; i < size; i++) {
        Myarr[i] = value;
    }

}



// function overloading
void print(int);
void print(double);
void print(char);
void print(float);
void print(std::string);
void print(std::string , int);
void print(std::vector<std::string>);

void print(int val) {

    std::cout << "The integer value is : " << val << std::endl;
}
void print(double Dval) {
    std::cout << "The Double  value is : " << Dval << std::endl;

}
void print(char Cval) {
    std::cout << "The Char value is : " << Cval << std::endl;
}
void print(float Fval) {
    std::cout << "The Float value is : " << Fval << std::endl;
}
void print(std::string Sval) {
    std::cout << "The String value is : " << Sval << std::endl;
}
void print(std::string Sval, int val) {
    std::cout << "The String value is : " << Sval <<"and int Value is :"<<val << std::endl;

}
void print(std::vector<std::string> Vvalue) {
    for (auto i : Vvalue) {
        std::cout << "vector values are : " << i << std::endl;
    }
}

int main()
{
 
    /////////////// Pass array to Function 
    int testArray[] = {1,2,3,4,5,6,7,8,9};
    std::cout << "Array Values before setting values :  " ;
    printArray(testArray, (sizeof(testArray) / sizeof(testArray[0])));
    setArray(testArray, (sizeof(testArray) /sizeof( testArray[0])), 0);
    std::cout << "Array Values after setting values :  ";
    printArray(testArray, sizeof(testArray) /sizeof( testArray[0]));





  // Function Overloads 

    std::cout << "\n\n\n\n";
    
    print(1001.0); // print(1001.0) // print(1001.0f)
    print('A');
    print("C style string");
    std::string Sval= " C++ string";
    print(Sval);
    print(Sval, 100);
    std::vector <std::string> Svalues = { "Test","one ","two" };
    print(Svalues);



    //int x2 = 2;
    //std::vector <int> Nums{ 1,2,3,4,5,6,7,8,9 };
    //std::vector <int> Evens;
    //std::copy_if(Nums.begin(), Nums.end(),std::back_inserter(Evens), [x2](int x) {  return (x % x2 == 0); });
    //for (auto x : Evens) {
    //    std::cout << " " << x;
    //}
    
    
}
