lucas(0, 1) :- !.
lucas(1, 1) :- !.
lucas(N, L) :-
        N > 1,
        N1 is N-1,
        N2 is N-2,
        lucas(N1, L1),
        lucas(N2, L2),
        L is L1+L2.