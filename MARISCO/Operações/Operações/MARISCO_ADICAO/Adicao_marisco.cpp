#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float resposta = 0, val_z = 0;
int dificuldade = 0, tamanho_dificuldade = 0;
int val_1, val_2, val_3, val_4 = 0;

auto intro = [] () {
cout << "\n";
    cout << "************************************";
    cout << "\n" << "**************" << "Marisco" << "***************" << "\n";
    cout << "************************************";
cout << "\n";
    cout << ">>>>>>>>>>>>>" << " DIVIS�O " << "<<<<<<<<<<<<<<";
cout << "\n";
};

void dificuldade_divisao(){

cout << endl << endl;

    cout << "Escolha uma dificuldade" << "\n";
cout << endl << "+++++++++++++++++++++++++" << endl;
    cout << "       " << "(1)" << "f�cil" << endl;
    cout << "       " << "(2)"<< "m�dio" << endl;
    cout << "       " << "(3)"<< "dif�cil";
cout << endl << "+++++++++++++++++++++++++" << endl;

cout << endl << endl;

cout << endl << "digite o n�mero para escolher a dificuldade (de 1 at� 3): "; cin >> resposta;

switch(resposta){
    case 1:
        cout << "f�cil";
        dificuldade = 1;
        tamanho_dificuldade = 31;
    break;
    case 2:
        cout << "m�dio";
        dificuldade = 2;
        tamanho_dificuldade = 51;
    break;
    case 3:
        cout << "dif�cil";
        dificuldade = 3;
        tamanho_dificuldade = 61;
    break;

    default:
        cout << "apenas valores de 1 at� 3" << endl;
            system("pause");
            system("CLS");
        intro();
        dificuldade_adicao();
}

}

int divisao(){
    system("CLS");

unsigned seed = time(0);
srand(seed);

    while(true){
        system("CLS");

        cout << endl << "           " << "      DIVIS�O     " << "           " << endl;

            val_1 = 20 + rand()%tamanho_dificuldade; val_2 = 2 + rand()%tamanho_dificuldade; val_3 = 2 + rand()%tamanho_dificuldade; val_4 = 2 + rand()%tamanho_dificuldade;

        if(dificuldade == 1){
            resposta = 0;
            cout << " " << val_1 << endl << "+" << val_2;

            val_z = val_1 + val_2;

                cout << endl << "Resposta: "; cin >> resposta;
                    if(resposta == val_z){
                        adicao();
                    }else{
                        cout << endl << "Resposta errada :(" << endl;
                        cout << endl << val_1 << "+" << val_2 << " � igual(=) a: " << val_z << endl;
                        cout << endl << "   N�O DESISTA!!!!   " << endl;

                        system("PAUSE");
                        system("CLS");
                     }
        }
        if(dificuldade == 2){
            resposta = 0;
            cout << " " << val_1 << endl << " " << val_2 << endl<< "+" << val_3;

            val_z = val_1 + val_2 + val_3;

                cout << endl << "Resposta: "; cin >> resposta;
                    if(resposta == val_z){
                        adicao();
                    }else{
                        cout << endl << "Resposta errada :(" << endl;
                        cout << endl << val_1 << " + " << val_2 << " + " << val_3 << " � igual(=) a: " << val_z << endl;
                        cout << endl << "   N�O DESISTA!!!!   " << endl;

                        system("PAUSE");
                        system("CLS");
                    }
        }
        if(dificuldade == 3){
             resposta = 0;
             cout << " " << val_1 << endl << " " << val_2 << endl << " " << val_3 << endl << "+" << val_4;

            val_z = val_1 + val_2 + val_3 + val_4;

                cout << endl << "Resposta: "; cin >> resposta;

                    if(resposta == val_z){
                        adicao();
                    }else{
                        cout << endl << "Resposta errada :(" << endl;
                        cout << endl << val_1 << " + " << val_2<< " + " << val_3 << " + " << val_4 << " � igual(=) a: " << val_z << endl;
                        cout << endl << "   N�O DESISTA!!!!   " << endl;

                        system("PAUSE");
                        system("CLS");
                     }
        }

    }

}

int main(){
setlocale(LC_ALL,"");

intro();
dificuldade_divisao();
divisao();



return 0;
}
