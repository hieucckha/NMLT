# 1. Nhập Xuất ma trận nguyên m*n 
## The output pixel table
------------------------

|-----------------------------------|
|     |[   ]|[   ]|[   ]|[   ]|[   ]|
|-----------------------------------|
|[   ]|  6  |  8  |  9  |  1  |  0  |
|-----------------------------------|
|[   ]|     |     |     |     |     |
|-----------------------------------|
|[   ]|     |     |     |     |     |
|-----------------------------------|
|[   ]|     |     |     |     |     |
|-----------------------------------|
|[   ]|     |     |     |     |     |
|-----------------------------------|

# 2. Tìm phần tử X trong ma trận

# 3. Tìm phần tử lớn nhất trong ma trận và trên biên ma trận.


# 4. Tính tổng các phần tử trong ma trận và xác định các phần tử có giá trị lớn hơn tổng này

# 5. Tính tổng các dòng & các cột trong ma trận, cho biết gia trị lớn nhất thuộc dòng /cột n ào
// Viết hàm 

# 6. Kiểm tra 1 ma trận có phải là ma phương.
   0   1   2   3
0 [1] [2] [3] [ ]
1 [4] [5] [6] [ ]
2 [7] [8] [9] [ ]
3 [ ] [ ] [ ] [ ]

00-11-22
01-12-23

# 7. Chỉ ra các vị trí “yên ngựa” trên ma trận. (lớn nhất trên dòng và nhỏ nhất trên cột)
{1, 2, 3},
{4, 5, 6},
{10, 18, 4}

# 8. Đếm số “hoàng hậu” trên ma trận. (lớn nhất trên dòng, cột và 2 đường chéo đi qua nó)



# 9. Sắp xếp các giá trị nằm trên biên ma trận tăng dần theo chiều kim đồng hồ
## Mã giả của Buble sort
```
begin 
   for i in 0 to N-2:
      for j in 0 to  N-i-1:
         if(arr[j] > arr[j+1])
            swap
         endif
      endfor
   endfor 
end
```
--------------------
## Mã giả cho sort theo chiều kim đồng hồ

# Array
1 2 3
4 5 6
7 8 9
```
begin
   # Traverse all element in border to tempArray
   for row in 0 to ROW:
      for col in COLUMN:
         if (row = 0) or (col = 0) or (row = ROW -1) or (col = COLUMN - 1)
            tempArray.append(arr[row][col]) 
         endif
      endfor
   endfor

   # List element in clockwise order
   # {1, 2, 3, 6, 9, 8, 7, 4}

   sort(tempArray)

   # List element after sorting
   {1, 2, 3, 4, 6, 7, 8, 9}

   {[1, 2, 3], 4, 6, 7, 8, 9}
   # First row of matrix
   for col in 0 to COLUMN:
      array[0][col] = tempArray[col]
   endfor

   {[1, 2, 3], [4], 6, 7, 8, [9]}
   # Two side of matrix
   for row in 1 to ROW - 1:
      for col in 0 and COLUMN:
         if col = 0:
            array[row][col] = tempArray[length - row];
         endif
         if col = COLUMN:
            {1, 2, 3,  [4] , 6, 7, 8, 9}
            [ COLUMN ][ROW]          
            array[row][col] = tempArray[COLUMN + row - 1]
         endif
      endfor
   endfor

   {[1, 2, 3], [4], [6, 7, 8], [9]}
   # Last row of matrix
   for col in 0 to COLUMN:
      {1, 2, 3,   4,  6, 7, 8,  9}
      {[COLUMN] [ROW] [COLUMN] [ROW]}
      # Input the last element in reverse order
      a[ROW - 1][col] = tempArray[COLUMN -1 + ROW - 1 + COLUMN - 1 - col]
   endfor
end   
```
# https://www.geeksforgeeks.org/sorting-boundary-elements-of-a-matrix/




io - find - caculate - caculate - check - find - (check-count) - sort 
