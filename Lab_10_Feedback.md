### Feedback for Lab 10

Run on October 18, 02:30:44 AM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

e94b05bab14a1947b2bc7ff10bc993e5c4127fc0	refs/heads/devel

8960f5b87bb57f5dbb449b5dd2f5f467a05d0716	refs/heads/fix/01-compilation-errors

19490fd709fc970c8eb80cc35be678681de22469	refs/heads/fix/02-compilation-errors

9fa22fdabe722521e4ae3804759c0aeb3c6ac359	refs/heads/master



+ Pass: Checking for the correct number of branches

Sufficient branches found (found=2, required=2):

fix/01-compilation-errors

fix/02-compilation-errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

[Mootii] 2019-10-17 (HEAD -> devel, origin/devel) Merge branch 'fix/01-compilation-errors' into devel fixed


[Mootii] 2019-10-17 (origin/fix/01-compilation-errors, fix/01-compilation-errors) fix(local_simulator.cc) <changed . to -> on calls to object pointer> 

[Mootii] 2019-10-17 Merge branch 'support-code' 

[Mootii] 2019-10-17 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-F19/csci3081-shared-upstream into support-code 

[Mootii] 2019-10-17 lol 


[Mootii] 2019-10-17 lol 


[Mootii] 2019-10-17 Merge branch 'master' of github.umn.edu:umn-csci-3081-f19/repo-mamox017 

[Mootii] 2019-10-17 lol 


[Mootii] 2019-10-17 lol 



[Mootii] 2019-10-17 Merge branch 'master' of github.umn.edu:umn-csci-3081-f19/repo-mamox017 

[Mootii] 2019-10-17 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-F19/csci3081-shared-upstream 
























+ Pass: Check git commit history
Sufficient commits (found=12,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of closed issues in Github repo (Found: 0)

+ Fail: Run ghi for total number of issues in Github repo (Found: 0, Expected: 2) 

 [OPEN issue #] : 

[CLOSED issue #] : 

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+ Pass: Change into directory "project".

+ Pass: Check that file "makefile" exists.

+ Pass: Check that make compiles.



