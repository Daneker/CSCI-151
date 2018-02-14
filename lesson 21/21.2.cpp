#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

     double strToDouble(char str[]) { 
     int i, j=0; 
     double intValue, result = 0; 
     double k=0; 

    if (str[0]=='-') {
        i=1;
		} else {
      i=0;
	  } 
    for (; str[i] >= '0' && str[i] <= '9'; i++) { 
         intValue = str[i] - '0'; 
         result = result * 10 + intValue; 
} 
         if(str[i]=='.'){ 
           i++; 
               for (;str[i] >= '0' && str[i] <= '9'; i++) { 
                 j++; 
         intValue = str[i] - '0'; 
               result = result + intValue/pow(10,j); 
}} 

         if(str[i]=='e'){ 
          if(str[i+1]=='-'){ 
           i=i+2; 
        for (;str[i] >= '0' && str[i] <= '9'; i++) { 
          intValue = str[i] - '0'; 
             k= k * 10 + intValue; 

} 
          k=-k; 
    } else 
{ 
i++; 
    for (;str[i] >= '0' && str[i] <= '9'; i++) { 

       intValue = str[i] - '0'; 
          k = k * 10 + intValue; 

} 
} 
         result = result * pow(10,k);} 
          if(str[0]=='-') 
           return -result; 
             else 
           return result; 
} 
 int main() { 
     printf("%lf\n", strToDouble("123456")); 
     printf("%lf\n", strToDouble("-123.456")); 
     printf("%lf\n", strToDouble("123.456e13")); 
     printf("%lf\n", strToDouble("123.456e-13")); 

   return 0; 
}
