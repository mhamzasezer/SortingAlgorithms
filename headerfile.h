#pragma once
void selection_sort(struct data *, int);
void bubble_sort(struct data *, int);
int search_min(struct data *ptr, int min, int b);
void swap(struct data *, int, int);
int read_data(char *, struct data *);
void print_data(struct data *, int);
struct data {
	int key;
	double data1;
	double data2;
	double data3;
};