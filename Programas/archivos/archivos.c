
  
# include <stdio.h> 
# include <string.h> 
   
int main( ) 
{ 
  
    // Declare the file pointer 
    FILE *fptr ; 
      
    // Get the data to be written in file 
    char dataToBeWritten[50]  
        = "Hola amigos como esan"; 
  
    // Open the existing file GfgTest.c using fopen() 
    // in write mode using "w" attribute 
    fptr = fopen("Test.c", "w") ; 
      
    // Check if this filePointer is null 
    // which maybe if the file does not exist 
    if ( fptr == NULL ) 
    { 
        printf( "Test.c file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The file is now opened.\n") ; 
          
        // Write the dataToBeWritten into the file 
        if ( strlen (  dataToBeWritten  ) > 0 ) 
        { 
              
            // writing in the file using fputs() 
            fputs(dataToBeWritten, filePointer) ;    
            fputs("\n", filePointer) ; 
        } 
          
        // Closing the file using fclose() 
        fclose(filePointer) ; 
          
        printf("Data successfully written in file Test.c\n"); 
        printf("The file is now closed.") ; 
    } 
    return 0;         
} 