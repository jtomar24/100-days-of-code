void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);//Your code here
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	sort(A.begin(),A.end());//Your code here
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	reverse(A.begin(),A.end());//Your code here
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	return A.size();//Your code here
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	sort(A.begin(),A.end(),greater<int>());//Your code here
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	for(int i=0;i<A.size();i++) 
	{cout<<A[i]<<" ";} 
	//cout<<endl;//Your code here
}
