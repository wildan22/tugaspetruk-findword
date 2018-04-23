#include <iostream>
#include <cstring>
using namespace std;


///FUNGSI CARI KATA
int findword(char *(input))
{
	int p_kata,cek,kata_ditemukan;
	kata_ditemukan=0;
	p_kata=strlen(input);					
	char puzzle[15][15]={ {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
						{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
						{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
						{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
						{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
						{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
						{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
						{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
						{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
						{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
						{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
						{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
						{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
						{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
						{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}
						};			
	for (int i=0;i<15;i++){
		for (int j=0;j<15;j++){
			if (input[0]==puzzle[i][j]){
				///HORIZONTAL KANAN ->
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i][j+k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
				///HORIZONTAL KIRI <-
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i][j-k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
								
				///VERTIKAL BAWAH V
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i+k][j]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
				///Vertikal ATAS ^
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i-k][j]){
						cek=k;
					}
					else{
						break;
					}
					
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
				///DIAGONAL KIRI ATAS ^
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i-k][j-k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
				///DIAGONAL KANAN ATAS ^
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i-k][j+k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
				///DIAGONAL KIRI BAWAH
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i+k][j-k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
				///DIAGONAL KANAN BAWAH
				for (int k=0;k<p_kata;k++){
					if (input[k]==puzzle[i+k][j+k]){
						cek=k;
					}
					else{
						break;
					}
				}
				if (cek==p_kata-1){
					kata_ditemukan+=1;
				}
				else{
					kata_ditemukan+=0;
				}
				cek=0;
				
			}
			
		}
	}
	
	if(kata_ditemukan>0){
		cout<<"ADA"<<endl;
	}
	else {
		cout<<"TIDAK ADA"<<endl;
	} 	
}


////PROGRAM INTI
int main()
{
	int p_kata,cek,kata_ditemukan,batas;
	cout<<"Batas : ";
	cin>>batas;
	char puzzle[15][15]={ {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
						{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
						{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
						{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
						{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
						{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
						{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
						{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
						{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
						{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
						{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
						{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
						{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
						{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
						{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}
						};
	for(int i=0;i<15;i++){
		for (int j=0;j<15;j++){
			cout<<puzzle[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	char input[batas][15];
	

	
	//Input N Kata
	for (int i=0;i<batas;i++){
		cin>>input[i];
		}
}
