std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

int* ptr = &vec[0];

vec.push_back(10); 

// Accessing ptr after resizing vec is undefined behavior
for (int i = 0; i < 11; i++) {
  std::cout << ptr[i] << " ";
}