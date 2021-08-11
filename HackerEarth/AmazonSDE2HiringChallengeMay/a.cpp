#include<bits/stdc++.h>
using namespace std;

vector<int> KthSmallest (int N, vector<int> A, int Q, vector<long long> Queries) {
	vector<int> v;

	for (int i = 0 ; i < N; ++i) {
		for (int j = i ; j < N; ++j) {
			int res = A[i];
			for (int k = i + 1; k <= j; ++k) {
				res |= A[k];
			}
			v.push_back(res);
		}
	}
	sort(v.begin(), v.end());
	vector<int> ans;

	for (long long q : Queries) {
		ans.push_back(v[q - 1]);
	}

	return ans;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for (int t_i = 0; t_i < T; t_i++)
	{
		int N;
		cin >> N;
		vector<int> A(N);
		for (int i_A = 0; i_A < N; i_A++)
		{
			cin >> A[i_A];
		}
		int Q;
		cin >> Q;
		vector<long long> Queries(Q);
		for (int i_Queries = 0; i_Queries < Q; i_Queries++)
		{
			cin >> Queries[i_Queries];
		}

		vector<int> out_;
		out_ = KthSmallest(N, A, Q, Queries);
		cout << out_[0];
		for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
		{
			cout << " " << out_[i_out_];
		}
		cout << "\n";
	}
}