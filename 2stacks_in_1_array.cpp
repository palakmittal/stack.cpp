#include<iostream>
using namespace std;

class TwoStack{
	public:
	//properties
	int*arr;
	int top1;
	int top2;
	int size;
	
	//CONSTRUCTOR
	TwoStack(int size){
		this->size=size;
		arr= new int[size];
		top1=-1;
		top2=size;
	}
	
	//behaviours
	void push1(int num1){
	  if(top2-top1>1){
	  	top1++;
	  	arr[top1]=num1;
	  }else{
	  	cout<<"stack overflow"<<endl;
	  }
	}
	
	void push2(int num2){
	    if(top2-top1>1){
	    	top2--;
	    	arr[top2]=num2;
		}else{
			cout<<"stack overflow"<<endl;
		}
	}
	int pop1(){
	    if(top1>=0){
	    	int ans=arr[top1];
	    	top1--;
	    	return ans;
		}else{
			cout<<"no element cant' be deleted."<<endl;
			return -1;
		}
	}
	int pop2(){
	   if(top2<size){
	    	int ans=arr[top2];
	    	top2++;
	    	return ans;
		}else{
			cout<<"no element cant' be deleted."<<endl;
			return -1;
		}
	}	
	
};

int main(){
	
	TwoStack stk(6);
	
	stk.push1(10);
	stk.push2(20);
	stk.push1(30);
	
	cout<<stk.pop1()<<endl;
	cout<<stk.pop2()<<endl;
	cout<<stk.pop2()<<endl;
	
	
	return 0;
}
