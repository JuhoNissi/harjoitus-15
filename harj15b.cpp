/*************************************
*Tehtävä: Harjoitus 15b (Palautus vko 45)
*Tekijä: Juho Nissi
*
*TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!
*
*Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
*pitkän merkkijonon (ei välilyäntejä).
*a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
*(tulostus tyyppiä "cout << mjono1[4];" jne)
*b) Ohjelma kääntää annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen näytälle
*(tulostus tyyppiä "cout << mjono2;")
*c) merkkijono voi olla kuinka pitkä
*tahansa (max 100 kirjainta).
*Syätetyn merkkijonon pituutta ei saa
*laskea millään kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen käyttäjälle.
*Välilyännit jonossa ovat sallittuja.
*
*Käyttäjä syättää jonon: ABC_Kissa_kavelee
*ohjelma tulostaa: eelevak_assiK_CBA
*Versio 1.0
*Päivämäärä: 5.11.2014
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