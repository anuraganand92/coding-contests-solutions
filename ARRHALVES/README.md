Chef has a permutation PP of length 2⋅N2⋅N. He can perform the following operation on PP:

    Select an index ii (1≤i<2⋅N)(1≤i<2⋅N) and swap PiPi​ and Pi+1Pi+1​.

Chef would call the permutation PP good, if the maximum element of the first half of PP is less than the minimum element of the second half of PP.
Formally max⁡(1≤i≤N)Pi<min⁡(N<i≤2⋅N)Pi(1≤i≤N)max​Pi​<(N<i≤2⋅N)min​Pi​.

Find the minimum number of operations Chef needs to apply to make PP good.

Note: A permutation of length NN is an array where every integer from 11 to NN occurs exactly once.