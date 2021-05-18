#include "giftcard.h"

#include <stdint.h>

#include <stdio.h>
#include <string.h>

#include "giftcardreader.h"

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
    struct this_gift_card *thisone = gift_card_reader_buf(Data, Size);
    // Do both for fuzziing
    print_gift_card_info(thisone);
    gift_card_json(thisone);
    return 0;
}