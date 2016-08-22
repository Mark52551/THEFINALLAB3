#include "Grade.h"

double grade::PrintGrade(int quiz_1, int quiz_2, int midterm, int finalexam)
{
	double quizzes = ((((((quiz_1 + quiz_2) / 20.0)*100.0)*.25) + midterm* 0.25) + finalexam *0.50);
	return quizzes;
}

char grade::lettergrade(double quizzes)
{
	if (quizzes >= 90) { return 'A'; }
	else if (quizzes >= 80) { return 'B'; }
	else if (quizzes >= 70) { return 'C'; }
	else if (quizzes >= 60) { return 'D'; }
	else
	{
		return 'F';
	};
	return 0;

}
