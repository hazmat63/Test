#include <stdio.h>
#include <ctype.h>                                     
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];

    char ch;
    int characters, words, lines;


    /* Input path of files to merge to third file */
    printf("Enter source file path: ");
    scanf("%s", path);

    /* Open source files in 'r' mode */
    file = fopen(path, "r");


    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);

   getstuff ();
 
 
    /* Close files to release resources */
    fclose(file);

    return 0;
}

                     
 
int getstuff( void )
{
      FILE *infile;
      FILE *outfile;
      int iochar;
      int num = 0;
 
            outfile = fopen("outtext.txt", "w");
 
     if (( infile = fopen( "cscdata.txt", "r" )) == NULL ) {
          printf( "text couldn't be opened\n" );
          exit( 1 );
     }
 
     while ( !feof( infile )) {                            
                                                        
          while ( isalpha( iochar = getc( infile )))
 
                  putc( iochar, outfile );
 
          putc( '\n', outfile );
 
                 ungetc( iochar, infile );                        
                                                       
          while ( isdigit( iochar = getc( infile )))
        
                putc( iochar, outfile );
         
                putc( '\n', outfile );
          
                ungetc( iochar, infile );                       
                                                        
          while ( !isalpha( iochar = getc( infile )) && ( !isdigit( iochar )) && ( !feof( infile )))
          ;
          ungetc( iochar, infile );                        
     }
         
         fclose( infile );
 
     fclose (outfile);
 
     return 0;
 
     }
         
 

