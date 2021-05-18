#include "giftcard.h"

#include <stdint.h>

#include <stdio.h>
#include <string.h>

#include "giftcardreader.h"

int main(int argc, char **argv) {
    // BDG: no argument checking?
	FILE *input_fd = fopen(argv[2],"r");
	struct this_gift_card *thisone = gift_card_reader(input_fd);
	if (argv[1][0] == '1') print_gift_card_info(thisone);
    else if (argv[1][0] == '2') gift_card_json(thisone);

	return 0;
}