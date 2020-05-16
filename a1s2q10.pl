%facts:
inv(0,1).
inv(1,0).

and(1,1,1).
and(1,0,0).
and(0,1,0).
and(0,0,0).

or(1,1,1).
or(1,0,1).
or(0,1,1).
or(0,0,0).

%rules:
cir(A, B, C, S):- or(A,B,P), and(A,B,C), inv(C, C1), and(P, C1, S).