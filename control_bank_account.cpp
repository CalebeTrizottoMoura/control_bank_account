#include <iostream>
#include <string>
#include <climits>

class BankAccount{
private:
    double balance;

public:
    BankAccount(double bal) : balance(bal){} 

    double calculate_deposit(double add){
        balance = balance + add;
        return balance;
    }

    double calculate_withdrawal(double wit){
        if(wit <= balance){
            balance = balance - wit;
            return wit; 
        }else{
            return 0;
        }
    }

    double see_balance(){
        return balance;
    }
};

int main(){
    setlocale(LC_ALL, "portuguese");

    int option, cont = 0;
    double value, amount;

    BankAccount account(0);

    do{
        if(cont > 0){
            system("pause");
        }
        cont++;
        system("cls");
        std::cout << "========== MENU PRINCIPAL ==========" << std::endl;
        std::cout << "1 - Depósito" << std::endl;
        std::cout << "2 - Saque" << std::endl;
        std::cout << "3 - Saldo" << std::endl;
        std::cout << "4 - Sair" << std::endl;
        std::cout << "\nDigite o número da opção desejada: ";
        std::cin >> option;
        system("cls");

        switch(option){
        case 1:
            std::cout << "========== DEPÓSITO ==========" << std::endl;
            std::cout << "Valor do depósito: ";
            std::cin >> amount;

            account.calculate_deposit(amount);
            system("cls");

            std::cout << "========== RESULTADO ==========" << std::endl;
            std::cout << "Depósito realizado com sucesso!\n" << std::endl;
            break;
        case 2:
            std::cout << "========== SAQUE ==========" << std::endl;
            std::cout << "Quanto deseja sacar: ";
            std::cin >> amount;

            value = account.calculate_withdrawal(amount);
            system("cls");

            std::cout << "========== RESULTADO ==========" << std::endl;
            if(value > 0){
                std::cout << "Saque realizado com sucesso!\n" << std::endl;
            }else{
                std::cout << "Saldo insuficiente. Por favor, tente novamente.\n" << std::endl;
            }
            break;
        case 3:
            std::cout << "========== SALDO ==========" << std::endl;
            std::cout << "Seu saldo atual é de R$ " << account.see_balance() << ".\n" << std::endl;
            break;
        case 4:
            std::cout << "========== SAINDO ==========\n" << std::endl;
            break;
        default:
            std::cout << "========== OPÇÃO INVÁLIDA ==========\n" << std::endl;
            break;
        }
    }while(option != 4);

    return 0;
}