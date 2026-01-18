#include <stdio.h>

// Function to calculate simple interest
int calculateSimpleInterest( int p,int t,int r       ) {
	int SI;
	SI=p * t * r / 100;
	return(SI);
	// Complete the function
	
}

int main() {
	int principal, time, rate, simpleInterest;
scanf("%d%d%d", &principal,&time,&rate);
    // Read the number of principal, time, and rate from the user
    
    
    
	// Calculate the simple interest
	simpleInterest = calculateSimpleInterest(principal, time, rate);
	
	// Print the result
	printf("%d\n", simpleInterest);
	
	return 0;
}
