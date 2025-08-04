#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

bool sair = false;
int dificuldade, tamanho_dificuldade, entrada = 0;
int val_1, val_2, val_3, val_4,val_z = 0;


void valoraleatorio();
void resposta_A();
void dificuldade_adicao();
void marisco_programa();
void user_erro();
void menu_voltar();

void config() {

    setlocale(LC_ALL,"");


    #ifdef _WIN32
        system("title MARISCO - Pr�tica de Matem�tica");
    #else
        cout << "\033]0;MARISCO - Pr�tica de Matem�tica\007";
    #endif



    unsigned seed = time(0);
    srand(seed);

}

void limparTela() {
        #ifdef _WIN32
            system("CLS");
        #else
            system("clear");
        #endif
}

void pausa() {
    #ifdef _WIN32
        system("pause");
    #else
        cout << "pressione qualquer tecla para continuar...";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    #endif
}

void intro() {
cout << "\n";
    cout << "************************************";
    cout << "\n" << "**************" << "Marisco" << "***************" << "\n";
    cout << "************************************";
cout << "\n";
    cout << ">>>>>>>>>>>>>" << "    ADI��O  " << "<<<<<<<<<<<<<<";
cout << "\n";
}



int main() {
    config();

    limparTela();
    intro();
    dificuldade_adicao();

    return 0;
}



void valoraleatorio() {

    val_1 = 20 + rand()%tamanho_dificuldade;
    val_2 = 4 + rand()%tamanho_dificuldade;
    val_3 = 45 + rand()%tamanho_dificuldade;
    val_4 = 100 + rand()%tamanho_dificuldade;

}

void resposta() {
    while (true) {
        entrada = 0;
        cin >> entrada;


        if (cin.fail()) {
            cout << "Entrada inv�lida! Por favor, digite apenas n�meros.\n";
            pausa();
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            menu_voltar();

        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
}


void dificuldade_adicao(){
cout << endl << endl;
    cout << "Escolha uma dificuldade: " << endl;
cout << endl << "+++++++++++++++++++++++++" << endl;
    cout << "       " << "(1)" << "f�cil" << endl;
    cout << "       " << "(2)"<< "m�dio" << endl;
    cout << "       " << "(3)"<< "dif�cil";
cout << endl << "+++++++++++++++++++++++++" << endl;

cout << endl << endl;
          cout << "[DICA:]Voc� pode digitar uma letra (exemplo: a, b, c, etc.) para ter a op��o de voltar ou n�o para esse menu de escolha";
cout << endl << endl << "digite o n�mero para escolher uma dificuldade (de 1 at� 3): ";
    dificuldade = 0;

    resposta();
while (true){
switch(entrada){
    case 1:
        cout << "f�cil";
        dificuldade = 1;
        tamanho_dificuldade = 144;
        marisco_programa();
        return;
    case 2:
        cout << "m�dio";
        dificuldade = 2;
        tamanho_dificuldade = 888;
        marisco_programa();

    return;
    case 3:
        cout << "dif�cil";
        dificuldade = 3;
        tamanho_dificuldade = 99999;
        marisco_programa();
    return;

    default:
        cout << "Por favor, digite apenas um n�mero de 1 a 3 para escolher a dificuldade." << endl;

        pausa();
        limparTela();
        intro();
  }
 }
}
void user_erro(){

    if(dificuldade == 1){
        cout << endl << val_1 << "+" << val_2 << " � igual(=) a: " << val_z << endl;
    } else if (dificuldade == 2){
        cout << endl << val_1 << " + " << val_2 << " + " << val_3 << " � igual(=) a: " << val_z << endl;
    } else {
        cout << endl << val_1 << " + " << val_2<< " + " << val_3 << " + " << val_4 << " � igual(=) a: " << val_z << endl;
    }

        cout << endl << "Resposta errada :(" << endl;
        cout << endl << "   N�O DESISTA!!!!   " << endl;
        pausa();
        limparTela();

}

void menu_voltar(){
    cout << "Deseja voltar ao menu de dificuldade? digite 1(SIM [voltar para o menu de dificuldade]) ou 2(N�O[Continuar onde est�]): ";

            resposta();
            if(entrada == 1){
                limparTela();
                sair = false;
                intro();
                dificuldade_adicao();
            } else if (entrada == 2){
                    if (dificuldade == 0){
                        limparTela();
                        intro();
                        dificuldade_adicao();
                    } else {
                        limparTela();
                        marisco_programa();
                    }
            } else {
                  limparTela();
                cout << "Resposta inv�lida! Mandando para o menu de dificuldade." << endl;
                  pausa();
                  limparTela();
                  intro();
                  dificuldade_adicao();
            }


}

void marisco_programa(){
    sair = true;
    limparTela();

    while(sair){

        limparTela();
        valoraleatorio();

        cout << endl << "           " << "      ADI��O     " << "           " << endl;

    switch(dificuldade){

        case 1:

                cout << val_1 << " + "  << val_2;
            val_z = val_1 + val_2;
                cout << endl << "Resposta: ";
                resposta();
                if(entrada == val_z){
                    continue;
                }else{
                    user_erro();
                  }
            break;

        case 2:

                cout << val_1 << " + "  << val_2 <<  " + " << val_3;
            val_z = val_1 + val_2 + val_3;
                cout << endl << "Resposta: ";
                resposta();


                 if(entrada == val_z){
                    continue;
                 }else{
                user_erro();
                }


            break;

        case 3:

                cout << val_1 <<  " + "  << val_2 << " + "  << val_3 << " + "  << val_4;
            val_z = val_1 + val_2 + val_3 + val_4;
                cout << endl << "Resposta: ";
                resposta();


                if(entrada == val_z){
                    continue;
                }else{
                user_erro();
                     }
            break;

        default:
            cout << "Ocorreu um erro, redirecionando para o menu de escolha de dificuldade mais uma vez";
            pausa();
            limparTela();
            intro();
    }
  }
}
