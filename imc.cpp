#include <iostream>
double calcularImc(double pesoKg, double estaturaM) {
 return pesoKg / (estaturaM * estaturaM);
}
int main() {
 double peso, estatura;
 std::cout << "Peso (kg): ";
 std::cin >> peso;
 std::cout << "Estatura (m): ";
 std::cin >> estatura;
 std::cout << "IMC: " << calcularImc(peso, estatura) << std::endl;
 return 0;
}