// BubbleSort, SelectSort, InsertSort, MergeSort

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class SortArray {
public:
	SortArray(int N = 10) {
		this->N = N;
		R = new int[N];
		T = new int[N];
		for (int i = 0; i < N; i++) {
			R[i] = getRand(-10, 10);
		}
	}
	~SortArray() {
		delete[] R;
		delete[] T;
	}
	void BubbleSort() {
		copyArray();
		bool flag = false;
		for (int i = 1; i < N; i++) {
			flag = true;
			for (int j = N - 1; j >= i; j--) {
				if (T[j] < T[j - 1]) {
					int c = T[j];
					T[j] = T[j - 1];
					T[j - 1] = c;
				}
			}
			if (!flag) return;
		}
	}
	void SelectSort() {
		copyArray();
		for (int i = 0; i < N - 1; i++) {
			int m = i;
			for (int j = i + 1; j < N; j++) {
				if (T[j] < T[m]) m = j;
			}
			if (m != i) {
				int t = T[i];
				T[i] = T[m];
				T[m] = t;
			}
		}
	}
	void InsertSort() {
		copyArray();
		for (int i = 1; i < N; i++) {
			int temp = T[i];
			int j = i - 1;
			while ((j >= 0) && (temp < T[j])) {
				T[j + 1] = T[j];
				j--;
			}
			T[j + 1] = temp;
		}
	}
	void MergeSort() {
		copyArray();
		for (int size = 1; size < N; size *= 2) {
			for (int left = 0; left < N - size; left += 2 * size) {
				int mid = left + size;
				int right = min(left + 2 * size, N);
				Merge(T, left, mid, right);
			}
		}
	}
	void dispOriginal() {
		cout << "Original array:" << endl;
		for (int i = 0; i < N; i++) cout << R[i] << "\t";
		cout << endl;
	}
	void dispSorted() {
		cout << "Sorted array:" << endl;
		for (int i = 0; i < N; i++) cout << T[i] << "\t";
		cout << endl;
	}
	void testSorts() {
		clock_t t1, t2;
		double tt;
		cout << "BubbleSort" << endl;
		t1 = clock();
		BubbleSort();
		t2 = clock();
		tt = double(t2 - t1);
		cout << "Time: " << tt << endl;
		// dispOriginal();
		// dispSorted();

		cout << "SelectSort" << endl;
		t1 = clock();
		SelectSort();
		t2 = clock();
		tt = double(t2 - t1);
		cout << "Time: " << tt << endl;
		// dispOriginal();
		// dispSorted();

		cout << "MergeSort" << endl;
		t1 = clock();
		MergeSort();
		t2 = clock();
		tt = double(t2 - t1);
		cout << "Time: " << tt << endl;
		// dispOriginal();
		// dispSorted();

		cout << "InsertSort" << endl;
		t1 = clock();
		InsertSort();
		t2 = clock();
		tt = double(t2 - t1);
		cout << "Time: " << tt << endl;
		// dispOriginal();
		// dispSorted();
	}
private:
	int* R; // 原始数组
	int* T; // 排序用数组
	int N;
	int getRand(int min, int max) {
		return (rand() % (max - min + 1)) + min;
	}
	void copyArray() {
		for (int i = 0; i < N; i++) T[i] = R[i];
	}
	void Merge(int R[], int start, int mid, int end) {
		int* temp = new int[end - start];
		int i = start, j = mid, idx = 0;
		while (i < mid && j < end) {
			if (R[i] <= R[j]) temp[idx++] = R[i++];
			else temp[idx++] = R[j++];
		}
		while (i < mid) temp[idx++] = R[i++];
		while (j < end) temp[idx++] = R[j++];
		for (int k = 0; k < idx; k++) R[start + k] = temp[k];
		delete[] temp;
	}
};

int main() {
	srand((unsigned)time(NULL));
	SortArray arr(10000);
	arr.testSorts();
	return 0;
}