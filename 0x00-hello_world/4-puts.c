 #include <stdio.h> 
    
  int  main(void) { 
     static const char hello[] = "Programming is like building a multilingual puzzle\n"; 
      fwrite(hello, sizeof(hello) - 1, 1, stdout); 
      return(0);
    } 

