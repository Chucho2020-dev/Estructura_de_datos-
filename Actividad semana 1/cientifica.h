

float raiz(float *n1){
	return sqrt(*n1);	
}

float factorial(float *n1){
	float facto = 1;
	int i;
	for(i = 1; i <= (*n1); i++){
		facto = facto * i;
	}
	return facto;
}
