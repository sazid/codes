#include <bits/stdc++.h>
using namespace std;

struct Book {
    string author;
    string title;
    
    Book() { }
    
    Book(string author, string title) {
        this->author = author;
        this->title = title;
    }
};

vector<Book> books;
vector<string> return_queue;
map<string, Book> borrowed;

inline void prnt() {
	for (Book& b: books)
		cout << b.title << ' ' << b.author <<endl;
}

inline bool cmp(Book& A, Book& B) {
    return A.author == B.author ?
        A.title < B.title :     // sort by title if author is same
        A.author < B.author;    // else sort by author
}

// sort the books
inline void _sort() { sort(books.begin(), books.end(), cmp); }

void read() {
	string x, title, author;
	while (getline(cin, x)) {
		if (x == "END") break;
		
		int quote_pos = x.find_last_of('"');
		int by_pos = x.find("by ") + 3;
		title = x.substr(1, quote_pos - 1);
		author = x.substr(by_pos, x.size() - by_pos);
		books.push_back(Book(author, title));
	}
	_sort();
}

inline void remove_book(string& title) {
	for (auto it = books.begin(); it != books.end(); ++it)
		if (it->title == title) {
			borrowed[it->title] = *it;
			books.erase(it);
			break;
		}
}

inline int return_book(string& title) {
	books.push_back(borrowed[title]);
	_sort();
	for (int i = 0; i < (int)books.size(); ++i) {
		if (books[i].title == title) return i;
	}
	return 0;
}

inline void shelve_books() {
	sort(return_queue.rbegin(),return_queue.rend());
	for(string& s: return_queue) {
		int pos = return_book(s);
		if (pos == 0)
			cout<< "Put \"" << s << "\" first\n";
		else
			cout<< "Put \"" << s << "\" after \"" 
				<< books[pos-1].title << "\"\n";
	}
	cout << "END\n";
}

void solve() {
	const int quote_pos = 8;
	// BORROW " -> The first " is always at 8th index
	// RETURN "
	
	string x, title;
	//~ int pos;
	while (getline(cin, x)) {
		if (x == "END") break;
		
		switch (x[0]) {
			// BORROW
			case 'B':
				title = x.substr(quote_pos, x.size()-9);
				remove_book(title);
				_sort();
				break;
			
			// RETURN
			case 'R':
				title = x.substr(quote_pos, x.size()-9);
				return_queue.push_back(title);
				break;
			
			// SHELVE
			case 'S':
				shelve_books();
				break;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	read();
	solve();
	//~ prnt();
	
	return 0;
}
