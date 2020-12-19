//program hitung luas dan keliling bangun datar

#include  <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int pil1;
	int pil2;
	int pil3;
	float phi;
	float r;
	float a;
	float b;
	float c;
	float d;
	float e;
	string ussername;
	string password;
	
	
	//    =============Header program===============
	cout<<"\t\t  Selamat Datang Di Program Kami ^_^\n"
	    <<"\t \t     Design by Rizky Adi Ryanto\n"
	    <<"\t\t======================================\n\n\n";
	
	cout<<"Masukan Ussername :";
	cin>>ussername;
	
	cout<<"Masukan Password :";
	cin>>password;
	
	// --if password--
    if (password=="1359")
   {
	
	
	//       opsi menu
	    cout<<"\n";
		cout<<"Opsi Menu"<<endl;
    	cout<<"1.Luas "<<endl;
	    cout<<"2.Keliling"<<endl;
	    cout<<endl;
        
	
	
        cout<<"Masukan Menu :";
        cin>>pil1;
    
    /* penggunaan switch,case dan break serta switch case di dalam switch case*/
    
    /* ---------------------Switch ke-1-------------*/
    switch (pil1)
    {
    	case 1 :
    		cout<<"Opsi Menu :"<<endl;
    		cout<<"1.Luas Persegi Panjang"<<endl;
    		cout<<"2.Luas Persegi"<<endl;
    		cout<<"3.Luas Lingkaran"<<endl;
    		cout<<"4.Luas Bujur Sangkar"<<endl;
    		cout<<endl;
    		
    		cout<<"Masukan Pilihan Menu :";
    		cin>>pil2;
    		
    		
    		/* --------------Switch ke-2-------------*/
    		switch(pil2)
			{
				case 1 :
			
    			    cout<<"Masukan Panjang :";
    			    cin>>a;
    			    cout<<"\nMasukan Lebar :";
				    cin>>b;
				
				    // Rumus Luas Persegi Panjang
				    c = a * b ;
				    cout<<"\nLuas Persegi Panjang Adalah :"<<c<<endl;
				
				break; 
		
			   case 2 :
			   	
				    cout<<"\nMasukan panjang sisi :";
    			    cin>>d;
				
				    // Rumus Luas Persegi
				    c = d * d ;
				    cout<<"\nLuas Persegi  Adalah :"<<c<<endl;
				
				break;
				
				case 3 :
					
					cout<<"\nMasukan Jari-jari Lingkaran :";
					cin>>r;
					cout<<"Masukan Nilai Phi :";
					cin>>phi;
					
				     // Rumus Luas Lingkaran	
					c = phi*r*r;
					cout<<"\nLuas Lingkaran Adalah :"<<c<<endl;
					
				break;
				
				case 4 :
					
					cout<<"\nMasukan Sisi Bujur Sangkar :";
					cin>>d;
					
				    // Rumus Luas Bujur Sangkar
					c = d * d;
					cout<<"\nLuas Bujur Sangkar adalah :"<<c<<endl;
					
				break;
		
		
		        default :
			    cout<<"Salah Memasukan Pilihan"<<endl;
			    
			    break;
		    }
		        
		        break;
		
		case 2 :
		    
		    cout<<"Opsi Menu :"<<endl;
		    cout<<"1.Keliling Persegi Panjang"<<endl;
		    cout<<"2.Keliling Persegi"<<endl;
		    cout<<"3.Keliling Lingkaran"<<endl;
		    cout<<"4.Keliling Bujur Sangkar"<<endl;
		    
		    cout<<"Masukan Pilihan Menu :";
		    cin>>pil3;
		    
			
			/*------------switch Ke-3----------------*/
			switch (pil3)
			{
			
			    case 1 :
				
				    cout<<"\nMasukan Panjang :";
    			    cin>>a;
    			    cout<<"\nMasukan Lebar :";
				    cin>>b;
				
				    // Rumus Persegi Panjang
				    e = 2 + (a * b );
				    cout<<"\nKeliling Persegi Panjang Adalah :"<<e<<endl;
				
				break;   
				
				case 2 :
					
				    cout<<"Masukan panjang sisi:";
				    cin>>d;
				    
				    // Rumus Keliling Persegi
					e = 4*d ;
				    cout<<"\nKeliling Persegi  Adalah :"<<e<<endl;
				
				break;
				
				case 3 :
					
					cout<<"\nMasukan Jari-jari Lingkaran :";
					cin>>r;
					cout<<"Masukan Nilai Phi :";
					cin>>phi;
					
				    // Rumus Keliling Lingkaran	
					e = 2*phi*r;
					cout<<"\nKeliling Lingkaran Adalah :"<<e<<endl;
					
				break;
				
				case 4 :
					
					cout<<"\nMasukan Sisi Bujur Sangkar :";
					cin>>d;
					
				    // Rumus Keliling Bujur Sangkar
					e = 4 * d;
					cout<<"\Keliling Bujur Sangkar adalah :"<<e<<endl;
					
				break;
				
				
				default :
			    cout<<"Salah Memasukan Pilihan"<<endl;
			
		         break;	
		    }
			
		        break;
	
	  
    }
   
   
}        /* --else Password-- */ else{
	
	        cout<<"\nPassword Yang Anda Masukan Salah"<<endl;
}
	

getch(); //penggunaan getch ataupun getche harus dengan fungsi conio.h.	
return 0;
}
