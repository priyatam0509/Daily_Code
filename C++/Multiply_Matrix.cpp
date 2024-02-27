// When dealing with matrices, you may, sooner or later, run into the elusive task of matrix multiplication. Here, we will try to multiply two matrices and hope to understand the process.

// Two matrices A[][] and B[][] can only be multiplied if number of columns in A is equal to number of rows in B. The dimensions of the resultant matrix will have A's row size and B's column size.

// Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. Multiply A and B. 

// Example 1:

// Input:
// n1 = 3, m1 = 2
// A[][] = {{4, 8},
//          {0, 2}
//          {1, 6}}
// n2 = 2, m2 = 2
// B[][] = {{5, 2},
//          {9, 4}}
// Output: 92 40 18 8 59 26
// Explanation:
// Matrices are of size 3 x 2 and 2 x 2 which 
// results in 3 x 2 matrix with elements as:
// res[][] = {{92, 40},
//            {18, 8}
//            {59, 26}}
// Example 2:

// Input:
// n1 = 1, m1 = 1
// A[][] = {2}
// n2 = 1, m2 = 1
// B[][] = {3}
// Output: 6
// Explanation: Both matrices are of size 1 x 1 
// which results in 1 x 1 matrix having element 6.
 

class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix(const vector<vector<int> >& A, const vector<vector<int> >& B)
{
	vector<vector<int>> res;

	if (A[0].size() != B.size())
		return res;

	for (int i = 0; i < A.size(); i++)
	{
		res.push_back({});

		for (int j = 0; j < B[0].size(); j++)
		{
			int cell = 0;

			for (int k = 0; k < A[i].size(); k++)
				cell += A[i][k] * B[k][j];

			res[i].push_back(cell);
		}
	}

	return res;
}
};