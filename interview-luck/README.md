# Interview Luck Balance

You are preparing for an important interview with a company but you have a lot of interviews
with other companies before this one. Sadly, you believe in “Saving your Luck”. As you must
balance your luck, let’s test your theory.

Suppose each interview is described by two integers, `L[ i ]`, and `T[ i ]`.
`L[ i ]` is the amount of luck associated with an interview. If you passed this interview, your luck
balance will be decreased by `L[ i ]`, if you neglected the interview, then your luck balance will be
increased by `L[ i ]`.
`T[ i ]` is the interview importance rating. If important, it’s equal to 1 and 0, if not important.
Given that K is the maximum amount of the important interviews you can neglect, what is the
maximum amount of luck you can have after finishing all of your interviews if you are not going
to attend more than K important interviews (this is may be a negative value).
For example, K=2, and
Interview `L[ i ]` `T[ i ]`
1 5 1

2 1 1
3 4 0
If you neglect in all the three interviews, your luck will be 5+1+4= 10. That’s because you are
allowed to neglect 2 important interviews and in this example, there are only two important
interviews. So you can maximize your luck by not attending all of them.

Input Format:
The first line contains two space-separated integers n and K, the number of interviews
other than the one with a company and the maximum number of important interviews
you can neglect.
Each of the next lines contains two space-separated integers, `L[ i ]` and `T[ i ]`, the
interview’s luck balance and its importance rating.
Output Format:
Print a single line denoting the maximum amount of luck you have after these
interviews.
Example:
Sample Input:
| Tables        | Are           | Cool  |
| ------------- |:-------------:| -----:|
| 6      | right-aligned | $1600 |
| 5      | centered      |   $12 |
| zebra stripes | are neat      |    $1 |

| | |
| --- | ---|
| 6  | 3 |
| 5  | 1 |
| 2  | 1 |
| 1  | 1 |
| 8  | 1 |
| 10 | 0 |
| 5  | 0 |

Sample Output:
29

Justification:
There are n=6 interviews, 4 are important and 2 are not important.
You can’t neglect more than 3 interviews.

You maximize your luck by attending the third important interview where `L[ i ]=1`
and neglect all other interviews.
So your luck balance is 5+2+8+10+5-1 = 29