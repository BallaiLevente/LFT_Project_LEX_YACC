all:	lex yacc compile

lex:	project.l
	lex project.l

yacc:	project.y
	yacc -d project.y

compile: y.tab.c lex.yy.c
	 gcc -o PROJECT <proba lex.yy.c y.tab.c -ly -ll

clean:	
	rm -rf y.tab.c y.tab.h lex.yy.c PROJECT 
