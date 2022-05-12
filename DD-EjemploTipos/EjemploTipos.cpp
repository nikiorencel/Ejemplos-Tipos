#include<cassert>
#include<string>
using namespace std::literals;

int main()
{
    
    //Tipo de dato: DOUBLE 
    
    assert(1.0 == 0.5 + 0.5); //Suma y comparacion
    assert(3.0 != 4.0 - 2.0); //Diferencia y resta
    assert(6.5 >= 6.0 - 1.0); //Mayor o igual
    assert(3.8 <= 4.7 + 1.3); //Menor o igual
    assert(8.4 == 3.5 * 2.4); //Multiplicacion y comparacion
    assert(2.0 == 8.0 / 4.0); //Division y comparacion


    //Tipo de dato: INT

    assert(2 == 1 + 1); //Suma y comparacion
    assert(3 != 4 - 3); //Diferencia y resta
    assert(8 >= 2 + 1); //Mayor o igual
    assert(5 <= 4 + 6); //Menor o igual
    assert(6 == 3 * 2); //Multiplicacion y comparacion
    assert(2 == 10 / 5); //Division y comparacion


    //Tipo de dato: CHAR

    assert('A' != 'B');
    assert('A' <= 'B'); //Por la tabla ASCII
    assert(131 == 'A' + 'B'); //En la tabla ASCII A=65 y B=66


    //Tipo de dato: STRING

    assert("Nicole"s == "Ni"s + "co"s + "le"s);
    assert("Nicole"s.length() == 6);


    //Tipo de dato: UNSIGNED

    assert(0 == 0);
    assert(7 == 4 + 3);
    assert(400 >= 230);
    assert(100 <= 600);


    //Tipo de dato: BOOL

    assert(true);
    assert(false or true);
    assert(not false);
    assert(true == true);



}
