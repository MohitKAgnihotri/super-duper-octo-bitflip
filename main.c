#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <getopt.h>
#include <stdint-gcc.h>


uint16_t flip_even_bits_fn(uint16_t x) {
    // XOR operation is used to flip the bits
    // 0x5555 is a 16-bit number with all even bits set as 1 and odd bits as 0
    uint16_t mask = 0x5555;
    return x ^ mask;
}

uint16_t flip_odd_bits_fn(uint16_t x) {
    // XOR operation is used to flip the bits
    // 0xAAAA is a 16-bit number with all odd bits set as 1 and even bits as 0
    uint16_t mask = 0xAAAA;
    return x ^ mask;
}

uint16_t flip_all_bits_fn(uint16_t x)
{
    // XOR operation is used to flip the bits
    // 0xFFFF is a 16-bit number with all bits set as 1
    int mask = 0xFFFF;
    return x ^ mask;
}

uint16_t reverse_bits_fn(uint16_t x) {
    // Reversing the bits is done by swapping the bits in pairs
    uint16_t mask = 0x0001;
    uint16_t result = 0;
    for (int i = 0; i < 16; i++) {
        result = result << 1;
        if (x & mask) {
            result = result | 1;
        }
        x = x >> 1;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s [-e] [-f] [-a] [-s] [-o outputfilename] intval", argv[0]);
        return 1;
    }

    /** If the -e option is selected then flip all even bits in the integer */
    /** If the -f option is selected then flip all odd bits in the integer */
    /** If the -a option is selected then flip all bits in the integer */
    /** If the -s option is selected then take the bits and switch them around from right to left. (The rightmost bit becomes the leftmost bit. */

    bool flip_even_bits = false; // -e
    bool flip_odd_bits = false;  // -f
    bool flip_all_bits = false;  // -a
    bool switch_bits = false;    // -s
    char *output_filename = NULL; // -o
    uint16_t intval = 0;
    FILE *output_file = NULL;


    // parse arguments using getopt
    int c;
    while ((c = getopt(argc, argv, "efaso:")) != -1) {
        switch (c) {
            case 'e':
                flip_even_bits = true;
                break;
            case 'f':
                flip_odd_bits = true;
                break;
            case 'a':
                flip_all_bits = true;
                break;
            case 's':
                switch_bits = true;
                break;
            case 'o':
                output_filename = optarg;
                break;
            default:
                printf("Usage: %s [-e] [-f] [-a] [-s] [-o outputfilename] intval \n", argv[0]);
                return 1;
        }
    }

    intval = atoi(argv[optind]);

    // open output file if specified
    if (output_filename != NULL) {
        output_file = fopen(output_filename, "w");
        if (output_file == NULL) {
            printf("Error: could not open output file %s", output_filename);
            return 1;
        }
    }

    // if there is no file to write to, then write to stdout
    if (output_filename == NULL) {
        output_file = stdout;
    }

    // perform the requested operations
    fprintf(output_file, "Input: %d (0x%04X)\n", intval, intval);

    if (flip_even_bits) {
        fprintf(output_file,"Even bits Flipped: %hu \n", flip_even_bits_fn(intval));
    }

    if (flip_odd_bits) {
        fprintf(output_file,"Odd bits Flipped: %hu \n", flip_odd_bits_fn(intval));
    }

    if (flip_all_bits) {
        fprintf(output_file,"All bits Flipped: %hu \n", flip_all_bits_fn(intval));
    }

    if (switch_bits) {
        fprintf(output_file,"Switched all bits: %hu \n", reverse_bits_fn(intval));
    }

    if (output_file != stdout) {
        fclose(output_file);
    }
    return 0;
}
