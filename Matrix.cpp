#include "Matrix.h"
#include <cstring>
#include <iostream>

Matrix::Matrix(int rows, int cols)
{
	m_rows = rows;
	m_cols = cols;
	m_data = new int* [m_rows];
	for (size_t i = 0; i < rows; i++)
	{
		m_data[i] = new int[cols];
	}

}

Matrix::~Matrix()
{
	destroy();
}

Matrix::Matrix(const Matrix& other)
{
	copy(other);
}

Matrix& Matrix::operator=(const Matrix& other)
{
	m_rows = other.m_rows;
	m_cols = other.m_cols;

	m_data = new int* [m_rows];
	for (size_t i = 0; i < m_rows; i++)
	{
		m_data[i] = new int[m_cols];
	}

	for (size_t i = 0; i < m_rows; i++)
	{
		for (size_t j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}
	// TODO: insert return statement here
}

Matrix::Matrix(Matrix&& other)
{
	m_rows = other.m_rows;
	m_cols = other.m_cols;
	m_data = other.m_data;
	other.m_rows = 0;
	other.m_cols = 0;
	other.m_data = nullptr;
}

Matrix& Matrix::operator=(Matrix&& other)
{
	// TODO: insert return sta
}

int& Matrix::operator()(int row, int col) const
{
	return m_data[row][col];
	// TODO: insert return statement here
}

Matrix Matrix::operator+(const Matrix& other) const
{
	
	Matrix newMatr(m_rows,m_cols);
	newMatr.m_rows = m_rows;
	newMatr.m_cols = m_cols;
	

	for (size_t i = 0; i < m_rows; i++)
	{
		for (size_t j = 0; j < m_cols; j++)
		{
			newMatr.m_data[i][j]=m_data[i][j] + other.m_data[i][j];
		}
	}
	return newMatr;
}

Matrix Matrix::operator-(const Matrix& other) const
{
	Matrix newMatr(m_rows, m_cols);
	newMatr.m_rows = m_rows;
	newMatr.m_cols = m_cols;


	for (size_t i = 0; i < m_rows; i++)
	{
		for (size_t j = 0; j < m_cols; j++)
		{
			newMatr.m_data[i][j] = m_data[i][j] - other.m_data[i][j];
		}
	}
	return newMatr;
}

Matrix Matrix::operator*(const Matrix& other) const
{
	Matrix newMatr(m_rows, m_cols);
	newMatr.m_rows = m_rows;
	newMatr.m_cols = m_cols;


	for (size_t i = 0; i < m_rows; i++)
	{
		for (size_t j = 0; j < m_cols; j++)
		{
			newMatr.m_data[i][j] = m_data[i][j] * other.m_data[i][j];
		}
	}
	return newMatr;
}

bool Matrix::operator==(const Matrix& other) const
{
	bool isItEqual = true;
	if (m_rows != other.m_rows || m_cols != other.m_cols)
	{
		isItEqual = false;
	}
	for (size_t i = 0; i < m_rows; i++)
	{
		for (size_t j = 0; j < m_cols; j++)
		{
			if (m_data[i][j] != other.m_data[i][j])
			{
				isItEqual = false;
			}
		}
	}
	return isItEqual;
}

void Matrix::copy(const Matrix& other)
{
	//destroy();
	m_rows = other.m_rows;
	m_cols = other.m_cols;

	m_data = new int* [m_rows];
	for (size_t i = 0; i < m_rows; i++)
	{
		m_data[i] = new int[m_cols];
	}

	for (size_t i = 0; i < m_rows; i++)
	{
		for (size_t j = 0; j < m_cols; j++)
		{
			m_data[i][j] = other.m_data[i][j];
		}
	}
	


}

void Matrix::destroy()
{
	for (size_t i = 0; i < m_rows; i++)
	{
		delete[] m_data[i];
	}
	delete[] m_data;
	m_data = nullptr;
	m_rows = 0;
	m_cols = 0;
}


Matrix transpose(const Matrix& matrix)
{
	return Matrix();
}

void print(const Matrix& matrix)
{
	for (size_t i = 0; i < matrix.m_rows; i++)
	{
		for (size_t j = 0; j < matrix.m_cols; j++)
		{
			std::cout << matrix.m_data[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
