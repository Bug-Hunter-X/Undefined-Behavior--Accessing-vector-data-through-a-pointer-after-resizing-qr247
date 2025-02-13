std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

// Correct approach: using iterators
for (int x : vec) {
    std::cout << x << " ";
}
std::cout << std::endl;

vec.push_back(10);

// Correct approach: Using vector indexing after resizing
for (size_t i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
std::cout << std::endl;