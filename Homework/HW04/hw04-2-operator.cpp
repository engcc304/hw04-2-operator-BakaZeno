#include <stdio.h>

int main() {
    int a = 0, b = 1 ;
    printf( "Please enter value (a b) : " ) ;
    scanf( "%d %d", &a, &b ) ; //TODO: #11 Input variable 'a' and 'b'
    
    printf( "a = %d , b = %d \n", a, b ) ;
    printf( "a + b = %d \n", a+b ) ;
    printf( "a - b = %d \n", a-b ) ;
    printf( "a * b = %d \n", a*b ) ;
    
    if (b > 0) {
        printf( "a / b = %d (b must greater than 0)\n", a/b ) ;
    } else {
        printf( "a / b = Cannot divide by zero\n" ) ;
    }
    
    printf( "a %% b = %d \n", a%b ) ;
    
    printf( "++a = %d \n", ++a ) ;
    printf( "a-- = %d \n", a-- ) ;
    
    printf( "a += 1 %d \n", a+=1 ) ;
    printf( "a += b %d \n", a+=b ) ;
    
    printf( "a -= 1 %d \n", a-=1 ) ;
    printf( "a -= b %d \n", a-=b ) ;
    
    printf( "a *= 1 %d \n", a*=1 ) ;
    printf( "a *= b %d \n", a*=b ) ;
    
    printf( "a %%= 1 %d \n", a%=1 ) ;
    printf( "a %%= b %d \n", a%=b ) ;
    
    printf( "a && b %d \n", a&&b ) ;
    printf( "a || b %d \n", a||b ) ;
    
    return 0 ;
}