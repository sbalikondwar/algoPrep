# algoPrep

## DS Algo
- 450 [list](https://drive.google.com/file/d/1FMdN_OCfOI0iAeDlqswCiC2DZzD4nPsb/view)

# List of solved problems.


## Resource
  - #### [Leetcode patterns](https://seanprashad.com/leetcode-patterns/)
  - #### [Errichto Binary Search](https://www.youtube.com/watch?v=GU7DpgHINWQ)

## 1. Sliding window
  
  The Sliding Window pattern is used to perform a required operation on a specific window size of a given array or linked list. Sliding Windows start from the 1st element and keep shifting right by one element and adjust the length of the window according to the problem that you are solving. In some cases, the window size remains constant and in other cases the sizes grows or shrinks.
  
  Used when:
  The problem input is a linear data structure such as a linked list, array, or string
  You’re asked to find the longest/shortest substring, subarray, or a desired value
  Common problems you use the sliding window pattern with:
  
  1. Maximum sum subarray of size ‘K’ (easy)
  2. Longest substring with ‘K’ distinct characters (medium)
  3. String anagrams (hard)

  - #### How to solve sliding window blog [link](https://medium.com/outco/how-to-solve-sliding-window-problems-28d67601a66).
  - #### Sliding Window course [link](https://usaco.guide/gold/sliding-window/#sliding-window)

  - #### Problems solved
    - ##### [1876 Substring of size three](https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/)
    - ##### [643 Maxsubarray](https://leetcode.com/problems/maximum-average-subarray-i/)
    - ##### [239 Sliding window max](https://leetcode.com/problems/sliding-window-maximum/)
    - ##### [219 Contains duplicate](https://leetcode.com/problems/contains-duplicate-ii/)
    - ##### [209 Min size subarray sum](https://leetcode.com/problems/minimum-size-subarray-sum/)

## 2. Two pointer

  Two Pointers is a pattern where two pointers iterate through the data structure in tandem until one or both of the pointers hit a certain condition.Two Pointers is often useful when searching pairs in a sorted array or linked list

  Used when:
  It will feature problems where you deal with sorted arrays (or Linked Lists) and need to find a set of elements that fulfill certain constraints
  The set of elements in the array is a pair, a triplet, or even a subarray
  Here are some problems that feature the Two Pointer pattern:
  1. Squaring a sorted array (easy)
  2. Triplets that sum to zero (medium)
  3. Comparing strings that contain backspaces (medium)
  
  - #### Problems solved
    - ##### [200 Reverse prefix of word](https://leetcode.com/problems/reverse-prefix-of-word/)
    - ##### [1877 Minmax pair sum](https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/)
    - ##### [287 Find the duplicate](https://leetcode.com/problems/find-the-duplicate-number/)
    - ##### [763 Partition labels](https://leetcode.com/problems/partition-labels/)
    - ##### [15 Sum](https://leetcode.com/problems/3sum/)
    - ##### [16 3Sum closest](https://leetcode.com/problems/3sum-closest/)
    - ##### [75 sort colours](https://leetcode.com/problems/sort-colors/)

## 3. Modified Binary Search
  
  Whenever you are given a sorted array, linked list, or matrix, and are asked to find a certain element, the best algorithm you can use is the Binary Search. This pattern describes an efficient way to handle all problems involving Binary Search.
  
  - #### [Errichto Binary Search](https://www.youtube.com/watch?v=GU7DpgHINWQ)
  
  Used when:
  

  - #### Problems solved
    - ##### [704 Binary Search](https://leetcode.com/problems/binary-search)
    - ##### [378 Kth Smallest element in sorted matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix)
    - ##### [153 Find minimum in sorted array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array)
