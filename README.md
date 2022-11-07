# super-duper-octo-bitflip

Assignment 4

Write a C program called bitflip to run on ocelot which will flip bits in an unsigned integer using the binary representation of the number. The user should input the original integer value between 1 and 20000 inclusive on the command line as well as the desired options. Use an unsigned integer type uint16\_t. Output is to the screen or to a file. You must use only bitwise operators for this program. You can shift bits and or use the logical bitwise operators.

usage: bitflip [-e] [-f] [-a] [-s] [-o outputfilename] intval

Output the new integer number(s) depending on which options are requested (all aperations done on the original intval). Do not use any break or continue statements other than in the switch.

`    `You should use getopt for this program to identify the options.

`    `The program will always print the starting value on the first line of output and each other value on a new line, clearly identifying it.

`    `If the -e option is selected then flip all even bits.

`    `If the -f option is selected then flip all odd bits.

`    `If the -a option is selected then flip all bits.

`    `If the -s option is selected then take the bits and switch them around from right to left. (The rightmost bit becomes the leftmost bit.

`    `If the -o option is selected then print the output to an output file instead of to the screen.

`    `If an option is included more than once, you can ignore duplicates.

The source file should have your name & Panther ID, a description and it should have the affirmation of originality included in a comment at the top.

Code should be nicely indented and commented.

Create a simple Makefile to compile your program into an executable called bitflip.

A sample of a run of the program could be something like this:

crahn@ocelot:~/ 135% bitflip -s -a -e -f 391

Value: 391

Even bits flipped: 21714

Odd bits flipped: 43821

All bits flipped: 65144

Switched all bits: 57728



Submit your source file and your Makefile in one zip file called FirstnameLastnameA4.zip to the assignment Submission Link in Canvas.

If the program does not compile using your Makefile and do something useful when it runs it will not earn any credit.





Assignment 4 Fall 2022

|Assignment 4 Fall 2022 |
| :- |
|**Criteria**|**Ratings**|**Pts** |
|This criterion is linked to a Learning Outcome Zip File named FirstNameLastNameA4.zip using the student name. |

|<p>5 pts </p><p>Meets Requirements</p><p>Submission file named exactly as specified.</p>|<p>3 pts </p><p>Minor Errors</p><p>Submission file has extra spaces, underscores or characters in the name</p>|<p>0 pts </p><p>Needs Improvement</p><p>Submission file not as specified.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Makefile named Makefile. |||

|<p>5 pts </p><p>Meets Requirements</p><p>Makefile named correctly with proper capitalization.</p>|<p>3 pts </p><p>Minor Errors</p><p>Makefile spelled with a lower case m as in makefile</p>|<p>0 pts </p><p>Needs Improvement</p><p>No Makefile included.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Typing make at the command line should create executable named bitflip. |||

|<p>5 pts </p><p>Meets Requirements</p><p>Typing make at the command line creates an executable file name as specified.</p>|<p>3 pts </p><p>Minor Errors</p><p>Typing make at the command line creates an executable named anything close to that specified.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Typing make at the command line creates an executable named anything else.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Make file should include a clean target which removed .o files. |||

|<p>5 pts </p><p>Meets Requirements</p><p>A clean target is included in the Makefile.</p>|<p>3 pts </p><p>Minor Errors</p><p>The clean target is included, but it does not remove the needed files.</p>|<p>0 pts </p><p>Needs Improvement</p><p>The clean target is not included.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome There should be no warnings during compile on ocelot. |||

|<p>5 pts </p><p>Meets Requirements</p><p>There were no warnings when compiling on ocelot.</p>|<p>3 pts </p><p>Minor Errors</p><p>Program has 1-2 warnings when running on ocelot.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Program has 3 or more warnings when running on ocelot.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Only bitflip.c and Makefile are included in the input unless permission is given for any other files. This includes additional directories. Extracting all files from your zip file should show only those listed files. |||

|<p>2 pts </p><p>Meets Requirements</p><p>Only the requested files were included.</p>|<p>1 pts </p><p>Minor Errors</p><p>Other files of folders were included.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Not submitted as directed.</p>|
| :- | :- | :- |

|||2 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Comment at the top of the file needs student name |||

|<p>4 pts </p><p>Meets Requirements</p><p>Student name was included.</p>|<p>0 pts </p><p>Minor Errors</p><p>Student name was not included.</p>|<p>0 pts </p><p>Needs Improvement</p><p>N/A</p>|
| :- | :- | :- |

|||4 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Comment at the top of the file needs the affirmation of Originality |||

|<p>2 pts </p><p>Meets Requirements</p><p>Affirmation of originality was included.</p>|<p>0 pts </p><p>Minor Errors</p><p>Affirmation of originality was not included.</p>|<p>0 pts </p><p>Needs Improvement</p><p>N/A</p>|
| :- | :- | :- |

|||2 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Comment at the top needs a program description |||

|<p>2 pts </p><p>Meets Requirements</p><p>A good program description was included.</p>|<p>1 pts </p><p>Minor Errors</p><p>A description was included, but it was not detailed enough.</p>|<p>0 pts </p><p>Needs Improvement</p><p>No program description was included.</p>|
| :- | :- | :- |

|||2 pts|
| :- | :- | :- |
|<p>This criterion is linked to a Learning Outcome Program should have consistent indentation. </p><p>Consistent indentation with curly braces lined up in either of the two standard formats. They can be lined up right above each other or the opening curly brace can be on the right end of the line above with the block begins.</p>|||

|<p>5 pts </p><p>Meets Requirements</p><p>The program was indented well and curly braces were consistent.</p>|<p>3 pts </p><p>Minor Errors</p><p>Indentation not consistent in one or two places.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Indentation not consistent in three or more places.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Program should have good comments throughout the body and describing each function. |||

|<p>5 pts </p><p>Meets Requirements</p><p>Good comments are included throughout the program in the body of the functions and at the top of each function.</p>|<p>3 pts </p><p>Minor Errors</p><p>Some comments are included, but more are needed.</p>|<p>0 pts </p><p>Needs Improvement</p><p>No comments are included.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Code should be readable with good variable and function names. |||

|<p>5 pts </p><p>Meets Requirements</p><p>Variable and function names are well thought out.</p>|<p>3 pts </p><p>Minor Errors</p><p>Variable and function names have minor problems.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Variable and function names are not good.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome No use of break or continue statements except in a switch. |||

|<p>5 pts </p><p>Meets Requirements</p><p>There were no break or a continue statements other than breaks in a switch statement.</p>|<p>3 pts </p><p>Minor Errors</p><p>A break or a continue statement was used in the program other than in a switch statement.</p>|<p>0 pts </p><p>Needs Improvement</p><p>More than one break or continue statements were used or not submitted as requested.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Program must exit with a return code of 0 on success and an error code in other cases. |||

|<p>5 pts </p><p>Meets Requirements</p><p>Program exits with a 0 on success and an error code for other cases.</p>|<p>3 pts </p><p>Minor Errors</p><p>Program exits with a 0 on success, but not a good error code on failure.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Program does not exit with a 0 on success and an error code for other cases.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome The program used getopt to parse the command line. |||

|<p>10 pts </p><p>Meets Requirements</p><p>The program used getopt using the sample code provided.</p>|<p>5 pts </p><p>Minor Errors</p><p>The program used getopt incorrectly.</p>|<p>0 pts </p><p>Needs Improvement</p><p>The program did not use getopt.</p>|
| :- | :- | :- |

|||10 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Whenever an error occurs on the command line the user is given the usage statement and an appropriate error message if needed. |||

|<p>5 pts </p><p>Meets Requirements</p><p>The usage statement was included wherever needed.</p>|<p>3 pts </p><p>Minor Errors</p><p>The usage statement is included only some times.</p>|<p>0 pts </p><p>Needs Improvement</p><p>The usage statement is not included when needed.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome If the -o option is used the output will go to a file named as specified without changing the filename at all otherwise it will go to stdout. |||

|<p>5 pts </p><p>Meets Requirements</p><p>The -o option is used properly with the output going to a file otherwise it goes to stdout.</p>|<p>3 pts </p><p>Minor Errors</p><p>The -o option runs with minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>The -o option does not work.</p>|
| :- | :- | :- |

|||5 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome -e option works as specified using bitwise operations. |||

|<p>10 pts </p><p>Meets Requirements</p><p>Test case works as expected.</p>|<p>6 pts </p><p>Minor Errors</p><p>Test case works with minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Test case did not work.</p>|
| :- | :- | :- |

|||10 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome -f option works as specified using bitwise operations. |||

|<p>10 pts </p><p>Meets Requirements</p><p>Test case works as expected.</p>|<p>6 pts </p><p>Minor Errors</p><p>Test case works with minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Test case did not work.</p>|
| :- | :- | :- |

|||10 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome -a option works as specified using bitwise operations. |||

|<p>10 pts </p><p>Meets Requirements</p><p>Test case works as expected.</p>|<p>6 pts </p><p>Minor Errors</p><p>Test case works with minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Test case did not work.</p>|
| :- | :- | :- |

|||10 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome -s option works as specified using bitwise operations. |||

|<p>10 pts </p><p>Meets Requirements</p><p>Test case works as expected.</p>|<p>6 pts </p><p>Minor Errors</p><p>Test case works with minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Test case did not work.</p>|
| :- | :- | :- |

|||10 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Program outputs only the original value if none of the bitwise options are included. |||

|<p>10 pts </p><p>Meets Requirements</p><p>Test case works as expected.</p>|<p>6 pts </p><p>Minor Errors</p><p>Test case works with minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Test case did not work.</p>|
| :- | :- | :- |

|||10 pts|
| :- | :- | :- |
|This criterion is linked to a Learning Outcome Program should work as specified with no additional changes or output. |||

|<p>20 pts </p><p>Meets Requirements</p><p>Program works as specified with no other input or output.</p>|<p>12 pts </p><p>Minor Errors</p><p>Program has minor errors.</p>|<p>0 pts </p><p>Needs Improvement</p><p>Program has major errors.</p>|
| :- | :- | :- |

|||20 pts|
| :- | :- | :- |
|Total Points: 150|

