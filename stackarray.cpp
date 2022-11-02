#include<iostream>
#include<algorithm>
using namespace std;

int st[200],n,top=-1;
void push(int n){
	int v;
	if(top==n){
		printf("overflow\n");
	}else{
		cout<<"enter value to be inset\n";
		cin>>v;
		top+=1;
		st[top]=v;
		cout<<"value has inserted...\n"<<endl;
	}
	
}

void pop(){
	if(top==-1){
		printf("overflow...");
	}else{
		cout<<"poped item is:"<<st[top]<<endl;
     	top--;
	}
}

void dis(){
  for(int i=top;i>=0;--i){
  	
  	cout<<"|"<<st[i]<<"|"<<"===>";
  	
  }	
    cout<<"NULL"<<endl;
	if(top==-1){
		printf("overflow..\n");
	}	
}

int main(){
	cout<<"enter the no of stacj element:"<<endl;
	int n;
	cin>>n;
	int c=0;
	while(c!=4){
		printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
		cout<<"\n enter the choice :\n"<<endl;
		int c;
		cin>>c;
		
		switch(c){
			case 1:
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				dis();
				break;
			default:
				printf("nothis\\\n");
		}
		
	}

}
