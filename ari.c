#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string ari(string s){
  int num_char=0;
  int num_words=0;
  int num_sen=0;
 for(int i=0;i<strlen(s);i++) 
 {
 if(isalnum(s[i])) 
   num_char++;
   else if(s[i]==' ') 
   num_words++;
    else if(s[i]=='.' || s[i]=='?' || s[i]=='!') 
    num_sen++;
}
   float a=(float)num_char/num_words;
   float b=(float)num_words/num_sen;
   int x=(4.71*a)+(0.5*b)-21.43;
 switch(x+1){
        case 1: return "kindergarten";
	case 2: return "First/Second Grade";
	case 3: return "Third Grade";
	case 4: return "Fourth Grade";
	case 5: return "Fifth Grade";
	case 6: return "Sixth Grade";
	case 7: return "Seventh Grade";
	case 8: return "Eigth Grade";
	case 9: return "Ninth Grade";
	case 10: return "Tenth Grade";
	case 11: return "Eleventh Grade";
	case 12: return "Twelfth Grade";
	case 13: return "College Grade";
	case 14: return "Professor";
}
return 0;
}
