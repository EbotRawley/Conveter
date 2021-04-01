


/*
					     __This_code_was_created_by_Rawley__
                   __So_give_me_the_credits_when_copying__
*/


#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int dec;
	int temp;
	int bin[100];
	int oct[100];
	char hex[100];
	int a = 0;
	int b = 0;
	int c = 0;
	int opt1, opt2;
	double cel, kev;
	int back;
	
	menu:
	system("CLS");
	cout <<"				W E L C O M E   T O   C O N V E R T E R "<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"		Select an input to convert :"<<endl;
	cout << endl;
	cout <<"		1) Dec to other"<<endl;
	cout <<"		2) Bin to other"<<endl;
	cout <<"		3) Celcius to Kelvin "<<endl;
	cout <<"		4) Kelvin to Celcius  "<<endl;
	cout << endl;
	cout<<"\t\t";
	cin >> opt1;
	
	switch(opt1){
		
	case 1:{
	system("CLS");
	cout<<endl;
	cout<<endl;
	cout << "\tEnter a Decimal number : ";
	cin >> dec;
	temp = dec;
	
	
	if(dec == 0){
		cout<<"\tDecimal : 0";
		cout<<endl;
		cout<<"\tBinary : 0";
		cout<<endl;
	}
	else{
	while (dec){
		bin [a] = dec % 2;
		dec = dec / 2;
		a++;
	}
	dec = temp;

	}
	a -= 1;
	cout <<"\tDecimal : "<<temp<<endl;
	cout <<"\tBinary : ";
	while(a >=0 ){
		cout << bin[a];
		a--;
	}
	
  cout<<endl<<"\tPress 0 to go back or any key to exit...		";
  cin >> back;
  if(back == 0){
  	goto menu;
  }
  else{
  	return 0;
  }
	return 0;
  
  break;
} // end of dec to other

case 2:{
	int bin, r, n=0, dec=0, temp;
	system("CLS");
	cout<<endl;
	cout<<"	Enter a binary number : ";
	cin >> bin;
	temp = bin;
	
	while (bin!=0){
		r = bin % 10;
		bin = bin/10;
		dec += r * pow(2, n);
		n++;
	}
	cout << endl;
	cout <<"\tBinary :"<<temp;
	cout << endl;
	cout <<"\tDecimal : "<<dec;
	
  cout<<endl<<"\tPress 0 to go back or any key to exit...		";
  cin >> back;
  if(back == 0){
  	goto menu;
  }
  else{
  	return 0;
  }
	
	break;
}

case 3:{	
	system("CLS");
	cout<<endl;
	cout<<"\tEnter temperature in celcius : ";
	cin >> cel;
	temp = cel;
	kev = cel + 273.15;
	cout<<endl;
	cout <<"\tCelcius : " << temp << " *C";
	cout << endl;
	cout <<"\tKelvin : " << kev << " K";
	
  	cout << endl <<"\tPress 0 to go back or any key to exit...		";
  	cin >> back;
 	 if(back == 0){
  	goto menu;
  }
  else{
  	return 0;
  }
	
	break;
}
case 4:{
	system("CLS");
	cout << endl;
	cout<<"\tEnter temperature in Kelvin : ";
	cin >> kev;
	temp = kev;
	cel = kev - 273.15;
	cout<<endl;
	cout <<"\tKelvins : " << temp;
	cout << endl;
	cout <<"\tCelcius : " << cel;
	
	cout<<endl<<"\tPress 0 to go back or any key to exit...		";
    cin >> back;
    if(back == 0){
  	goto menu;
  }
  else{
  	return 0;
  }
	
	break;
}
	
	
	break;
}
  return 0;
}



