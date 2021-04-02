//Stuart McCutchen
//Tyler Sheetz

main()
{
	
	//variables
	int score;
	int nextinput;
	double responsetime; 
	bool fail;
	double timedivider;
	double currenttime;
	bool loop;
	
	//base time interval
	time = 3 seconds; 
	
	//gameplay loop
	while(1)
	{
	
		//while loop waiting for start button
		while(startbutton ==0)
		{
		}
		redled() off;
		
		//loop that runs while the player has not failed an input
		while(fail ==0)
		{
			
			blueled() on;
			
			//function to choose which input
			nextinput = rand(0,4);
			
			//if the next input is option 0 (flick it)
			if(nextinput == 0)
			{	
				loop =0;
				
				//this function checks the current time when the input is chosen so that we know when to make the user fail due to time
				currenttime = millis();
				
				//output the tone for input 0
				outputsound()0;
				
				//input loop
				while(loop ==0)
				{
			
					//if statement for if the input is complete
					if (input0 = 1)
					{
						
						score = score+1;
						if (score <20);
						{
							timedivider=timedivider+.1;
						}
						time = time/timedivider; 
						loop =1;
						nextinput = rand(0,4);
						greenled() on;
						delay();
						greenled() off;
						
					}
					
					//if statement for if the statement is not complete
					else if(millis() = currenttime+responsetime)
					{
						redled() on;
						fail =1;
						loop =1;
					}
				}
			}
			
			//if the next input is option 1 (twist it)
			if(nextinput == 1)
			{	
				loop =0;
				currenttime = millis();
				outputsound()1;
				while(loop ==0)
				{
			
					//if statement for if the input is complete
					if (input1 = 1)
					{
						
						score = score+1;
						
						//incrementing time if score is less than 20
						if (score <20);
						{
							timedivider=timedivider+.1;
						}
						
						//setting the new interval time
						time = time/timedivider; 
						loop =1;
						nextinput = rand(0,4);
						greenled() on;
						delay();
						greenled() off;
						
					}
					
					//if statement for if the statement is not complete
					else if(millis() = currenttime+responsetime)
					{
						redled() on;
						fail =1;
						loop =1;
					}
				}
			}
			
			//if the next input is option 2 (cover it)
			if(nextinput == 2)
			{	
				loop =0;
				currenttime = millis();
				outputsound()2;
				while(loop ==0)
				{
			
					//if statement for if the input is complete
					if (input2 = 1)
					{
						
						score = score+1;
						if (score <20);
						{
							timedivider=timedivider+.1;
						}
						time = time/timedivider; 
						loop =1;
						nextinput = rand(0,4);
						greenled() on;
						delay();
						greenled() off;
						
					}
					
					//if statement for if the statement is not complete
					else if(millis() = currenttime+responsetime)
					{
						redled() on;
						fail =1;
						loop =1;
					}
				}
			}
					
					
						
		//state where the program stays after failing
			while(startbutton ==0)
		{
		displayscore();
		}
			
		score=0;
		timedivider=base;
		fail=0;
		loop=0;
		blueled() off;
		redled() off;
			
			
		}
	}
}

