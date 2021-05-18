struct this_gift_card *gift_card_reader_buf(uint8_t *buf, long fsize);
struct this_gift_card *gift_card_reader(FILE *fp);
void print_gift_card_info(struct this_gift_card *thisone);
void gift_card_json(struct this_gift_card *thisone);
