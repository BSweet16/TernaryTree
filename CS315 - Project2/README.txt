==========================================================
CS 315 - Program Assignment 2
 TreeTernary
Blake Sweet
==========================================================

This is a Ternary Tree which begins empty. Upon start, the program pauses while you choose between 2 options and repeats until you choose a correct option.
If you choose (1), the program will read all the integers in the "data.txt" file and insert them into the tree after reading each integer.
The choice was made here not to store all integers then insert into the tree to not only save space but allow for larger trees (by maximizing memory usage).
The tree appears in "symmetric order" (inorder).

Notes:
	- To read from different files, simply change the "DATA_FILE" constant string at the top of the "main.cpp" file. 
	- I chose to display the values that were being insorted when using the automatic function in order to be more clear that the values were being processed correctly.
	  I noticed however that it was taking a lot of vertical space, so I print them in columns of 8.
	  This value can be changed in the "COLUMN_WIDTH" int constant in the top of the "main.cpp" file.
	  (To make the inserting message minimal, set the column width to the number of ints read in (in this case 1000) and it should all be on one line.
	- My values for the variables referenced in the assignment (rather than a and b) were data and data2 for sake of better names.
	- The program is technically able to handle as many integers as the memory will allow it to handle. There is no size limit placed on the tree.
	- The styling of the nodes reflects as closely as I could interpret to the example given in the assignment descrption.
		If any child is missing, just leave out the parentheses. For instance, if I insert the following integers into an initially empty ternary tree: 
		4 6 4 18 8 2 14 7 15 5 19 12 15 5 9 0 17 2 2 19 
		the output is 
		((0 (2) 2) 2 4) 4 (5 5) 6 ((7) 8 ((9 12) 14 (15) 15 (17)) 18 (19 19))
	- "data available at [link]" refers to data.txt
	- "my data" refers to data2.txt



=== Output when run on my data: ===
Please choose an option from the list below.
(1) - Automatically read numbers from 'data.txt' file
(2) - Manually enter numbers
=> 1

Reading from Data.txt
Inserting 4     Inserting 6     Inserting 4     Inserting 18    Inserting 8     Inserting 2     Inserting 14    Inserting 7
Inserting 15    Inserting 5     Inserting 19    Inserting 12    Inserting 15    Inserting 5     Inserting 9     Inserting 0
Inserting 17    Inserting 2     Inserting 2     Inserting 19
((2 2) 2 4) 4 (5 5) 6 ((7) 8 ((9 12) 14 (15) 15 (17)) 18 (19 19))
Press any key to continue . . .



=== Output when run on data available at http://www.cs.uky.edu/~raphael/courses/CS315/data.ternary.txt: ===
Please choose an option from the list below.
(1) - Automatically read numbers from 'data.txt' file
(2) - Manually enter numbers
=> 1

Reading from Data.txt
Inserting 56    Inserting 42    Inserting 51    Inserting 77    Inserting 12    Inserting 73    Inserting 36    Inserting 95
Inserting 6     Inserting 70    Inserting 46    Inserting 96    Inserting 89    Inserting 10    Inserting 44    Inserting 27
Inserting 84    Inserting 97    Inserting 82    Inserting 72    Inserting 78    Inserting 11    Inserting 70    Inserting 56
Inserting 20    Inserting 52    Inserting 2     Inserting 84    Inserting 39    Inserting 13    Inserting 38    Inserting 49
Inserting 98    Inserting 36    Inserting 18    Inserting 47    Inserting 25    Inserting 80    Inserting 62    Inserting 14
Inserting 81    Inserting 47    Inserting 16    Inserting 7     Inserting 67    Inserting 39    Inserting 32    Inserting 98
Inserting 45    Inserting 1     Inserting 24    Inserting 71    Inserting 91    Inserting 5     Inserting 12    Inserting 63
Inserting 27    Inserting 78    Inserting 33    Inserting 27    Inserting 59    Inserting 51    Inserting 90    Inserting 31
Inserting 3     Inserting 27    Inserting 12    Inserting 59    Inserting 89    Inserting 32    Inserting 22    Inserting 0
Inserting 60    Inserting 38    Inserting 82    Inserting 15    Inserting 85    Inserting 61    Inserting 97    Inserting 13
Inserting 69    Inserting 50    Inserting 38    Inserting 22    Inserting 91    Inserting 25    Inserting 73    Inserting 29
Inserting 53    Inserting 81    Inserting 32    Inserting 21    Inserting 85    Inserting 75    Inserting 72    Inserting 88
Inserting 54    Inserting 5     Inserting 91    Inserting 20    Inserting 92    Inserting 84    Inserting 54    Inserting 7
Inserting 32    Inserting 54    Inserting 19    Inserting 86    Inserting 46    Inserting 48    Inserting 78    Inserting 93
Inserting 85    Inserting 30    Inserting 3     Inserting 68    Inserting 20    Inserting 47    Inserting 10    Inserting 16
Inserting 32    Inserting 10    Inserting 48    Inserting 14    Inserting 36    Inserting 8     Inserting 58    Inserting 37
Inserting 67    Inserting 15    Inserting 85    Inserting 33    Inserting 47    Inserting 83    Inserting 9     Inserting 69
Inserting 29    Inserting 36    Inserting 20    Inserting 90    Inserting 90    Inserting 92    Inserting 71    Inserting 53
Inserting 62    Inserting 68    Inserting 48    Inserting 33    Inserting 18    Inserting 79    Inserting 73    Inserting 98
Inserting 72    Inserting 97    Inserting 12    Inserting 21    Inserting 44    Inserting 92    Inserting 20    Inserting 79
Inserting 91    Inserting 75    Inserting 53    Inserting 97    Inserting 6     Inserting 4     Inserting 97    Inserting 79
Inserting 77    Inserting 77    Inserting 28    Inserting 49    Inserting 69    Inserting 99    Inserting 69    Inserting 46
Inserting 61    Inserting 89    Inserting 28    Inserting 84    Inserting 55    Inserting 76    Inserting 61    Inserting 79
Inserting 54    Inserting 69    Inserting 4     Inserting 37    Inserting 46    Inserting 21    Inserting 10    Inserting 77
Inserting 76    Inserting 73    Inserting 20    Inserting 38    Inserting 76    Inserting 76    Inserting 10    Inserting 53
Inserting 86    Inserting 43    Inserting 7     Inserting 41    Inserting 96    Inserting 78    Inserting 31    Inserting 3
Inserting 85    Inserting 76    Inserting 88    Inserting 45    Inserting 99    Inserting 88    Inserting 59    Inserting 10
Inserting 77    Inserting 89    Inserting 95    Inserting 25    Inserting 51    Inserting 14    Inserting 80    Inserting 74
Inserting 69    Inserting 14    Inserting 44    Inserting 17    Inserting 99    Inserting 51    Inserting 43    Inserting 25
Inserting 32    Inserting 38    Inserting 6     Inserting 77    Inserting 14    Inserting 96    Inserting 32    Inserting 19
Inserting 83    Inserting 2     Inserting 96    Inserting 11    Inserting 63    Inserting 67    Inserting 17    Inserting 77
Inserting 38    Inserting 69    Inserting 98    Inserting 17    Inserting 70    Inserting 59    Inserting 11    Inserting 68
Inserting 89    Inserting 44    Inserting 66    Inserting 68    Inserting 36    Inserting 72    Inserting 87    Inserting 30
Inserting 74    Inserting 84    Inserting 65    Inserting 35    Inserting 32    Inserting 37    Inserting 23    Inserting 47
Inserting 58    Inserting 72    Inserting 69    Inserting 21    Inserting 93    Inserting 2     Inserting 12    Inserting 92
Inserting 53    Inserting 10    Inserting 91    Inserting 77    Inserting 31    Inserting 94    Inserting 85    Inserting 18
Inserting 28    Inserting 16    Inserting 88    Inserting 15    Inserting 11    Inserting 79    Inserting 25    Inserting 20
Inserting 67    Inserting 35    Inserting 18    Inserting 74    Inserting 91    Inserting 19    Inserting 79    Inserting 20
Inserting 27    Inserting 22    Inserting 67    Inserting 31    Inserting 33    Inserting 16    Inserting 45    Inserting 47
Inserting 15    Inserting 16    Inserting 55    Inserting 86    Inserting 44    Inserting 74    Inserting 55    Inserting 18
Inserting 28    Inserting 50    Inserting 30    Inserting 13    Inserting 63    Inserting 13    Inserting 94    Inserting 65
Inserting 8     Inserting 98    Inserting 33    Inserting 95    Inserting 86    Inserting 9     Inserting 60    Inserting 90
Inserting 74    Inserting 42    Inserting 77    Inserting 38    Inserting 23    Inserting 86    Inserting 28    Inserting 74
Inserting 0     Inserting 37    Inserting 87    Inserting 89    Inserting 59    Inserting 60    Inserting 69    Inserting 95
Inserting 88    Inserting 19    Inserting 19    Inserting 73    Inserting 58    Inserting 65    Inserting 56    Inserting 90
Inserting 75    Inserting 12    Inserting 46    Inserting 92    Inserting 25    Inserting 12    Inserting 50    Inserting 3
Inserting 71    Inserting 51    Inserting 66    Inserting 16    Inserting 84    Inserting 32    Inserting 4     Inserting 70
Inserting 97    Inserting 83    Inserting 18    Inserting 61    Inserting 73    Inserting 98    Inserting 85    Inserting 81
Inserting 43    Inserting 29    Inserting 59    Inserting 13    Inserting -4    Inserting 14    Inserting 36    Inserting 94
Inserting 4     Inserting 13    Inserting 40    Inserting 40    Inserting 49    Inserting 48    Inserting 22    Inserting 71
Inserting 85    Inserting 95    Inserting 31    Inserting 97    Inserting 34    Inserting 21    Inserting 59    Inserting 25
Inserting 97    Inserting 66    Inserting 10    Inserting 36    Inserting 31    Inserting 24    Inserting 46    Inserting 0
Inserting 75    Inserting 43    Inserting 25    Inserting 88    Inserting 30    Inserting 16    Inserting 60    Inserting 10
Inserting 58    Inserting 59    Inserting 17    Inserting 80    Inserting 71    Inserting 97    Inserting 76    Inserting 99
Inserting 48    Inserting 95    Inserting 5     Inserting 59    Inserting 88    Inserting 48    Inserting 59    Inserting 20
Inserting 99    Inserting 16    Inserting 63    Inserting 56    Inserting 74    Inserting 55    Inserting 42    Inserting 39
Inserting 98    Inserting 82    Inserting 46    Inserting 47    Inserting 71    Inserting 83    Inserting 67    Inserting 38
Inserting 29    Inserting 57    Inserting 6     Inserting 43    Inserting 95    Inserting 47    Inserting 93    Inserting 0
Inserting 23    Inserting 24    Inserting 74    Inserting 69    Inserting 87    Inserting 27    Inserting 88    Inserting 23
Inserting 81    Inserting 24    Inserting 96    Inserting 80    Inserting 77    Inserting 8     Inserting 29    Inserting 30
Inserting 70    Inserting 69    Inserting 11    Inserting 72    Inserting 9     Inserting 5     Inserting 20    Inserting 28
Inserting 42    Inserting 30    Inserting 72    Inserting 60    Inserting 46    Inserting 2     Inserting 77    Inserting 65
Inserting 27    Inserting 32    Inserting 38    Inserting 25    Inserting 20    Inserting 59    Inserting 11    Inserting 51
Inserting 84    Inserting 60    Inserting 40    Inserting 14    Inserting 44    Inserting 3     Inserting 43    Inserting 12
Inserting 84    Inserting 61    Inserting 61    Inserting 40    Inserting 26    Inserting 70    Inserting 94    Inserting 35
Inserting 82    Inserting 95    Inserting 61    Inserting 24    Inserting 76    Inserting 88    Inserting 8     Inserting 24
Inserting 47    Inserting 95    Inserting 87    Inserting 59    Inserting 68    Inserting 15    Inserting 25    Inserting 46
Inserting 61    Inserting 12    Inserting 2     Inserting 6     Inserting 85    Inserting 98    Inserting 63    Inserting 10
Inserting 83    Inserting 19    Inserting 3     Inserting 71    Inserting 14    Inserting 24    Inserting 58    Inserting 15
Inserting 24    Inserting 87    Inserting 43    Inserting 28    Inserting 90    Inserting 27    Inserting 78    Inserting 60
Inserting 21    Inserting 17    Inserting 30    Inserting 32    Inserting 37    Inserting 88    Inserting 55    Inserting 99
Inserting 39    Inserting 11    Inserting 43    Inserting 57    Inserting 51    Inserting 4     Inserting 75    Inserting 90
Inserting 55    Inserting 68    Inserting 10    Inserting 97    Inserting 90    Inserting 31    Inserting 28    Inserting 5
Inserting 95    Inserting 84    Inserting 93    Inserting 60    Inserting 43    Inserting 9     Inserting 41    Inserting 16
Inserting 7     Inserting 57    Inserting 24    Inserting 96    Inserting 28    Inserting 64    Inserting 24    Inserting 93
Inserting 49    Inserting 66    Inserting 28    Inserting 97    Inserting 56    Inserting 28    Inserting 85    Inserting 34
Inserting 53    Inserting 86    Inserting 56    Inserting 15    Inserting 73    Inserting 68    Inserting 33    Inserting 36
Inserting 29    Inserting 79    Inserting 67    Inserting 77    Inserting 54    Inserting 26    Inserting 50    Inserting 50
Inserting 17    Inserting 3     Inserting 65    Inserting 50    Inserting 79    Inserting 69    Inserting 68    Inserting 8
Inserting 66    Inserting 93    Inserting 94    Inserting 75    Inserting 51    Inserting 10    Inserting 24    Inserting 89
Inserting 91    Inserting 92    Inserting 15    Inserting 64    Inserting 70    Inserting 25    Inserting 38    Inserting 34
Inserting 61    Inserting 58    Inserting 21    Inserting 24    Inserting 98    Inserting 8     Inserting 4     Inserting 88
Inserting 39    Inserting 79    Inserting 78    Inserting 52    Inserting 52    Inserting 22    Inserting 33    Inserting 23
Inserting 19    Inserting 49    Inserting 77    Inserting 24    Inserting 87    Inserting 77    Inserting 14    Inserting 37
Inserting 73    Inserting 67    Inserting 9     Inserting 87    Inserting 15    Inserting 41    Inserting 75    Inserting 52
Inserting 6     Inserting 28    Inserting 19    Inserting 47    Inserting 9     Inserting 20    Inserting 80    Inserting 29
Inserting 29    Inserting 92    Inserting 66    Inserting 34    Inserting 93    Inserting 68    Inserting 11    Inserting 92
Inserting 7     Inserting 62    Inserting 67    Inserting 27    Inserting 29    Inserting 86    Inserting 19    Inserting 38
Inserting 87    Inserting 60    Inserting 21    Inserting 13    Inserting 22    Inserting 36    Inserting 47    Inserting 87
Inserting 87    Inserting 38    Inserting 91    Inserting 44    Inserting 64    Inserting 62    Inserting 81    Inserting 34
Inserting 84    Inserting 14    Inserting 66    Inserting 76    Inserting 38    Inserting 29    Inserting 61    Inserting 21
Inserting 91    Inserting 66    Inserting 26    Inserting 67    Inserting 68    Inserting 1     Inserting 59    Inserting 93
Inserting 40    Inserting 38    Inserting 47    Inserting 25    Inserting 93    Inserting 90    Inserting 30    Inserting 38
Inserting 41    Inserting 60    Inserting 74    Inserting 4     Inserting 80    Inserting 30    Inserting 63    Inserting 77
Inserting 85    Inserting 8     Inserting 50    Inserting 73    Inserting 86    Inserting 15    Inserting 66    Inserting 8
Inserting 90    Inserting 32    Inserting 23    Inserting 74    Inserting 69    Inserting 45    Inserting 9     Inserting 83
Inserting 60    Inserting 20    Inserting 26    Inserting 50    Inserting 33    Inserting 13    Inserting 46    Inserting 40
Inserting 73    Inserting 63    Inserting 2     Inserting 95    Inserting 86    Inserting 77    Inserting 81    Inserting 86
Inserting 31    Inserting 82    Inserting 45    Inserting 67    Inserting 20    Inserting 71    Inserting 78    Inserting 93
Inserting 45    Inserting 5     Inserting 37    Inserting 58    Inserting 22    Inserting 88    Inserting 58    Inserting 29
Inserting 29    Inserting 46    Inserting 98    Inserting 35    Inserting 27    Inserting 61    Inserting 41    Inserting 38
Inserting 96    Inserting 43    Inserting 89    Inserting 36    Inserting 11    Inserting 38    Inserting 17    Inserting 32
Inserting 28    Inserting 96    Inserting 97    Inserting 73    Inserting 1     Inserting 71    Inserting 95    Inserting 66
Inserting 0     Inserting 29    Inserting 80    Inserting 37    Inserting 40    Inserting 18    Inserting 60    Inserting 23
Inserting 93    Inserting 44    Inserting 42    Inserting 47    Inserting 23    Inserting 43    Inserting 31    Inserting 45
Inserting 12    Inserting 49    Inserting 48    Inserting 10    Inserting 51    Inserting 57    Inserting 20    Inserting 14
Inserting 84    Inserting 86    Inserting 47    Inserting 62    Inserting 2     Inserting 54    Inserting 31    Inserting 84
Inserting 46    Inserting 97    Inserting 82    Inserting 51    Inserting 48    Inserting 37    Inserting 38    Inserting 79
Inserting 95    Inserting 22    Inserting 51    Inserting 49    Inserting 74    Inserting 79    Inserting 50    Inserting 35
Inserting 79    Inserting 64    Inserting 14    Inserting 78    Inserting 46    Inserting 73    Inserting 31    Inserting 95
Inserting 48    Inserting 49    Inserting 58    Inserting 53    Inserting 18    Inserting 13    Inserting 19    Inserting 54
Inserting 76    Inserting 67    Inserting 1     Inserting 76    Inserting 20    Inserting 47    Inserting 82    Inserting 64
Inserting 92    Inserting 61    Inserting 75    Inserting 9     Inserting 86    Inserting 44    Inserting 69    Inserting 16
Inserting 22    Inserting 77    Inserting 95    Inserting 17    Inserting 39    Inserting 7     Inserting 24    Inserting 31
Inserting 59    Inserting 44    Inserting 46    Inserting 49    Inserting 21    Inserting 8     Inserting 95    Inserting 18
Inserting 11    Inserting 14    Inserting 94    Inserting 14    Inserting 9     Inserting 60    Inserting 2     Inserting 46
Inserting 92    Inserting 32    Inserting 3     Inserting 88    Inserting 26    Inserting 61    Inserting 21    Inserting 48
Inserting 30    Inserting 22    Inserting 29    Inserting 65    Inserting 44    Inserting 18    Inserting 27    Inserting 53
Inserting 40    Inserting 54    Inserting 74    Inserting 81    Inserting 81    Inserting 52    Inserting 31    Inserting 99
Inserting 33    Inserting 50    Inserting 12    Inserting 95    Inserting 32    Inserting 97    Inserting 74    Inserting 8
Inserting 74    Inserting 13    Inserting 27    Inserting 51    Inserting 39    Inserting 86    Inserting 87    Inserting 35
Inserting 95    Inserting 96    Inserting 75    Inserting 0     Inserting 94    Inserting 52    Inserting 62    Inserting 38
Inserting 99    Inserting 57    Inserting 41    Inserting 11    Inserting 40    Inserting 8     Inserting 40    Inserting 64
Inserting 89    Inserting 77    Inserting 53    Inserting 48    Inserting 33    Inserting 12    Inserting 39    Inserting 2
Inserting 30    Inserting 37    Inserting 25    Inserting 63    Inserting 24    Inserting 41    Inserting 98    Inserting 60
Inserting 60
(((( -4 0 (0) ((1) 1 1)) 1 ((((2 2) 2 2) 2 2) 2 2) 2 (((((3) 3 3) 3 3) 3 3) 3 ((((4 4) 4 4) 4 4) 4 ((5 5) 5 5) 5) 5 (((6) 6 6) 6 6))) 6 (((7 7) 7 7) 7 7 (((((((8 8) 8 8) 8 8) 8 8) 8 8) 8 ((((9 9) 9 9) 9 9) 9 9) 9 (((((10 10) 10 10) 10 10) 10 10) 10 10)) 10 10)) 10 ((((((11 11) 11 11) 11 11) 11 11) 11 11) 11 (((((12 12) 12 12) 12 12) 12 12) 12 12) 12)) 12 (((((((13) 13 13) 13 13) 13 13) 13 13) 13 ((((((((14) 14 14) 14 14) 14 14) 14 14) 14 14) 14 14) 14 ((((((15) 15 15) 15 15) 15 15) 15 15) 15 ((((16 16) 16 16) 16 16) 16 16) 16) 16 (((((17) 17 17) 17 17) 17 17) 17 ((((18 18) 18 18) 18 18) 18 18) 18)) 18 ((((((19) 19 19) 19 19) 19 19) 19 19) 19 (((((((20 20) 20 20) 20 20) 20 20) 20 20) 20 20) 20 20) 20)) 20 ((((((((21) 21 21) 21 21) 21 21) 21 21) 21 21 ((((22 22) 22 22) 22 22) 22 22)) 22 22 ((((23 23) 23 23) 23 23) 23 23 (((((((24 24) 24 24) 24 24) 24 24) 24 24) 24 24) 24 24))) 24 ((((((25 25) 25 25) 25 25) 25 25) 25 25) 25 25) 25 ((((((26 26) 26 26) 26 ((27 27) 27 27) 27) 27 27) 27 27) 27 27)) 27 ((((((((((28 28) 28 28) 28 28) 28 28) 28 28) 28 28) 28 ((((((29 29) 29 29) 29 29) 29 29) 29 29) 29 29) 29) 29 (((((30 30) 30 30) 30 30) 30 30) 30 30) 30 ((((((31 31) 31 31) 31 31) 31 31) 31 31) 31 31)) 31 (((((((32) 32 32) 32 32) 32 32) 32 32) 32 32) 32 32) 32) 32 ((((((33) 33 33) 33 33) 33 33) 33 33) 33 (((((34 34) 34 34) 34 ((35) 35 35) 35) 35 35 (((36) 36 36) 36 36)) 36 36) 36) 36)) 36 (((((((37 37) 37 37) 37 37) 37 37) 37 37 ((((((((38 38) 38 38) 38 38) 38 38) 38 38) 38 38) 38 38) 38 38)) 38 38) 38 ((((39) 39 39) 39 39) 39 39) 39 ((((((40 40) 40 40) 40 40) 40 40) 40 40 (((41 41) 41 41) 41 41)) 41 ((42) 42 42) 42))) 42 ((((((((43 43) 43 43) 43 43) 43 43) 43 43) 43 (((((44) 44 44) 44 44) 44 44) 44 44) 44) 44 (((45 45) 45 45) 45 45) 45 (((((((46 46) 46 46) 46 46) 46 46) 46 46) 46 46) 46 46)) 46 ((((((((47 47) 47 47) 47 47) 47 47) 47 47) 47 47) 47 47) 47 ((((((48) 48 48) 48 48) 48 48) 48 48) 48 48 ((((49 49) 49 49) 49 49) 49 49)) 49 ((((((50) 50 50) 50 50) 50 50) 50 50) 50 (((((51 51) 51 51) 51 51) 51 51) 51 51) 51)) 51 ((((52) 52 52) 52 52) 52 (((((53 53) 53 53) 53 53) 53 53) 53 ((((54) 54 54) 54 54) 54 54) 54 (((55 55) 55 55) 55 55 ((56 56) 56 56))) 56)) 56 (((((((((57 57) 57 57) 57 (((58) 58 58) 58 58) 58) 58 58) 58 ((((((59) 59 59) 59 59) 59 59) 59 59) 59 59) 59) 59 59 ((((((((60 60) 60 60) 60 60) 60 60) 60 60) 60 60) 60 60) 60 ((((((61 61) 61 61) 61 61) 61 61) 61 61) 61 61) 61 (((62) 62 62) 62 62))) 62 (((((63) 63 63) 63 63) 63 63) 63 (((((((64) 64 64) 64 64) 64 (65 65) 65) 65 65) 65 (((((66) 66 66) 66 66) 66 66) 66 66) 66 (((((67) 67 67) 67 67) 67 67) 67 67)) 67 67) 67 ((((((68) 68 68) 68 68) 68 68) 68 68) 68 (((((((69) 69 69) 69 69) 69 69) 69 69) 69 69) 69 69) 69 (((70) 70 70) 70 70))) 70) 70 (((((71 71) 71 71) 71 71) 71 71) 71 (((72) 72 72) 72 72) 72) 72 ((((((73) 73 73) 73 73) 73 73) 73 73) 73 73)) 73 ((((((((74 74) 74 74) 74 74) 74 74) 74 74) 74 74) 74 74 ((((75) 75 75) 75 75) 75 75)) 75 75 (((((((76) 76 76) 76 76) 76 76) 76 76) 76 (((((((77 77) 77 77) 77 77) 77 77) 77 77) 77 77) 77 77) 77) 77 77)) 77 (((((((78) 78 78) 78 78) 78 78) 78 (((((((79 79) 79 79) 79 79) 79 79) 79 79) 79 79 (((80 80) 80 80) 80 80)) 80 ((((81) 81 81) 81 81) 81 81) 81 (((82 82) 82 82) 82 82)) 82 (((((83) 83 83) 83 83) 83 ((((84 84) 84 84) 84 84) 84 84) 84) 84 84)) 84 ((((((85 85) 85 85) 85 85) 85 85) 85 85) 85 (((((((86 86) 86 86) 86 86) 86 86) 86 86) 86 86) 86 (((((((87 87) 87 87) 87 87) 87 87) 87 87) 87 (((((88) 88 88) 88 88) 88 88) 88 88) 88) 88 88) 88 ((((89) 89 89) 89 89) 89 89)) 89) 89 ((((((90) 90 90) 90 90) 90 90) 90 90) 90 ((((91 91) 91 91) 91 91) 91 91) 91 ((((((92) 92 92) 92 92) 92 92) 92 92) 92 (((((93 93) 93 93) 93 93) 93 93) 93 93) 93 ((((94 94) 94 94) 94 94) 94 ((((((((95 95) 95 95) 95 95) 95 95) 95 95) 95 95) 95 95) 95 95) 95)))) 95 ((((96 96) 96 96) 96 96) 96 96) 96 ((((((((97) 97 97) 97 97) 97 97) 97 97) 97 97) 97 97) 97 (((((98 98) 98 98) 98 98) 98 98) 98 98) 98 ((((99 99) 99 99) 99 99) 99 99))))
Press any key to continue . . .

