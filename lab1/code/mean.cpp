#include <iostream>

int main(){

    int num1, num2, num3, num4, num5;

    std :: cout << "ENTER FIVE NUMBERS: "  << std :: endl;

    std :: cin >> num1;
    std :: cin >> num2;
    std :: cin >> num3;
    std :: cin >> num4;
    std :: cin >> num5;


    
    int total = num1 + num2 + num3 + num4 + num5;

    int length = 5;

    int mean = total/length;

    std :: cout << total << std :: endl;

    std :: cout << length << std :: endl;

    std :: cout << mean ;




    return 0;

}