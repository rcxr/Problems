DIFF_OPTIONS=-y -w --suppress-common-lines
build:
	echo "g++"
	mkdir bin -p
	g++ src/main.cpp -std=c++11 -o bin/main.exe
tests_cleanup:
	echo "tests cleanup"
	rm -f --r out
	rm -f --r logs
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14: clean build
	echo "run test"
	mkdir out logs -p
	bin/main.exe < in/input$@.txt > out/output$@.txt
	diff expected/output$@.txt out/output$@.txt $(DIFF_OPTIONS) > logs/diff$@.log
tests: clean build
	echo "run all tests"
	mkdir out logs -p
	bin/main.exe < in/input00.txt > out/output00.txt
	bin/main.exe < in/input01.txt > out/output01.txt
	bin/main.exe < in/input02.txt > out/output02.txt
	bin/main.exe < in/input03.txt > out/output03.txt
	bin/main.exe < in/input04.txt > out/output04.txt
	bin/main.exe < in/input05.txt > out/output05.txt
	bin/main.exe < in/input06.txt > out/output06.txt
	bin/main.exe < in/input07.txt > out/output07.txt
	bin/main.exe < in/input08.txt > out/output08.txt
	bin/main.exe < in/input09.txt > out/output09.txt
	bin/main.exe < in/input00.txt > out/output10.txt
	bin/main.exe < in/input11.txt > out/output11.txt
	bin/main.exe < in/input12.txt > out/output12.txt
	bin/main.exe < in/input13.txt > out/output13.txt
	bin/main.exe < in/input14.txt > out/output14.txt
	bin/main.exe < in/input15.txt > out/output15.txt
	bin/main.exe < in/input16.txt > out/output16.txt
	bin/main.exe < in/input17.txt > out/output17.txt
	bin/main.exe < in/input18.txt > out/output18.txt
	bin/main.exe < in/input19.txt > out/output19.txt
	bin/main.exe < in/input20.txt > out/output20.txt
	bin/main.exe < in/input21.txt > out/output21.txt
	bin/main.exe < in/input22.txt > out/output22.txt
	bin/main.exe < in/input23.txt > out/output23.txt
	bin/main.exe < in/input24.txt > out/output24.txt
	bin/main.exe < in/input25.txt > out/output25.txt
	bin/main.exe < in/input26.txt > out/output26.txt
	bin/main.exe < in/input27.txt > out/output27.txt
	bin/main.exe < in/input28.txt > out/output28.txt
	bin/main.exe < in/input29.txt > out/output29.txt
	bin/main.exe < in/input30.txt > out/output30.txt
	bin/main.exe < in/input31.txt > out/output31.txt
	bin/main.exe < in/input32.txt > out/output32.txt
	bin/main.exe < in/input33.txt > out/output33.txt
	bin/main.exe < in/input34.txt > out/output34.txt
	bin/main.exe < in/input35.txt > out/output35.txt
	bin/main.exe < in/input36.txt > out/output36.txt
	bin/main.exe < in/input37.txt > out/output37.txt
	bin/main.exe < in/input38.txt > out/output38.txt
	bin/main.exe < in/input39.txt > out/output39.txt
	bin/main.exe < in/input40.txt > out/output40.txt
	bin/main.exe < in/input41.txt > out/output41.txt
	bin/main.exe < in/input42.txt > out/output42.txt
	bin/main.exe < in/input43.txt > out/output43.txt
	bin/main.exe < in/input44.txt > out/output44.txt
	bin/main.exe < in/input45.txt > out/output45.txt
	bin/main.exe < in/input46.txt > out/output46.txt
	bin/main.exe < in/input47.txt > out/output47.txt
	bin/main.exe < in/input48.txt > out/output48.txt
	bin/main.exe < in/input49.txt > out/output49.txt
	bin/main.exe < in/input50.txt > out/output50.txt
	bin/main.exe < in/input51.txt > out/output51.txt
	bin/main.exe < in/input52.txt > out/output52.txt
	bin/main.exe < in/input53.txt > out/output53.txt
	bin/main.exe < in/input54.txt > out/output54.txt
	bin/main.exe < in/input55.txt > out/output55.txt
	bin/main.exe < in/input56.txt > out/output56.txt
	diff -r expected out $(DIFF_OPTIONS) > logs/diff.log
clean: tests_cleanup
	echo "bin cleanup"
	rm -f --r bin
