#ifndef IBU_H
#define IBU_H

class anak {
public:
	string nama;
	vector<anak*> daftar_anak;

	anak(string pNama) :nama(pNama) {
		cout << "Ibu" \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
 	}
	void tambahAnak(anak*);
	void cetakanak();

};
void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
void ibu::cetakanak() {
	cout << "Daftar anak dari ibu \"" << this->nama << "\";
}

