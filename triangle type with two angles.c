/*The code determines the type of triangle by its two angles*/

#include<stdio.h>

int main(){
	
	float first_angle;
	float second_angle;
	float third_angle;
	
	printf("Please enter two angles of triangle.\nThe first:");
	scanf("%f",&first_angle);
	printf("The second:");
	scanf("%f",&second_angle);
		
	third_angle=180-(first_angle+second_angle);
	
	if(first_angle>=180 || second_angle>=180 || third_angle>=180){
		printf("You entered the angle values incorrectly because an angle value can not bigger than 180.");
	}
	
	if(first_angle<=0 || second_angle<=0 || third_angle<=0){
		printf("You entered the angle values incorrectly because an angle value can not be negative or zero .");
	}
	
	else if(first_angle>90 || second_angle>90 || third_angle>90){
		printf("This triangle is obtuse triangle.");
	}
	else if(first_angle==90 || second_angle==90 || third_angle==90){
		printf("This triangle is right triangle.");
	}
	else{
		printf("This triangle is acute triangle.");
	}
	return 0;
	

}

