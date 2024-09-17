#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101 

void evaluasi_string(const char *string1, const char *string2) {
   
    if (strcmp(string1, string2) == 0) {
        printf("IDENTIK\n");
    }
    
    else if (strlen(string1) == strlen(string2)) {
        printf("MIRIP\n");
    }
    
    else {
        printf("BERBEDA\n");
    }
}

int main() {
    char string1[MAX_LENGTH];
    char string2[MAX_LENGTH];
    
    
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    
    
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    
    
    evaluasi_string(string1, string2);
    
    return 0;
}
