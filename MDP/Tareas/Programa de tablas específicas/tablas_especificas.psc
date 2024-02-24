Algoritmo tablas_especificas
	t <- 10;
	
	Escribir ("Que tabla de multiplicar quieres ver? ");
	Leer tabla;
	Escribir "Tabla del ", tabla;
	
	Para i <- 1 Hasta t Hacer
		Escribir tabla, "x", i, "=", tabla*i;
	FinPara
	
FinAlgoritmo
