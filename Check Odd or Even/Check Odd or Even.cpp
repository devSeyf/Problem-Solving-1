#include <iostream>
#include <string>
using namespace std;
/*
* One
int readNumber()
{
    int Number=0;
    cout << " PLease Enter Number !" << endl;
    cin >> Number;
    return Number;
}
void checkOddOrEven(int Number)
{
    if ( Number % 2 == 0 )
    {
        cout << "Number : " << Number << " is ~ Even ~";
    }
    else
    {
        cout << "Number : " << Number << " is ~ Odd ~";
    }
}
*/
enum enNumberType { Odd=1,Even=2};

int ReadNumber()
{
    int Num;
    cout << "Please enter a number ?" << endl;
    cin >> Num;
    return Num;
}
enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }

}
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";
}
int main()
{   
    //One 
    //checkOddOrEven(readNumber());
    //Two
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}

