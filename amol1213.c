#include<stdio.h>

union Data{

	int intValue;
	float floatValue;
	char charValue;
};

int main(){
 union Data data;
    
	data.intValue=10;     
	printf("integer value:%d\n",data.inalue);
		
	data.charValue=220.5;
	printf("float value:%.2f\n",data.floatValue);
	
	
	data.charValue='A';
	printf("character value:%c\n",data.charValue);
		
	return 0;
}
