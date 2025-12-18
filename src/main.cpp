#include <iostream>
using namespace std;
void addNum();
void check_evenOdd();
void factorial();
void reverse_num();

int main(){
    int choice;
    do{
    cout<<"1. Add two numbers\n";
    cout<<"2. check even/odd \n";
    cout<<"3. Find the factorial\n";
    cout<<"4. Reverse a Number\n";
    cout<<"5. Exit!!\n";
    cin>>choice;

    switch (choice) {
        case 1:
            addNum();
            break;
        case 2:
            check_evenOdd();
            break;
        case 3:
            factorial();
            break;
        case 4:
            reverse_num();
            break;
        case 5:
            break;
    }

    }
    while(choice != 5);

    return 0;
}

void addNum() {
    int a,b ;
    cout << "Enter two number " << endl;
    cin >> a >> b;
    cout << "Sum = "<< a+b << endl;
}

void check_evenOdd() {
    int a;
    cout << "Enter the number u want know if it is eveen or odd" << endl;
    cin >> a;
    if (a%2 == 0){
        cout << "even number" << endl;
    }
    else {
        cout << "odd number"<< endl;
    }

}

void factorial() {
    int n;
    cout << "Enter the order of factorial" << endl;
    cin >> n;
    long long fact = 1;

    if (n<0) {
        cout << "u entered a negetive order for which factorial is not defined" << endl;
        return;
    }

    for(int i = 1;i <= n;i++ ){
        fact *= i;
    }

    cout << "factorial = " << fact << endl;

}

void reverse_num() {
    int a,rev;
    cout << "Enter the num to be reversed" << endl;
    cin >> a;
    while (a !=0){
        rev = rev * 10 + (a%10);
        a /= 10;
    }
    cout << "The reversed number is " << rev << endl;
}