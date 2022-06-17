void buku :: output(){
	cout << "Nomor buku setelah diurutkan : ";
	for (int i=0; i<24; i++){
		cout << data[i] << " ";
	}
	cout << "\nTampilan nomor buku pada rak : " << endl;
	for(int i=0; i<4; i++){
		for (int j=0; j<6; j++){
			cout <<"   |"<<bil[i][j];
		} 
		cout << endl;
	}
}