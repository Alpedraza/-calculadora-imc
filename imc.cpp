#include <iostream>
#include <string>

double calcularImc(double pesoKg, double estaturaM) {
 return pesoKg / (estaturaM * estaturaM);
}
std::string clasificarImc(double imc) {
 if (imc < 18.5) {
 return "Bajo peso";
 } else if (imc < 25.0) {
 return "Normal";
 } else if (imc < 30.0) {
 return "Sobrepeso";
 }
 return "Obesidad";
}

int main() {
 double peso, estatura;
 std::cout << "Peso (kg): ";
 std::cin >> peso;
 std::cout << "Estatura (m): ;
 std::cin >> estatura;

 double imc = calcularImc(peso, estatura)
 std::cout << "IMC: " << imc
 << " (" << clasificarImc(imc) << ")" << std::endl;


 return 0;

}