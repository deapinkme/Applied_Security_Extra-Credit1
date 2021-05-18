giftcardreader: giftcardreader.c
	gcc -o giftcardreader giftcardreader.c && ./giftcardreader 1 examplefile.gft


giftcardexamplewriter:
	gcc -o giftcardexamplewriter giftcardexamplewriter.c && ./giftcardexamplewriter

fuzzer: giftcardreader.c fuzzer.c
	clang -g -fsanitize=address,fuzzer giftcardreader.c fuzzer.c -o fuzzer
