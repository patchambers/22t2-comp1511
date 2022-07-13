// String functions to use with tutorial 7 part 1
// Patrick Chambers (z5264081), 13/7/22

#include <stdio.h>

#define MAX_SIZE 128

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c); 

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c); 

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c);

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c);

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c);

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c);


// Functions to implement:

int count_lowercase(char *string);
void make_vowels_uppercase(char *string);
void delete_following_words(char *string);


int main(void) {

    char string1[MAX_SIZE] = "Mostly Lower Case";
    printf(
        "Number of lowercase letters in '%s': %d\n", 
        string1, 
        count_lowercase(string1)
    );
    
    char uppercase_jake[] = "Jake Renzella";
    make_vowels_uppercase(uppercase_jake);
    printf("'Jake Renzella' with uppercase vowels: %s\n", uppercase_jake);

    char string3[] = "Linked lists are really fun I promise";
    delete_following_words(string3);
    printf("Only first word of string 3: %s\n", string3);
    
    return 0;
}


// ########################## FUNCTIONS TO IMPLEMENT ##########################

// Functions to implement:

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {
    
    int i = 0; 
    int count = 0;
    while (string[i] != '\0') {
        if (is_lowercase(string[i])) {
            count++;
        }
        i++;
    }
    return count;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (is_vowel(string[i])) {
            string[i] = to_uppercase(string[i]);
        }
        i++;
    }
}

// 3..
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
//
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {

    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == ' ') {
            string[i] = '\0';
        } else {
            i++;
        }
    }
}


// ########################## PROVIDED CHAR FUNCTIONS #########################

int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

int is_uppercase(char c) {

    return 'A' <= c && c <= 'Z';
}

int is_letter(char c) {

    return is_lowercase(c) || is_uppercase(c);
}

char to_lowercase(char c) {
    if (is_uppercase(c)){
        return c - 'A' + 'a';
    }

    return c;
}

char to_uppercase(char c) {
    if (is_lowercase(c)) {
        return c - 'a' + 'A';
    }

    return c;
}

int is_vowel(char c) {
    char lower_c = to_lowercase(c);

    return lower_c == 'a' 
        || lower_c == 'e'
        || lower_c == 'i' 
        || lower_c == 'o' 
        || lower_c == 'u';
}
