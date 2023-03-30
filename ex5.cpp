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
string gera_data(data *d)
{
    return to_string(d->dia) + "/" +
           to_string(d->mes) + "/" +
		   to_string(d->ano);	  
}

data dia_seguinte(data d)
{
	data d1;
	int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (d.ano%4==0)
	{
		diasNoMes[1]++;
	}
	d1 = d;
	d1.dia++;
	if(d1.dia > diasNoMes[d1.mes-1])
	{
		d1.dia = 1;
		if (++d1.mes > 12)
		{
			d1.mes = 1;
			d1.ano++;
		}
	}
	return d1;
}


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	data hoje;
	cria_data(&hoje, 30, 3, 2023);
	cout << "Hoje é " << gera_data(&hoje) << endl;
	
	data amanha;
	amanha = dia_seguinte(hoje);
	cout << "Amanhã será " << gera_data(&amanha) << endl;
	
    return 0;
}