using namespace std;

class buku{
	public:
		void input();
		void proses ();
		void output ();
  private:
		int data[24]; 
		int bil[4][6];
		int x,y,temp;
};

void buku :: input(){
    cout << "==================================" << endl;
  	cout << "| MENGURUTKAN NOMOR BUKUNYA ANDI |" << endl;
  	cout << "==================================" << endl;
    cout << "Kelompok STORMI :" << endl; 
    cout << "1. Krisna Cakra NIngrat (449) \n2. Anela Indra (454) \n3. Sasqia Aulia Nur Aini (456)\n" << endl;
    for(int i=0; i<24; i++){
      cout << "Nomor buku ke-" << i+1 << " = " ; 
      cin >> data[i]; 
    }
	cout << "\nTampilan data : ";
	for(int i=0; i<24; i++){
		cout << data[i] << " ";
	}
    cout << endl;
  }