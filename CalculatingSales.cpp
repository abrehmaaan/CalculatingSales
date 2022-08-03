#include<iostream>
using namespace std;
int main(){
	double products[5] = {2.98, 4.50, 9.98, 4.49, 6.87};
	double total = 0;
	char ch;
	for(int i = 0; i < 5; i++){
		cout<<"Product "<<i+1<<": "<<products[i]<<"\t";
	}
	cout<<endl;
	do{
		int product, quantity;
		cout<<"Enter Product No: ";
		cin>>product;
		cout<<"Enter Quantity Sold: ";
		cin>>quantity;
		switch(product){
			case 1:
				total += products[0]*quantity;break;
			case 2:
				total += products[1]*quantity;break;
			case 3:
				total += products[2]*quantity;break;
			case 4:
				total += products[3]*quantity;break;
			case 5:
				total += products[4]*quantity;break;
			default:break;
		}
		cout<<"Do you want to purchase more items?[Y/N]: ";
		cin>>ch;
	}while(ch!='n'&&ch!='N');
	cout<<"Total Retail Price: "<<total<<endl;
	return 0;
}
