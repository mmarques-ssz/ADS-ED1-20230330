#include <iostream>
#include <locale.h>
using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

void cria_data(data *d, int dia, int mes, int ano)
{
	d->dia = dia;
	d->mes = mes;
	d->ano = ano;
}

// Passagem de parâmetro por referência - endereço
void mostra_data_ref(data &d)
{
    cout << "Hoje é " << d.dia << "/" 
	                  << d.mes << "/"
					  << d.ano << endl; 
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	cria_data(&hoje, 30, 3, 2023);
	mostra_data_ref(hoje);
    return 0;
}