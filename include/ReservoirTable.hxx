#pragma once
#include <iostream>
#include <vector>

template <typename T>
class ReservoirTable
{
public:
	ReservoirTable() = default;
	ReservoirTable(int row, int col);
	void setup(std::vector<std::vector<T>>& src);
	bool isempty() { return data.empty(); }

	int getCol() { return NCol; }
	void pushCol(std::vector<T>& v) { data.push_back(v); }
	std::vector<T>& getCol(int j) { return data[j]; }
	

	void setRowCol() { NRow = data[0].size(); NCol = data.size(); BId = NRow / 2; }
	
	int eval_all(int j, T val, std::vector<T>& outdata, std::vector<T>& slope);
	T eval(int j, T val, int destj);
	T eval_inv(int j, T val, int destj);

	void display();

private:

	int									NRow;
	int									NCol;
	int									BId;		// search from BId
	std::vector<std::vector<T>>			data;
};


template <typename T>
ReservoirTable<T>::ReservoirTable(int row, int col)
{
	NRow = row;
	NCol = col;
	BId = 0;
	data.resize(NCol);
	for (int j = 0; j < NCol; j++) {
		data[j].resize(NRow);
	}
}

template <typename T>
void ReservoirTable<T>::setup(std::vector<std::vector<T>>& src)
{
	data = src;
	NCol = data.size();
	NRow = data[0].size();
	BId = NRow / 2;
}

//template <typename T>
//inline bool ReservoirTable<T>::isempty()
//{
//	return data.empty();
//}


template <typename T>
inline int ReservoirTable<T>::eval_all(int j, T val, std::vector<T>& outdata, std::vector<T>& slope)
{
	// becareful when the memory outdata and slope have not be allocated before

	if (val >= data[j][BId]) {
		for (int i = BId + 1; i < NRow; i++) {
			if (val < data[j][i]) {
				BId = i - 1;
				for (int k = 0; k < NCol; k++) {
					slope[k] = (data[k][BId + 1] - data[k][BId]) / (data[j][BId + 1] - data[j][BId]);
					outdata[k] = data[k][BId] + slope[k] * (val - data[j][BId]);
				}
				return BId;
			}	
		}
		for (int k = 0; k < NCol; k++) {
			slope[k] = 0;
			outdata[k] = data[k].back();
		}
	}
	else {
		for (int i = BId - 1; i >= 0; i--) {
			if (val >= data[j][i]) {
				BId = i;
				for (int k = 0; k < NCol; k++) {
					slope[k] = (data[k][BId + 1] - data[k][BId]) / (data[j][BId + 1] - data[j][BId]);
					outdata[k] = data[k][BId] + slope[k] * (val - data[j][BId]);
				}
				return BId;
			}		
		}
		for (int k = 0; k < NCol; k++) {
			slope[k] = 0;
			outdata[k] = data[k].front();
		}
	}
	return BId;
}

template <typename T>
inline T ReservoirTable<T>::eval(int j, T val, int destj)
{
	// becareful when the memory outdata and slope have not be allocated before

	if (val >= data[j][BId]) {
		for (int i = BId + 1; i < NRow; i++) {
			if (val < data[j][i]) {
				BId = i - 1;
				OCP_DBL k = (data[destj][BId + 1] - data[destj][BId]) / (data[j][BId + 1] - data[j][BId]);
				return (data[destj][BId] + k * (val - data[j][BId]));
			}
		}
		return data[destj].back();
	}
	else {
		for (int i = BId - 1; i >= 0; i--) {
			if (val >= data[j][i]) {
				BId = i;
				OCP_DBL k = (data[destj][BId + 1] - data[destj][BId]) / (data[j][BId + 1] - data[j][BId]);
				return (data[destj][BId] + k * (val - data[j][BId]));
			}
		}
		return data[destj].front();
	}
}

template <typename T>
inline T ReservoirTable<T>::eval_inv(int j, T val, int destj)
{
	// becareful when the memory outdata and slope have not be allocated before

	if (val > data[j][BId]) {
		for (int i = BId - 1; i >= 0; i--) {
			if (val <= data[j][i]) {
				BId = i;
				OCP_DBL k = (data[destj][BId + 1] - data[destj][BId]) / (data[j][BId + 1] - data[j][BId]);
				return (data[destj][BId] + k * (val - data[j][BId]));
			}
		}
		return data[destj].front();
	}
	else {
		for (int i = BId + 1; i < NRow; i++) {
			if (val >= data[j][i]) {
				BId = i;
				OCP_DBL k = (data[destj][BId] - data[destj][BId - 1]) / (data[j][BId] - data[j][BId - 1]);
				return (data[destj][BId - 1] + k * (val - data[j][BId - 1]));
			}
		}
		return data[destj].back();
	}
}


template <typename T>
void ReservoirTable<T>::display()
{
	for (int i = 0; i < NRow; i++) {
		for (int j = 0; j < NCol; j++) {
			std::cout << data[j][i] << "\t";
		}
		std::cout << "\n";
	}
}
