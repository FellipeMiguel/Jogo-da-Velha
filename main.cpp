#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string v[9], t[11];
    int cont = 1, pos, vencedor = 0, contagem[3], tc = 179;
    string play1, play2, jogar = "N";

    /*Criando tabuleiro*/
    for (int r = 0; r<11; r++){
        t[r] = tc;
        tc++;
        if(tc == 181) tc = 191;
        if(tc == 198) tc = 217;
    }

    /*Inicio do jogo*/
    while( jogar == "S" || jogar == "s" || jogar == "N" || jogar == "n"){
        if (jogar == "N" || jogar == "n"){
            for (int p = 0; p <3; p++){
                contagem[p] = 0;
            }

            cout << "==================================\n";
            cout << "==========JOGO DA VELHA===========\n";
            cout << "==================================\n";
            cout << "Digite o nome do primeiro jogador - X: ";
            cin >> play1;
            cout << "Digite o nome do  jogador - O: ";
            cin >> play2;
            system("cls");
            cout <<"\ntJOGO DA VELHA\n\n";
            cout <<play1 <<"Primeiro -X\n\n";
            cout <<play2 <<"Segundo -O\n\n";
            cout <<"O jogo da velha funciona com o teclado numérico \n\n";

            cout <<t[10]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
            cout <<t[0]<<" 7 "<<t[0]<<" 8 "<<t[0]<<" 9 "<<t[0]<<endl;
            cout <<t[6]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[1]<<endl;
            cout <<t[0]<<" 4 "<<t[0]<<" 5 "<<t[0]<<" 6 "<<t[0]<<endl;
            cout <<t[6]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[1]<<endl;
            cout <<t[0]<<" 1 "<<t[0]<<" 2 "<<t[0]<<" 3 "<<t[0]<<endl;
            cout <<t[3]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;
            system("PAUSE");
            cout << "Começar o jogo:\n\n";
            system("cls");
        }

        for(int i=0; i<9; i++){
            v[i] = " ";
        }

        /*Jogadas*/
        while (vencedor == 0){
            cont++;
            cout <<t[10]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
            cout <<t[0]<<"  "<<v[6]<<" "<<t[0]<<" "<<v[7]<<" "<<t[0]<<" "<<v[8]<<" "<<t[0]<<endl;
            cout <<t[6]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[1]<<endl;
            cout <<t[0]<<"  "<<v[3]<<" "<<t[0]<<" "<<v[4]<<" "<<t[0]<<" "<<v[5]<<" "<<t[0]<<endl;
            cout <<t[6]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[1]<<endl;
            cout <<t[0]<<"  "<<v[0]<<" "<<t[0]<<" "<<v[1]<<" "<<t[0]<<" "<<v[2]<<" "<<t[0]<<endl;
            cout <<t[3]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;

            /*Validando jogadas*/
            if(cont%2==0){
                cout<<"Vez de:"<<play1<<"\tDigite uma pocição:";
                cin>>pos;

                if(v[pos-1]=="X" || v[pos-1]=="O"){
                    cout<<"Já ocupado\t";
                    system("PAUSE");
                    cont--;
                }
                if(pos>9 || pos <=0){
                    cout<<"Não existe!\t";
                    system("PAUSE");
                    cont--;
                }
                else{
                    pos--;
                    v[pos] = "X";
                }
            }

            else{
                cout<<"Vez de:"<<play2<<"\tDigite uma pocição:";
                cin>>pos;

                if(v[pos-1]=="X" || v[pos-1]=="O"){
                    cout<<"Já ocupado\t";
                    system("PAUSE");
                    cont--;
                }
                if(pos>9 || pos <=0){
                    cout<<"Não existe!\t";
                    system("PAUSE");
                    cont--;
                }
                else{
                    pos--;
                    v[pos] = "O";
                }
            }

            system("cls");
            /*Validadção horizontal*/
            if(v[6]=="X" && v[7]=="X" && v[8]=="X") vencedor=1;
            if(v[3]=="X" && v[4]=="X" && v[5]=="X") vencedor=1;
            if(v[0]=="X" && v[1]=="X" && v[2]=="X") vencedor=1;
            if(v[6]=="O" && v[7]=="O" && v[8]=="O") vencedor=2;
            if(v[3]=="O" && v[4]=="O" && v[5]=="O") vencedor=2;
            if(v[0]=="O" && v[1]=="O" && v[2]=="X") vencedor=2;
            /*Validadção vertical*/
            if(v[0]=="X" && v[3]=="X" && v[6]=="X") vencedor=1;
            if(v[1]=="X" && v[4]=="X" && v[7]=="X") vencedor=1;
            if(v[2]=="X" && v[5]=="X" && v[8]=="X") vencedor=1;
            if(v[0]=="O" && v[3]=="O" && v[6]=="O") vencedor=2;
            if(v[1]=="O" && v[4]=="O" && v[7]=="O") vencedor=2;
            if(v[2]=="O" && v[5]=="O" && v[8]=="O") vencedor=2;
            /*Validadção diagonal*/
            if(v[6]=="X" && v[4]=="X" && v[2]=="X") vencedor=1;
            if(v[0]=="X" && v[4]=="X" && v[8]=="X") vencedor=1;
            if(v[6]=="O" && v[4]=="O" && v[2]=="O") vencedor=2;
            if(v[0]=="O" && v[4]=="O" && v[8]=="O") vencedor=2;

            if(v[0] != " " && v[1]!= " " && v[2]!= " " && v[3]!= " " && v[4]!= " " && v[5]!= " " && v[6]!= " "&& v[7]!= " " && v[8]!= " " && vencedor!=1 && vencedor!=2) vencedor = 3;
        }

        cout <<t[10]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[5]<<t[7]<<t[7]<<t[7]<<t[2]<<endl;
        cout <<t[0]<<" 7 "<<t[0]<<" 8 "<<t[0]<<" 9 "<<t[0]<<endl;
        cout <<t[6]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[1]<<endl;
        cout <<t[0]<<" 4 "<<t[0]<<" 5 "<<t[0]<<" 6 "<<t[0]<<endl;
        cout <<t[6]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[8]<<t[7]<<t[7]<<t[7]<<t[1]<<endl;
        cout <<t[0]<<" 1 "<<t[0]<<" 2 "<<t[0]<<" 3 "<<t[0]<<endl;
        cout <<t[3]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[4]<<t[7]<<t[7]<<t[7]<<t[9]<<endl;


        /*Definindo Vencedor*/
        if(vencedor==1){
            contagem[1]++;
            cout<<"\n\n\n"<<play1<<"Venceu!!!\n\n\n";
        }

        if(vencedor==2){
            contagem[2]++;
            cout<<"\n\n\n"<<play2<<"Venceu!!!\n\n\n";
        }
        if(vencedor==3){
            contagem[0]++;
            cout<<"\n\nEmpate!!!\n\n";
        }

        do{
            cout<<"Placar\n\n"<<play1<<"\t"<<contagem[1]<<"\n"<<play2<<"\t"<<contagem[2]<<"\n";
            cout<<"\n\n Sair (Q)\t Reiniciar o jogo? (S) ou (N)";
            cin>>jogar;
            system("cls");
        }while(jogar!="q" && jogar!="Q" && jogar!="N" && jogar!="S" && jogar!="n" && jogar!="s");
        system("cls");
        vencedor=0;
    }

    return 0;
}
