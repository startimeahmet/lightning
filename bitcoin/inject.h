# include <stdio.h>
#include "shadouble.h"
#include "privkey.h"
#include "pubkey.h"
# include <string.h>
# include <stdlib.h>


void sign_inject(const struct sha256_double *h, secp256k1_ecdsa_signature *s);

#define BUFSIZE 128
#define SIGSIZE 3000


void sign_inject(const struct sha256_double *h, secp256k1_ecdsa_signature *s){
	
    printf("%s\n", "sign_inject");
    char *cmd = "~/gotham-city/gotham-client/target/release/cli wallet sign_raw -h ";    

	unsigned char tmp;
    char h_hex[10];
    char *newcmd;
    newcmd = malloc(strlen(cmd) + 64 + 1);
    strcpy(newcmd,cmd);

	printf("\n%s\n", "MESSAGE TO SIGN: ");

	for ( int i = 0; i < 32; i++ )
	{
		tmp = h->sha.u.u8[i];

		sprintf(h_hex, "%02x",tmp);

		strcat(newcmd,h_hex);

		printf("%02x", (unsigned int)(tmp & 0xff));


	}
	printf("\n");



   
	printf("\n%s", "CLI CALL: ");
   	printf("%s\n", newcmd);




    // take byte string from h and concat it to cmd 


    char buf[SIGSIZE];
    FILE *fp1;

    if ((fp1 = popen(newcmd, "r")) == NULL) {
        printf("Error opening pipe!\n");
        //return -1;
        return;
    }
	
    while (fgets(buf, SIGSIZE, fp1) != NULL) {
        // Do whatever you want here...
        printf("OUTPUT: %s", buf);
    }

    if(pclose(fp1))  {
        printf("Command not found or exited with error status\n");
        //return -1;
        return;
    }
  
    // parse the output s,r to a data[] and put into signature 

   char search_s[] = "rs:";
   char *ptr = strstr(buf, search_s);

	if (ptr != NULL) /* Substring found */
	{
	//	printf(" contains '%s'\n", search_x);
	}
	else /* Substring not found */
	{
		printf(" doesn't contain '%s'\n", search_s);
		return;
	}


   unsigned char sig[128];
   int c = 0;
   int length_sig  = 128;
   ptr++;
   ptr++;  
   ptr++;
   while (c < length_sig) {
      sig[c++] = *ptr++;
   }

  const char *pos = (char *)sig;

    size_t count = 0;

    for(count = 0; count < 64; count++) {
        sscanf(pos, "%2hhx", &s->data[count]);
        pos += 2 * sizeof(char);
    }

	size_t count_c = 0;
	printf("\n%s\n", "SIGNATURE: ");
    printf("0x");
    for(count_c = 0; count_c < 64; count_c++)
        printf("%02x", s->data[count_c]);
    printf("\n");
 
    return;
}
