#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME_LEN 100

// Function to encrypt or decrypt a file using XOR cipher
void xor_cipher(char *input_filename, char *output_filename, char key) {
    FILE *input_file = fopen(input_filename, "r");
    FILE *output_file = fopen(output_filename, "w");

    int c;
    while ((c = fgetc(input_file)) != EOF) {
        fputc(c ^ key, output_file);
    }

    fclose(input_file);
    fclose(output_file);
}

int main() {
    char choice;
    char input_filename[MAX_FILENAME_LEN], output_filename[MAX_FILENAME_LEN];
    char key;

    while (1) {
        printf("Enter E to encrypt, D to decrypt, or Q to quit: ");
        scanf(" %c", &choice);
        if (choice == 'Q') {
            break;
        }

        printf("Enter the file name: ");
        scanf("%s", input_filename);

        if (choice == 'E') {
            printf("Enter the output file name for the encrypted file: ");
            scanf("%s", output_filename);
            printf("Enter the key for encryption: ");
            scanf(" %c", &key);

            xor_cipher(input_filename, output_filename, key);
            printf("Encrypted file created: %s\n", output_filename);
        }
        else if (choice == 'D') {
            printf("Enter the output file name for the decrypted file: ");
            scanf("%s", output_filename);
            printf("Enter the key for decryption: ");
            scanf(" %c", &key);

            xor_cipher(input_filename, output_filename, key);
            printf("Decrypted file created: %s\n", output_filename);
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
