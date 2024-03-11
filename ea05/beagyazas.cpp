int main() {
  double abszolut(double szam) {
    return szam<0. ? -szam : szam;
  }
  cout << abszolut(-1) << endl;
  return 0; 
}
