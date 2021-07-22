#include <stdio.h>

/* Write a program to print a histogram of the lengths of words in its input. */
/* Horizontal histogram */
/* Following rules found in official answer book */


#define IN      1  /* inside a word */
#define OUT     0  /* outside a word */
#define MAXHIST 15 /* max length of histogram */
#define MAXWORD 11 /* max length of a word */

main(){
	/* c is where we store getchar() results */
	/* i is used in the for loops */
	/* nc is used to count new characters */
	/* state used to keep track of whether we are in or out of a word */
	int c, i, nc, state;

	int len; /* length of each histogram bar */
	int maxvalue; /* maximum value for word length */ 
	int ovflow_count; /* total amount of words larger than MAXWORD */
	int word_lengths[MAXWORD]; /* array to store word length */   

	state = OUT;
	nc = 0;
	ovflow_count = 0;
	for(i = 0; i < MAXWORD; ++i){
	    word_lengths[i] = 0;
	}
	/*While we're recieving input */
	while((c = getchar()) != EOF){
	    /* if the character we've recieved is a space, new line, or tab */
	    /* then we are outside of a word */
	    if(c == ' ' || c == '\n' || c == '\t'){
		state = OUT;
		/* Since we have reached the end of a word*/
		/* If the amount of new characters is an appropriate size for a word (less than MAXWORD) */
		/* Increment the index in word_lengths equal to that count */
		/* Otherwise incrememnt the amount of overflow words */
		if(nc > 0){
		    if(nc < MAXWORD){
			++word_lengths[nc];
		    }
		    else{
			++ovflow_count;
		    }
		}
		/*reset new character count*/
		nc = 0;
	    }
	    /* beginning of a new word */
	    else if(state == OUT){
		state = IN;
		nc = 1;
	    }
	    /* increment amount of new characters because we are inside a word */
	    else{
		++nc;
	    }
	}


	/* time to print the histogram */
	for(i = 1; i<MAXWORD;++i){
	    printf("%5d : ", i, word_lengths[i]);
	    if(word_lengths[i]>0){
		len = word_lengths[i];
	    }
	    else{
		len = 0;
	    }
	    while(len > 0){
		putchar('*');
		--len;
	    }
	    putchar('\n');
	}

        if(ovflow_count > 0){
            printf("%5s : %d\n","Overflow Count", ovflow_count);
        } 
}
