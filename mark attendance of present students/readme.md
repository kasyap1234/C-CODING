Mark attendance of present students
Given an integer array of roll numbers RN and an array of integer roll numbers of present students PS. Write a program to sort the roll numbers of students. Mark the attendance of the present students roll numbers in an array. If a student is present then mark 1 else mark 0.
    
Input
    10
    13 4 5 10 1 2 6 12 9 8
    6
    8 1 4 6 2 10
 
    where,
First line represents total number of students N1.
Second line represents roll number of all students RN.
Third line represents number present students N2.
Fourth line represents roll numbers of present students PS. 
    
Output
    1 2 4 5 6 8 9 10 12 13
    1 1 1 0 1 1 0 1 0 0
 
    where,
First line is sorted roll numbers of all students.
Second line is attendance of students.
 
After sorting, roll numbers will be 1 2 3 4 5 6 7 8 9 10
Here, roll numbers 1, 2, 4, 6, 8, 10 are present hence they are marked as 1 and 5, 9, 12, 13 are absent hence they are marked as 0 in an array A
 
Assume that,
N1 and N2 are integers within the range [1 to 200].
Array elements are integers within the range [1 to 200].
All elements in an array are unique.
The variables N1, RN, N2, PS and A are already defined.
