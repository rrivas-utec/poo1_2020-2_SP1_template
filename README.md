# Set de Problemas #1
Ejercicios sobre estructuras de control selectivas y estructuras de control repetitivas del curso de programación orientada a objetos 1 (CS1102).

## Ejercicio # 1

Escriba un programa que nos diga cuanto debemos pagar por nuestra compra. Si compramos al por mayor 1001 o más artículos nos descuentan el 40%, si compramos entre 251 y 1000 nos descuentan un 20%, y si compramos entre 101 y 250 un 10%. No hay descuento si adquirimos menores o iguales de 100 artículos.  

Deberá ingresarse la cantidad de artículos y el precio unitario. 

**Input Format**
```
2000
10
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
El pago por la compra es: 12000.0 Soles
```
#### Ejemplo 1
**Input**
```
3000
10
```
**Output**
```
El pago por la compra es: 18000.0 Soles
```
####Ejemplo 2
**Input**
```
1000
20
```
**Output**
```
El pago por la compra es: 16000.0 Soles
```
## Ejercicio # 2
Escribir un programa que solicite los 3 lados de un triangulo y que verifique si es valido.  
En caso de que sea valido verificar si es Equilatero (3 lados iguales), Isosceles (2 lados iguales) o Escalar (ningun lado igual).  
la condicion para verificar si un triangulo es valido es la siguiente:  
```
Dado tres lados: a,b,c

La condicion que valida si es triangulo es: (a + b > c) y (a + c > b) y (b + c > a)
```
**Input Format**
```
5
5
5
```
**Constraints**
```
Para el ingreso de datos no usar etiquetas
```
**Output Format**
```
El Triangulo valido es equilatero
```
####Ejemplo 1
**Input**
```
7
10
20
```
**Output**
```
No es triangulo valido
```
####Ejemplo 2
**Input**
```
3
4
5
```
**Output**
```
El triangulo valido es escalar
```



