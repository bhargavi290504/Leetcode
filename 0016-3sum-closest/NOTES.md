𝑛
)
O(nlogn) time.
​
Two-pointer Technique: After sorting, the algorithm uses a nested loop structure:
​
The outer loop runs from i = 0 to i < n - 2, which takes
𝑂
(
𝑛
)
O(n) time.
Inside the outer loop, a two-pointer approach is used to find the closest sum. The inner while loop runs in
𝑂
(
𝑛
)
O(n) time for each iteration of the outer loop.
Therefore, the overall time complexity is
𝑂
(
𝑛
log
⁡
𝑛
)
+
𝑂
(
𝑛
2
)
O(nlogn)+O(n
2
). Since
𝑂
(
𝑛
2
)
O(n
2
) dominates
𝑂
(
𝑛
log
⁡
𝑛
)
O(nlogn), the final time complexity is: