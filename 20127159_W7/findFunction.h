#pragma once

bool findX(int a[][100], int __row, int __col, int x, int &posRow, int &posCol);

int findMaxArray(int a[], int length, int &pos);

int findMaxMatrix(int a[][100], int __row, int __col, int &posRow, int &posCol);

int findMaxBorder(int a[][100], int __row, int __col, int &posRow, int &posCol);

bool findMaxInside(int a[][100], int __row, int __col, int &posRow, int &posCol);

int findMaxRow(int a[][100], int thatRow, int __col, int &posRow, int &posCol);

int findMinRow(int a[][100], int thatRow, int __col, int &posRow, int &posCol);

int findMaxCol(int a[][100], int __row, int thatCol, int &posRow, int &posCol);

int findMinCol(int a[][100], int __row, int thatCol, int &posRow, int &posCol);

int findMaxCol(int a[][100], int __row, int thatCol, int &posRow, int &posCol);

int findMaxPriDiago(int a[][100], int __row, int __col, int posNumRow, int posNumCol, int &posRow, int &posCol);

int findMaxSecDiago(int a[][100], int __row, int __col, int posNumRow, int posNumCol, int &posRow, int &posCol);