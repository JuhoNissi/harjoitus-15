/*************************************
*Teht�v�: Harjoitus 15c (Palautus vko 45)
*Tekij�: Juho Nissi
*
*T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!
*
*Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
*pitk�n merkkijonon (ei v�lily�ntej�).
*a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
*(tulostus tyyppi� "cout << mjono1[4];" jne)
*b) Ohjelma k��nt�� annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen n�yt�lle
*(tulostus tyyppi� "cout << mjono2;")
*c) merkkijono voi olla kuinka pitk�
*tahansa (max 100 kirjainta).
*Sy�tetyn merkkijonon pituutta ei saa
*laskea mill��n kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen k�ytt�j�lle.
*V�lily�nnit jonossa ovat sallittuja.
*
*K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
*ohjelma tulostaa: eelevak_assiK_CBA
*Versio 1.0
*P�iv�m��r�: 5.11.2014
*************************************/

#include <iostream>
using namespace std;
int main()
{
	char jono1[100 + 1];
	char jono2[100 + 1];
	char jono3[100 + 1];
	int i, j, mpituus;

	cout << "Syota max. 100 merkkia: ";
	cin.getline(jono1,100);
	
	for (i = 0; jono1[i] != '\0'; i++);
	mpituus = i;
	
	for (i = 0, j = 0; i < mpituus; i++)
	{
		if (jono1[i] != ' '){
			jono3[j] = jono1[i];
			if (isupper(jono3[j]))
				jono3[j] += ('a' - 'A');
			j++;
		}
	}
	jono3[j] = '\0';
	mpituus = j;
	cout << "Tiivistetty: " << jono3 << endl;

	for (i = 0, j = mpituus - 1; j >= 0; i++, j--){
		jono2[i] = jono3[j];
	}
	jono2[i] = '\0';
	cout << jono2 << " " << "Pituus: " << mpituus << endl;
	if (!strcmp(jono3, jono2))
		cout << "On PALINDROMI\n";
	else
	cout << "Ei ole PALINDROMI\n";
	
}