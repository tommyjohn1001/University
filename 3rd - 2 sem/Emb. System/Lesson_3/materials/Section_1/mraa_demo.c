#include <mraa.h>
int main ( int argc , char** argv )
{
    const char* board_name = mraa_get_platform_name ( ) ;
    printf( "hello mraa\n Version : %s \n Running on %s \n", mraa_get_version() ,board_name) ;
    mraa_deinit( ) ;
    return MRAA_SUCCESS;
} 
