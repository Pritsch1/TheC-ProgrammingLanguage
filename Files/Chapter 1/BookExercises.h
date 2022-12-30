#ifndef BOOKEXERCISES_H
#define BOOKEXERCISES_H
//BookExercises.c-------------
int input();//Replace with fgets()!!
int newlines(int x);
void welcome();
void start();
void index();
void chapterSelectionText();
void chapterSelection();
//----------------------------

//Chapter1Text.c--------------
void chapter1Text();
void chapter1();
void chapter1_1Text();
void chapter1_1();
//----------------------------

//Chapter1.c------------------
void exercise1_1();
void exercise1_2();
//----------------------------

//projectsText.c--------------
void projectsSelectionText();
void projectsSelection();
//----------------------------

//project1.c------------------
void tempConverter();
void wellcome();
char getMeasure();
int checkMeasure(int x);
float getTemp();
float convert(int x, float y);
int calculate(float input, float num, float frct, float num2);
void result(float C, float F, float K, float y, int x);
void restart();
//----------------------------
#endif


