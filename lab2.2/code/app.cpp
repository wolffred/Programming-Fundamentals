

//(         (!(i<limit-1) ^ !(!( c=getchar()) != '\n') ^ !(c)) != 'A')

// 2) this is because x & y is a bitwise operator and results in 0 but for &&, it is a logical operation so if any bit is a nonzer, it results in 1


#include <iostream>

using namespace std;

int rotate(int s, int r){

    // int s;
    // int r;

    // cout << "ENTER VALUE: ";
    // cin >> s;

    // cout << "ENTER TIMES: ";
    // cin >> r;

    cout << "ORIGINAL: " << s << endl;

    s = s << r;

    cout << "ROTATED: " << hex << s << endl;

    

}

int main(){

    // int num1;
    // int num2;

    // cout << "Enter num1: ";
    // cin >> num1;

    // cout << "Enter num2: ";
    // cin >> num2;


    // rotate(num1, num2);

    cout << endl;

    int i = 1;

    int count = 0;

    int basenum = 2;

    int pownum = 10;

    // while(count <= pownum){
    //     i = i * basenum;
    //     cout << i << endl;
    //     count++;
    // }

    while(cout << i = i * basenum, count ++, count <= pownum);

    return 0;

}

