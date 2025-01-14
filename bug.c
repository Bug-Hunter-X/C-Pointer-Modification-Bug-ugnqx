int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modify value through pointer
  int y = *ptr; // Copy value from pointer
  printf("%d\n", x); // Output: 20 
  return 0;
}