// ShortestPathAlgorithm_Citys
/***********************************************************************************************************/
// Bu algoritma en kısa yolun verilecegini garanti etmemektedir. Bu daha cok bruteforce algoritmalardandır. 
// Daha gelismis algoritmlara git.hub/emrullaharseven'den ulasabilirsiniz.
/**********************************************************************************************************/
// Emrullah Arseven emrullaharseven@yandex.com

#include <iostream>

using namespace std;
int main()
{

	int city_piece;

	cout << " Grafda kac sehir var" << endl;
	cin >> city_piece;

	int** a = new int* [city_piece];
	for (int i = 0; i < city_piece; ++i)
		a[i] = new int[city_piece];
	
	for (int i = 0; i < city_piece; i++) {
		for (int j = 0 ; j < city_piece; j++) {
			cout << i+1 << " sehrinden  " << j+1 << "sehrine yol uzunlugunu giriniz" << endl;
			cin >> a[i][j];
		}
}

	cout << "En kisa yol hesaplaniyor." << endl; 
	int t = 0, p = 0, minumum = 9999, min_city1 = 0, min_city2 = 0;
	
	for (int i = 0; i < city_piece; i++) {
		t = 0;
		minumum = 9999;
		for (int j = min_city2; j < city_piece; j++) {
		
		if(a[i][j]!=0 ){
			t = a[i][j];
		}
		if (min_city2 > i) {
		
			continue;
		}
		
		if ((a[i][j] < minumum )&& ( a[i][j] != 0) && i<=j   )  {
			minumum = a[i][j];
			min_city1 = i;
			min_city2 = j;
		}
		
		
		}
		if (t == 0) {
			
			if (i +1 == city_piece) {
				cout << city_piece << "sehrine ulastiniz" << endl;
			}
			else {
				cout << i + 1 << "dugumunden yol yok" << endl;

				
			}
			break;
		}
			cout << min_city1 + 1 << "den " << min_city2 + 1 << 'e' << endl;


		if (i+1 == city_piece) {
			cout << city_piece << "sehrine ulastiniz" << endl;
	}
	
	
	}

}
