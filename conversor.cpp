#include <iostream>
#include <locale.h>
#include <limits> 
using namespace std;


void cf(){
    cout << "Qual o valor que você gostaria de converter?" << endl;
    double valorConverter;
    cin >> valorConverter;
    while(cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, digite um número válido: ";
        cin >> valorConverter;
    }

    double fahrenheit = (valorConverter * 1.8) + 32;
    cout << "O valor em Fahrenheit é: " << fahrenheit << endl;
}

void fc(){
    cout << "Qual o valor que você gostaria de converter?" << endl;
    double valorConverter;
    cin >> valorConverter;
    while(cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, digite um número válido: ";
        cin >> valorConverter;
    }

    double celsius = (valorConverter - 32) / 1.8;
    cout << "O valor em Celsius é: " << celsius << endl;
}

void fk(){
    cout << "Qual o valor que você gostaria de converter?" << endl;
    double valorConverter;
    cin >> valorConverter;
    while(cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, digite um número válido: ";
        cin >> valorConverter;
    }

    double celsius = (valorConverter - 32) / 1.8;
    double kelvin = celsius + 273.15;
    cout << "O valor em Kelvin é: " << kelvin << endl;
}

void ck(){
    cout << "Qual o valor que você gostaria de converter?" << endl;
    double valorConverter;
    cin >> valorConverter;
    while(cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, digite um número válido: ";
        cin >> valorConverter;
    }

    double kelvin = valorConverter + 273.15;
    cout << "O valor em Kelvin é: " << kelvin << endl;
}

void kc(){
    cout << "Qual o valor que você gostaria de converter?" << endl;
    double valorConverter;
    cin >> valorConverter;
    while(cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, digite um número válido: ";
        cin >> valorConverter;
    }

    double celsius = valorConverter - 273.15;
    cout << "O valor em Celsius é: " << celsius << endl;
}

void kf(){
    cout << "Qual o valor que você gostaria de converter?" << endl;
    double valorConverter;
    cin >> valorConverter;
    while(cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, digite um número válido: ";
        cin >> valorConverter;
    }

    double celsius = valorConverter - 273.15;
    double fahrenheit = (celsius * 1.8) + 32;
    cout << "O valor em Fahrenheit é: " << fahrenheit << endl;
}

void menu(){
    cout << endl;
    cout << "           Bem-vindos ao Conversor de Temperatura!       " << endl;
    cout << endl;

    cout << "************************************" << endl;
    cout << "* Celsius para Fahrenheit = CF     *" << endl;
    cout << "* Fahrenheit para Celsius = FC     *" << endl;
    cout << "* Celsius para Kelvin = CK         *" << endl;
    cout << "* Kelvin para Celsius = KC         *" << endl;
    cout << "* Fahrenheit para Kelvin = FK      *" << endl;
    cout << "* Kelvin para Fahrenheit = KF      *" << endl;
    cout << "************************************" << endl;
    cout << endl;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    string escolhaConversao;
    do {
        menu();
        cout << "Qual operação você gostaria de realizar?" << endl;
        cin >> escolhaConversao;

        if (escolhaConversao == "CF"){
            cf();
        }
        else if (escolhaConversao == "FC"){
            fc();
        }
        else if (escolhaConversao == "CK"){
            ck();
        }
        else if (escolhaConversao == "KC"){
            kc();
        }
        else if (escolhaConversao == "FK"){
            fk();
        }
        else if (escolhaConversao == "KF"){
            kf();
        }
        else {
            cout << "Opção inválida!" << endl;
        }

        cout << "Deseja realizar outra conversão? (S/N)" << endl;
        cin >> escolhaConversao;
    } while(escolhaConversao == "S" || escolhaConversao == "s");

    return 0;
}
