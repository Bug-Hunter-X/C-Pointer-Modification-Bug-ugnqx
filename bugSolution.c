int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modify value through pointer
  int y = *ptr; // Copy value from pointer
  printf("x: %d\n", x); // Output: 20 
  //Added more detailed output for clarity
  printf("y: %d\n", y); // Output: 20
  printf("Address of x: %p\n", &x); // Output: Address of x 
  printf("Value of ptr: %p\n", ptr); // Output: Address of x 
  return 0;
}