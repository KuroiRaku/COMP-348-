team(['40122814', '40010381','40046378']).
student_info('40122814', 'Le Cherng', 'Lee').
student_info('40010381', 'Mona', 'Kia').
student_info('40046378','Alex','Ye').
takes_course('40122814', 'comp', '348', 'aa').
takes_course('40122814', 'comp', '348', 'aaaf').
takes_course('40122814', 'comp', '352', 'aa').
takes_course('40010381', 'comp', '348', 'ab').
takes_course('40010381', 'comp', '348', 'abaf').
takes_course('40010381', 'comp', '346', 'cc').
takes_course('40046378', 'comp', '348', 'aa').
takes_course('40046378', 'comp', '348', 'aaaf').
takes_course('40046378', 'comp', '352', 'aa').
takes_course('40046378', 'comp', '352', 'aaag').
course_schedule('comp', '352', 'aa', 'tue', '1830', '2100').
course_schedule('comp', '352', 'aa', 'thu', '1830', '2100').
course_schedule('comp', '348', 'aa', 'mon', '1445', '1715').
course_schedule('comp', '348', 'aa', 'wed', '1445', '1715').
course_schedule('comp', '348', 'aaae', 'mon', '1345', '1405').
course_schedule('comp', '348', 'aaae', 'wed', '1345', '1405').
course_schedule('comp', '348', 'ab', 'tue', '1315', '1545').
course_schedule('comp', '348', 'ab', 'thu', '1315', '1545').
course_schedule('comp', '348', 'abaf', 'tue', '1615', '1705').
course_schedule('comp', '348', 'abaf', 'thu', '1615', '1705').
course_schedule('comp', '346', 'cc', 'tue', '1830', '2100').
course_schedule('comp', '346', 'cc', 'thu', '1830', '2100').

all_sections(CNAM, CNUM, L) :-
  findall(F,course_schedule(CNAM,CNUM,F,_,_,_),LL),
  write(LL),
  /*You don't need the write function but just as a reference
  */
  list_to_set(LL,L).

has_taken(S, [CNAM|[CNUM|[SEC|[]]]]) :-
  takes_course(S,CNAM,CNUM,SEC).

has_taken2(S, [CNAM|[CNUM|[]]]) :-
  takes_course(S,CNAM,CNUM,_).
  /* true if S takes any sections of the course CNAM CNUM,
  e.g. takes('4000123', ['comp', '348']) */
  
all_subjects(S, L) :- 
  /* L contains all the courses subjects that have been
  taken by student S, i.e. ['comp', 'soen']; no duplicates */
  
all_courses(S, L) :- ...
  /* L contains all the courses that have been taken by
  student S, i.e. all_courses('4000123', L) will result in
  L=[['comp', '348', 'aa'], ['comp', '348', 'ab']] */
  
all_courses2(S, L) :- ...
  /* similar to all_courses but without section info;
  no duplicates */
