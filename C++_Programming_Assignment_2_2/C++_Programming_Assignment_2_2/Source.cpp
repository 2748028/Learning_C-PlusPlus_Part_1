//Dean Orchard. 100589745
//October 29th, 2015.
//This function is used to find a Member function "getName" that returns the name of the Person capitalizing only the beginning of every word in the name.
string Person::getName() 
{
string d = name; //Creates a temporary string variable to hold our subject name.

	for (int a = 0; a < d.size(); a++) { //Forcefully changes all the characters to lowercase in the "n" variable.
		d[a] = tolower(d[a]);
	}

	d[0] = toupper(d[0]); //Sets the first character in the provided string with its uppercase counterpart.

	for (int a = 1; a < d.size() - 1; a++) //Detects whether the current character is whitespace. If so it replaces the following character with its uppercase counterpart.
	{ 
		if (d[a] == ' ') //Detects possible whitespace.
		{ 
			d[a + 1] = toupper(d[a + 1]);
	}
}

	return d; //Returns the computed name.
}

ostream& operator <<(ostream& outputStream, const Person& yrandnm) //Prints to screen the output with correct syntax.
{ 
	string NM = yrandnm.name;
		outputStream << NM << " was born in ";

	int YR = yrandnm.yearOfBirth;
		outputStream << YR << "./n";

	return outputStream;
}