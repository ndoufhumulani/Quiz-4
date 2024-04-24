#include <iostream>

using namespace std;

int main(){
	
	int choice;
	int numb1;
	int numb2;
	int results;
	char choose;
	
	do{
		cout<<"============================================================" <<endl;
		cout<<"MENU"<<endl;
		cout<<"============================================================"<<endl;
		cout<<"1. Add"<<endl;
		cout<<"2. Substract"<<endl;
		cout<<"3. Multiply"<<endl;
		cout<<"4. Divide"<<endl;
		cout<<"5. Modulus"<<endl;
		cout<<"============================================================"<<endl;
		cout<<"Enter your choice (1-5): "<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:
			cout<<"Enter integar number 1: ";
			cin>>numb1;
			cout <<"Enter integar number 2: ";
			cin>>numb2;
		
	    	results = numb1 + numb2;
	    	cout<<"Results: "<<results<<endl;
	    	break;
		
		case 2:
				cout<<"Enter integar number 1: ";
			cin>>numb1;
			cout <<"Enter integar number 2: ";
			cin>>numb2;
		
	    	results = numb1 - numb2;
	    	cout<<"Results: "<<results<<endl;
	    	break;
			
		case 3:
				cout<<"Enter integar number 1: ";
			cin>>numb1;
			cout <<"Enter integar number 2: ";
			cin>>numb2;
		
		    results = numb1 * numb2;
		    cout<<"Results: "<<results<<endl;
	    	break;
	    	
	    case 4:
	    		cout<<"Enter integar number 1: ";
			cin>>numb1;
			cout <<"Enter integar number 2: ";
			cin>>numb2;
		    if(numb2 == 0) {
		    cout<<"The second integar is zero, divide by zero"<<endl;
			break;	
			} 
			else{
				results = numb1 / numb2;
	    	cout<<"Results: "<<results<<endl;
	    	break;
			}
	    	
		
		case 5:
			cout<<"Enter integar number 1: ";
			cin>>numb1;
			cout <<"Enter integar number 2: ";
			cin>>numb2;
		
	    	results = numb1 % numb2;
	    	cout<<"Results: "<<results<<endl;
	    	break;
			
		}
		cout<<"Press y or Y to continue: ";
		cin>> choose;
	}while(choose=='y' || choose=='Y' );
		return 0;
} 

