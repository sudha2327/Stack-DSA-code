#include<iostream>
#include<algorithm>
using namespace std;

class stack{
public:
	int st[200];
	int top;
	
	stack(){
		top=-1;
	}
	
	void push(int size){
		
		
		if(top==size){
			printf("\n overflow\n");
		}else{
			int d1;
			printf("\n enter the data for insertion\n");
			scanf("%d",&d1);
			top++;
            st[top]=d1;
		}
	}
	
	void pop(){
		if(top==-1){
			printf("\n overflow\n");
		}else{
				printf("poped data is :=> %d",st[top]);
			top--;
		
		}
	}
	
	
	void disp(){
		///int size=sizeof(st)/sizeof(st[0]);
		for(int i=top;i>=0;--i){
			cout<<"|"<<st[i]<<"|"<<"==>";
		}
	}
};



int main(){
	stack s;
	printf("enter the stack size\n");
	int n;
	cin>>n;
	cout<<"enter your choice....\n"<<endl;
		int c=0;
	do{
		cout<<"\n 1---->push() \n 2--->pop()\n 3--->display()\n"<<endl;
	
		cout<<"choose anyone of the number from menu:\n"<<endl;
		cin>>c;
		
		switch(c){
			case 1:
				s.push(n);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.disp();
				break;
			default:
				cout<<"happy code bro..mass pannuu!!!!!"<<endl;
				
		}
	}while(c<4);
	

	
	
}
