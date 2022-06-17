void buku :: proses(){
	for(x=0; x<23; x++){//mengurutkan
		for(y=x+1; y<24; y++){
			if(data[x]>data[y]){
				temp = data[x];
				data[x] = data[y];
				data[y] = temp;
			}
		}
	}

	int i = 0;
	while(i<20){
		for(x=0; x<4; x++){
			for(y=0; y<6; y++){
				bil[x][y] = data[i];
				i++;
			}
		}
	}  
}