### Feedback for Iter 02

Run on November 14, 13:51:51 PM.


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

<pre>make: *** No rule to make target 'capture_transit_sim'.  Stop.
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

		19609a52da1af9e3fea3431ab0ce8a31de66477b	refs/heads/devel

		8960f5b87bb57f5dbb449b5dd2f5f467a05d0716	refs/heads/fix/01-compilation-errors

		5ec2491ea7cf90b04ceffdafdcdef92191c41f55	refs/heads/fix/02-compilation-errors

		cf034d160f9a7e63db0acdde9a141b00ba1acdcd	refs/heads/master



<hr>

Gathered all branches in this repo. Note that passing this test does *not* mean that a sufficient amount of branches were found.

<hr>

