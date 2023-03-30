#include <iostream>
#include <locale.h>
using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

// Passagem de parâmetro por valor
void mostra_data_valor(data d)
{
    cout << "Hoje é " << d.dia << "/" 
	                  << d.mes << "/"
					  << d.ano << endl; 
}

// Passagem de parâmetro por referência - endereço
void mostra_data_ref(data &d)
{
    cout << "Hoje é " << d.dia << "/" 
	                  << d.mes << "/"
					  << d.ano << endl; 
}

// Passagem de parâmetro por referência - ponteiro
void mostra_data_ref(data *d)
{
    cout << "Hoje é " << d->dia << "/" 
	                  << d->mes << "/"
					  << d->ano << endl; 
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	hoje.dia = 30;
	hoje.mes = 3;
	hoje.ano = 2023;
	
	mostra_data_valor(hoje);
	mostra_data_ref(hoje);
	mostra_data_ref(&hoje);
	
	data amanha;
	amanha = hoje;
	amanha.dia++;
	mostra_data_ref(&amanha);
		
	return 0;
}