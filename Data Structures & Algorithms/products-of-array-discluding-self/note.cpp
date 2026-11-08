/*
Brute force: 
  product=1,i,j --> prouct = all except when i=j

Division method:
  calculate all_product for non-zero nums
  count no of 0s : 
    --> no 0s: all_product/nums[i]
    --> one 0: all are 0s except for position containing 0
    --> 2 or more 0s: all are 0s

optimised solutions are in submissions
*/
