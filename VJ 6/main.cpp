#include <iostream>
#include "ZIVOTINJA.H"
#include "BROJAC.h"
#include "KUKAC.h"
#include "PAUK.h"
#include "PTICA.h"
#include "ZOHAR.h"
#include "TARANTULA.h"
#include "VRABAC.h"


int main()
{
	//Pauk p("crna udovica");
	//Kukac k("skakavac");
	//Ptica pt("sokol");
	Tarantula t("velika tarantula");
	Zohar z("crnin zohar");
	Vrabac v("sivi vrabac");
	Brojac br;
	br.add(&t);
	br.add(&z);
	br.add(&v);
	br.leg_count();
}