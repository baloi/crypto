typedef unsigned long u4;
typedef unsigned char byte;

typedef struct {
    u4 k[8];
    /* Constant x-boxes -- set up in gost_init(); */
    char k87[256], k65[256], k43[256], k21[256];
}   gost_ctx;


#ifdef __alpha  /* Any other 64-bit machines ? */
typedef unsigned int word32;
#else
typedef unsigned long word32;
#endif

void gost_init( gost_ctx * );

kboxinit( gost_ctx *c ) {
    int i;

    byte k8[16] = { 14 /*....*/ };
}

void gost_init( gost_ctx *c ) {
    kboxinit( c );
}

void main( void ) {
    gost_ctx gc;
    u4 k[8], data[10];
    int i;

    /* Initialize GOST context */
    gost_init( &gc );

    return 0; //@@TODO: take out, not in code 
}
