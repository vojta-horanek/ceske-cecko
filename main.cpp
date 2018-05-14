#include <stdio.h>
#define ano true
#define ne false
#define cisilko int
#define pravdicka bool
#define pismenko char
#define pokud if
#define jinak else
#define vrat return
#define dokud while
#define vytiskni printf
#define hlavni_funkce main
#define rovna_se ==
#define nerovna_se !=
#define je =
#define nula 0
#define nulovy_znak '\0'
#define plus_jedna ++
#define ukazatel *
#define slozena_zavorka_doleva {
#define slozena_zavorka_doprava }
#define strednik ;
#define zavorka_vlevo (
#define zavorka_vpravo )
#define hranata_zavorka_doleva [
#define hranata_zavorka_doprava ]
#define carka ,


pravdicka porovnej zavorka_vlevo pismenko ukazatel xs1 carka pismenko ukazatel xs2 zavorka_vpravo slozena_zavorka_doleva
	cisilko x je nula strednik
	dokud zavorka_vlevo xs1 hranata_zavorka_doleva x hranata_zavorka_doprava nerovna_se nulovy_znak zavorka_vpravo slozena_zavorka_doleva
		pokud  zavorka_vlevo xs1 hranata_zavorka_doleva x hranata_zavorka_doprava nerovna_se xs2 hranata_zavorka_doleva x hranata_zavorka_doprava zavorka_vpravo slozena_zavorka_doleva
			vrat ne strednik
		slozena_zavorka_doprava
		x plus_jedna strednik
	slozena_zavorka_doprava
	vrat ano strednik
slozena_zavorka_doprava
cisilko hlavni_funkce zavorka_vlevo zavorka_vpravo slozena_zavorka_doleva
	pismenko ukazatel xs1 je "Tesst" strednik
	pismenko ukazatel xs2 je "Test" strednik

	pokud zavorka_vlevo porovnej zavorka_vlevo xs1 carka xs2 zavorka_vpravo zavorka_vpravo slozena_zavorka_doleva
		vytiskni zavorka_vlevo "jsou stejne \n" zavorka_vpravo strednik
	slozena_zavorka_doprava
	jinak slozena_zavorka_doleva
		vytiskni zavorka_vlevo "jsou rozdilne \n" zavorka_vpravo strednik
	slozena_zavorka_doprava
slozena_zavorka_doprava
