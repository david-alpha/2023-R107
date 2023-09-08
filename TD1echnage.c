ALGORITHME Echange
	DEBUT DEFINIR
	entier : a,b,echange
	FIN DEFINIR
	
	DEBUT
		afficher "Donner la valeur de a svp"
		lire a
		afficher "Donner la valeur de b svp"
		lire b
		afficher "valeur de a avant échange :", a
		afficher "valeur de b avant échange :", b
		echange <- a
		a <- b
		b <- echange
		afficher "valeur de a après échange :", a
		afficher "valeur de b après échange :", b
	FIN
STOP
	