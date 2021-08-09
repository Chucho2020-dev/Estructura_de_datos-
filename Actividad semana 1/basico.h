struct numeros {
	float numero1;
	float numero2;
};

typedef struct numeros NUMEROS;

float suma(NUMEROS *numeros) {
	return (*numeros).numero1 + (*numeros).numero2;
}



float resta(NUMEROS *numeros) {
	return (*numeros).numero1 - (*numeros).numero2;
}



float multiplicacion(NUMEROS *numeros) {
	return ((*numeros).numero1)*((*numeros).numero2);
}



float division(NUMEROS *numeros) {
	return (*numeros).numero1/((*numeros).numero2);
}
