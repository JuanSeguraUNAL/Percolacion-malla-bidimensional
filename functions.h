#include <vector>
#include <iostream>
#include <random>
#include <algorithm>  // Para std::max y std::find
#include <fstream>  // Para escribir en .txt
#include <stack>  // Hace a dfs iterativo, elimina riesgo de desbordamiento
#include <ctime>
#include <chrono>


std::vector<bool> generar_malla_1D(int L, double p, int seed);
void imprimir_malla(const std::vector<bool>& malla, int L);
void imprimir_clusters(const std::vector<int>& etiquetas, const std::vector<bool>& malla, const std::vector<int>& percolantes, int L);

int fila(int id, int L);
int columna(int id, int L);
int index(int i, int j, int L);
bool es_percolante(const std::vector<int>&percolantes , int etiqueta);

bool hay_cluster_percolante(const std::vector<bool>& malla, int L, int& tamano_max, std::vector<int>& etiquetas, std::vector<int>& percolantes);