
BookExercises: BookExercises.obj BookExercises.h mylib.h
	cl BookExercises.c -o BookExercises

mylib.obj: mylib.c BookExercises.h mylib.h
	cl mylib.c

chapter1Text.obj: chapter1Text.c BookExercises.h mylib.h
	cl chapter1Text.c

chapter1.obj: chapter1.c BookExercises.h mylib.h
	cl chapter1.c

projectsText.obj: projectsText.c BookExercises.h mylib.h
	cl projectsText.c

project1.obj: project1.c BookExercises.h mylib.h
	cl project1.c
