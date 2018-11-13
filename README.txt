Description

Assignment 1.2:

Project:                    PlaylistOptimizer
Language of implementation: C++
Framework for unit-testing: Google Test
Framework for Mocking:      Google Mock
Code coverage tool:         GNU Gcov & Lcov

PlaylistOptimizer is a project developed during the course Software Testing (LNU HT2018).
You can create different playlist based on your preferences, the input of these playlist are .mp3 files, to sort them they will have linked variables such as: mood, length, year, etc. The program has a CommandLine interface.
The goals of this project are:

- Understand TDD (Test Driven Development) and apply it in this project.
- Getting and showing expertise in the following frameworks and tools: Google Test, Google Moch, Gcov & Lcov.

----------------------------------------------------------------------------------------------------------------------------
Requirements:
 
In order to get a higher grade you need to show that you have:

Made commits to GitHub using a specific pattern that shows that you have worked using TDD, (at least 20 commits.)
Make sure you are working in “Test Driven Development” manner. Make a git-commit after each step:
Red: Write a test that fails. Make a commit with the word “RED” in commit message.
Green: Change the implementation so that the test-suite succeeds. Make a commit with the word “GREEN”.
Refactor: Rewrite the code. Make a commit with the word “REFACTOR”.
At some point do a coverage measurement. If you make a code-coverage measurement do a commit separately for that named “COVERAGE”, make sure you save the measurement as a file in your GitHub repository. Could be a text file or a screenshot-image.

Show a project of proper size and complexity that illustrates your proficiency in the techniques.
Our criteria is:
In the final project show at least 4 SUT-classes with dependencies. The more classes the better
You have used dependency injection
You needed to mock or isolate dependencies so that only bugs in the class under test trigger a failing test and not a bug in other classes.
Objects of classes are created, not only during setup
The project has a UI (Console, GUI, or web)
Understand TDD, unit-testing, mocking and coverage
Show expertice in the use of the XUnit framework, Mocking framework, coverage tool
Test behaviour using mocks
Show the use of different type of mocking
Use a Code coverage tool

----------------------------------------------------------------------------------------------------------------------------
Documentation used:

https://www.srcmake.com/home/google-cpp-test-framework
https://github.com/google/googletest/blob/master/googletest/docs/primer.md
https://github.com/bast/gtest-demo