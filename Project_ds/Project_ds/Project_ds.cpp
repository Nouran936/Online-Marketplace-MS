#include <iostream>
#include "Products.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <stdlib.h>

using namespace std;



int main()
{
	
	vector <Products> w;
	vector<int> q;
	
	string lines;
	ifstream read;
	read.open(("Products\\id.txt"), ios::app);
	while (getline(read, lines)) {
		q.push_back(stoi(lines));
	}

	for (int var : q)
	{
		Products p;
		string lines;
		ifstream read;
		read.open(("Products\\" + to_string(var) + ".txt"), ios::app);
		for (int j = 0; getline(read, lines); j++) {

			if (j == 0) {
				p.Id = stoi(lines);
			}
			else if (j == 1) {
				p.Category = lines;
			}
			else if (j == 2) {
				p.Name = lines;
			}
			else if (j == 3) {
				p.Quantity = stoi(lines);
			}
			else if (j == 4) {
				p.Seller_Id = stoi(lines);
			}
			else if (j == 5) {
				p.Price = stoi(lines);
			}
			else if (j == 6) {
				p.Rating = stoi(lines);
			}
		}
		w.push_back(p);
	}

	
	cout << "All Products... : "<< "\n" << endl;
	for (int i = 0; i < w.size(); i++)
	{
			cout << "        Product Id : " << w[i].Id << endl;
			cout << "        Product Category : " << w[i].Category << endl;
			cout << "        Product Name : " << w[i].Name << endl;
			cout << "        Product Price " << w[i].Price << " L.E " << endl;
			cout << " ****************************************** " << endl;
	}


}