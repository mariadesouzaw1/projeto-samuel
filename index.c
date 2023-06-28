#include <iostream>
#include <string>
#include <cstdio>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct Noticia
{
    string title;
    string category;
    string text;
};

Noticia getNoticia()
{
    Noticia qual_not;
    
    cout << "\nInformações:" << endl;
    cout << "Insira o título: " << endl << "--->";
    cin.ignore();
    getline(cin, qual_not.title);
    cout << "Insira a categoria: " << endl << "--->";
    cin.ignore();
    getline(cin, qual_not.category);
    cout << "Insira a notícia: " << endl << "--->";
    cin.ignore();
    getline(cin, qual_not.text);
    
    cout << "Ok! Notícia adicionada!" << endl;
    
    return qual_not;
}

void showNoticia(Noticia noticia)
{
    cout << endl << "Título: ";
    cout << noticia.title;
    cout << endl << "Categoria: ";
    cout << noticia.category;
    cout << endl << "Texto: " << endl;
    cout << noticia.text;
    cout << endl << "---------------------" << endl;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
    Noticia noticia1, noticia2, noticia3, noticia4, noticia5;
    int fazer123;
    char fazer_cont='s';
    
restart:
    cout << "*Seja Bem-vindo ao Noticiário CarlinaNews*" << endl;
reinicio:
while(fazer_cont=='s'){
    cout << "Insira o que você deseja fazer:" << endl << "1 - Escrever uma notícia" << endl << "2 - Ver notícias" << endl << "3 - Sair do noticiário" << endl << "---> ";
    cin >> fazer123;

    switch (fazer123)
    {
        case 1:
            if (noticia1.title.empty())
                noticia1 = getNoticia();
            else if (noticia2.title.empty())
                noticia2 = getNoticia();
            else if (noticia3.title.empty())
                noticia3 = getNoticia();
            else if (noticia4.title.empty())
                noticia4 = getNoticia();
            else if (noticia5.title.empty())
                noticia5 = getNoticia();
            else
                cout << "Todas as notícias já foram preenchidas!" << endl;
            break;

        case 2:
        
        
            if (!noticia1.title.empty()){
                cout << "------Notícia 1------";
                showNoticia(noticia1);
            }
            if (!noticia2.title.empty()){
                cout << "------Notícia 2------";
                showNoticia(noticia2);
            }
            if (!noticia3.title.empty()){
                cout << "------Notícia 3------";
                showNoticia(noticia3);
            }
            if (!noticia4.title.empty()){
                cout << "------Notícia 4------";
                showNoticia(noticia4);
            }
            if (!noticia5.title.empty()){
                cout << "------Notícia 5------";
                showNoticia(noticia5);
            }
        if (noticia1.title.empty()){
            cout << "Nenhuma notícia escrita!" << endl;
        }
            break;

        case 3:
            cout << "Até logo! Se desejar voltar, digite 4." << endl;
            cin >> fazer123;
            
            if (fazer123 == 4){
                break;
            }else{
                cout << "Blz, paunocu.";
            }

        default:
            cout << "Opção inválida!" << endl;
            fazer123 = 4;
    }
    cout << endl << "Deseja voltar ao menu inicial? (s - Sim)(n - Não)" << endl << "---> ";
    cin >> fazer_cont;
}
    cout << "blz ent, os de vdd sei quem são.";
    system("pause");
    return 0;
}