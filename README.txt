DOCUMENTAÇÃO DO PROGRAMA DE CONTROLE DE CONTA BANCÁRIA

Este programa foi desenvolvido em linguagem C++ e tem o objetivo de simular o controle
de uma conta bancária, permitindo ao usuário realizar depósitos, saques e 
consultar o saldo. A classe "ContaBancaria" foi criada para encapsular a lógica de 
controle das operações bancárias.

CLASSE "ContaBancaria":
Atributos:
- double balance (privado): Armazena o saldo da conta bancária.

Métodos Públicos:
1. Construtor:
   BankAccount(double bal)
   - Descrição: Constrói um objeto "ContaBancaria" com o saldo inicial especificado.
   - Parâmetros:
     - bal (double): Valor do saldo inicial da conta.

2. calculate_deposit:
   double calculate_deposit(double add)
   - Descrição: Realiza um depósito na conta bancária.
   - Parâmetros:
     - add (double): Valor a ser depositado.
   - Retorno: O saldo atualizado após o depósito.

3. calculate_withdrawal:
   double calculate_withdrawal(double wit)
   - Descrição: Realiza um saque da conta bancária, desde que haja saldo suficiente.
   - Parâmetros:
     - wit (double): Valor a ser sacado.
   - Retorno: O valor do saque realizado ou 0 em caso de saldo insuficiente.

4. see_balance:
   double see_balance()
   - Descrição: Consulta o saldo atual da conta bancária.
   - Retorno: O saldo atual da conta.

COMO UTILIZAR O PROGRAMA:
1. Ao executar o programa, você verá o "Menu Principal" com as seguintes opções:
   ========== MENU PRINCIPAL ==========
   1 - Depósito
   2 - Saque
   3 - Saldo
   4 - Sair

   Digite o número da opção desejada:

2. Para realizar um "Depósito" (opção 1):
   - Digite 1 e pressione Enter.
   - Insira o valor do depósito e pressione Enter.
   - O programa mostrará a mensagem "Depósito realizado com sucesso!" e pausará a 
     execução até você pressionar qualquer tecla para continuar.

3. Para realizar um "Saque" (opção 2):
   - Digite 2 e pressione Enter.
   - Insira o valor do saque e pressione Enter.
   - Se houver saldo suficiente, o programa mostrará a mensagem "Saque realizado 
     com sucesso!" e pausará a execução até você pressionar qualquer tecla para 
	 continuar.

4. Para verificar o "Saldo" (opção 3):
   - Digite 3 e pressione Enter.
   - O programa exibirá o saldo atual da conta e pausará a execução até você 
     pressionar qualquer tecla para continuar.

5. Para "Sair" do programa (opção 4):
   - Digite 4 e pressione Enter.
   - O programa será encerrado.

OBSERVAÇÕES IMPORTANTES:

1. Antes de utilizar as opções de depósito e saque, lembre-se de fornecer os valores 
   numéricos corretos para as operações.

2. Caso você tente realizar um saque com um valor maior que o saldo disponível na 
   conta, o programa exibirá a mensagem "Saldo insuficiente. Por favor, tente 
   novamente." e não será possível realizar o saque.

3. O programa permite realizar várias operações, e você pode repetir as operações 
   de depósito, saque e consulta de saldo quantas vezes desejar até escolher a opção 
   "Sair".