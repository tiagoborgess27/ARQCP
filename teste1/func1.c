int low_pressure(unsigned int *x){
	if (*x < 0xFE){
		return 1;
	}else{
		return 0;
	}
}
