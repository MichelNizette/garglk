#define A(x) B(x+1)
#define B(x) A(x+2)

"A(A(3)) = "; A(A(3));
"A(5) = "; A(5);
"B(7) = "; B(7);
"A(3)B(9) = "; A(3)B(9);
"A(4)A(6)A(8) = "; A(4)A(6)A(8);

"A(A(A(5))) = "; A(A(A(5)));

"A(B(A(7))) = "; A(B(A(7)));
