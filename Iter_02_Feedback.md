### Feedback for Iter 02

Run on November 13, 14:00:39 PM.


### Basic Tests on Devel

+ Pass: Checkout devel branch



<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will possibly be updated to contain more tests as they are developed. Check back periodically for more feedback as well as for your updated results.

<hr>


#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.

+ Pass: Change into directory "project/src".

+ Fail: Compiling capture_transit_sim target of the src/ makefile...

<pre>PROJECTNAME = capture_transit_sim
make: PROJECTNAME: Command not found
makefile:150: recipe for target 'capture_transit_sim' failed
make: *** [capture_transit_sim] Error 127
</pre>



+ Skip: Check that file "../build/bin/capture_transit_sim" exists.

  This test was not run because of an earlier failing test.


#### Style Checking All src/ Files

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors Found: 0 errors, Expected 0.

+ Pass: Restoring mainpage.h




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		a9c5b1535f3aa0d489612f736f5eaa79de17d987	refs/heads/devel

		8960f5b87bb57f5dbb449b5dd2f5f467a05d0716	refs/heads/fix/01-compilation-errors

		5ec2491ea7cf90b04ceffdafdcdef92191c41f55	refs/heads/fix/02-compilation-errors

		ace9658f51a2f6aae81b82a9674600d7db979e66	refs/heads/master



<hr>

Gathered all branches in this repo. Note that passing this test does *not* mean that a sufficient amount of branches were found.

<hr>

