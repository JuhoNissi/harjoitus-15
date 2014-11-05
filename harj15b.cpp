/*************************************
*Teht�v�: Harjoitus 15b (Palautus vko 45)
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
	char jono1[18];
	char jono2[18];
	int i;

	cout << "\nkirjoita 17 merkkia pitka jono " << endl;
	cin >> jono1;
	for (i = 16; i >= 0; i--){
		jono2[16 - i] = jono1[i];
	}
	jono2[17] = 0;
	cout << jono2;
}