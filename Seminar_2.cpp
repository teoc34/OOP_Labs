#include <iostream>
using namespace std;

int test_var = 10;//variabila globala, este in afara functiei

int function_test_2();//declararea functiei, fara implementare
//functia trebuie declarata aici si apelata in main
void ptr_exp_1();

int main()
{
    function_test_2();
    ptr_exp_1();
    return 0;
}

int function_test_2()
{
    return 0;
}

void ptr_exp_1() {
    int test_var = 7;
    int x = 3;
    char y = 'c';
    double d = 2.3;
    int v1[111] = { 0 };

    int* ptr_test_var = &test_var;
    int* ptr_x = &x;
    char* ptr_y = &y;
    double* ptr_d = &d;

    x++;

    int a = 3 + x++;// +1 s a facut la final //postincrementare
    int b = 3 + ++x;//preincrementare
    //incrementarea se face din 4 in 4 pentru ca este adresa unui intreg

    
    ptr_x++;
    ptr_y++;
    ptr_d++;
    //int* ptr_v1=&v1;
}

