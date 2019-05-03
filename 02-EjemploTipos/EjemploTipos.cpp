/* LUCIANO GASTON MARECO
 * 20190503
 *  EjemploTipos

El trabajo fue corregido ya que en la anterior version no realizaba operaciones con los diferentes
tipos de datos, solo los utilizaba con cout.
Aunque en este trabajo la variable tipo string no pudo ser declarada debido a un error, detallado abajo,
lo que no logre entender ya que sigue la misma estructura que en la version anterior en donde si funcionaba.
 */

#include<string>
#include<cassert>

int main () {

unsigned a=2, b=4;
assert(6==a+b);
assert(8==a*b);
assert(2==b-a);
assert(2==b/a);
assert(1!=b%a);

int c=-2, d=4;
assert(2==c+d);
assert(-8==c*d);
assert(6==d-c);
assert(-2==d/c);
assert(1!=d%c);

double e=1.5, f=5.5;
assert(7==e+f);
assert(8.25==e*f);
assert(4==f-e);
assert(4>f/e);

bool g=true, h=false;
assert(false == (g and h));
assert(false != (g or h));
assert(false != (not h));

char i='i', j='j';
assert(211 == (i+j));
/*
string nombre = "luciano"; 
al declarar una variable del tipo string recibia el siguiente error:
error: 'string' was not declared in this scope
string nombre = "luciano";
*/

}
