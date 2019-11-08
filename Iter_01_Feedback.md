### Feedback for Iteration 1

Run on November 07, 23:26:35 PM.

<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will likely be updated to contain more tests as they are developed. Check back periodically for more feedback. Take note that these tests are _incredibly slow_ because of the time it takes to compile 4 executables.

<hr>


### Basic Tests on Devel

+ Pass: Checkout devel branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Pass: Check that make compiles.



+ Pass: Check that file "build/bin/transit_sim" exists.

+ Pass: Change into directory "tests".

+ Pass: Check that make compiles.



+ Pass: Check that file "../build/bin/unittest" exists.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors (Found: 0 errors)

+ Pass: Restoring mainpage.h



+ Pass: Change into directory "..".


#### Doxygen Tests

+ Pass: Change into directory "docs/".


##### .gitignore configured properly

+ Fail: Check that file/directory "html" does not exist.

     "html" found.

+ Fail: Check that file/directory "latex" does not exist.

     "latex" found.

+ Pass: Check that file "Doxyfile" exists.

+ Pass: Generating documentation by running doxygen

+ Pass: Check that directory "html" exists.

+ Pass: Check that file "html/classPassenger.html" exists.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Basic Tests on Master

+ Pass: Checkout master branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Pass: Check that make compiles.



+ Pass: Check that file "build/bin/transit_sim" exists.

+ Pass: Change into directory "tests".

+ Pass: Check that make compiles.



+ Pass: Check that file "../build/bin/unittest" exists.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors (Found: 0 errors)

+ Pass: Restoring mainpage.h



+ Pass: Change into directory "..".


#### Doxygen Tests

+ Pass: Change into directory "docs/".


##### .gitignore configured properly

+ Fail: Check that file/directory "html" does not exist.

     "html" found.

+ Fail: Check that file/directory "latex" does not exist.

     "latex" found.

+ Pass: Check that file "Doxyfile" exists.

+ Pass: Generating documentation by running doxygen

+ Pass: Check that directory "html" exists.

+ Pass: Check that file "html/classPassenger.html" exists.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		38adabfb9e50fc379bcfa701cd57d53bd01a3dd1	refs/heads/devel

		8960f5b87bb57f5dbb449b5dd2f5f467a05d0716	refs/heads/fix/01-compilation-errors

		5ec2491ea7cf90b04ceffdafdcdef92191c41f55	refs/heads/fix/02-compilation-errors

		4aa78d973278bcd253fd2f72e6c51578eb73f7db	refs/heads/master



