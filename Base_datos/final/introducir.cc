#include <stdio>
#include <string>
#include <stdlib>
#include <fstream>
#include "alumno.h"

using namespace std;

void introducir()
{
  Alumno A;
  int grupo,curso;
  string dni,email, nombre, apellido, telefono, direccion, fecha;
  bool lider,tiempo;  //Tiempo parcial o no
  char cad [100];
//Debajo se abre el fichero en modo salida para escribir los datos del alumno.
  ofstream fsalida("Agenda.dat",ios::out|ios::binary);

  cout<<"Introduce el DNI"<<endl;
  a.setDNI(dni);//Esta funcion es como un cin que escribe el valor que queremos, mientras que la de abajo lo guarda en la variable
  a.getDNI;
  fsalida.write(dni, sizeof(string);//Aqui escribimos el valor de dni en el fichero

//Todas las funciones de abajo son copias exactas de las superiores pero cambiando las variables

  cout<<"Introduce el nombre"<<endl;
  a.setNombre(nombre);
  a.getNombre;
  fsalida.write(nombre, sizeof(string));

  cout<<"Introduce el apellido"<<endl;
  a.setApellido(apellido);
  a.getApellido;
  fsalida.write(apellido, sizeof(string));

  cout<<"Introduce el email"<<endl;
  a.setEmail(email);
  a.getEmail;
  fsalida.write(email, sizeof(string));

  cout<<"Introduce el telefono"<<endl;
  a.setTelefono(telefono);
  a.getTelefono;
  fsalida.write(telefono, sizeof(string));

  cout<<"Introduce el email"<<endl;
  a.setDireccion(direccion);
  a.getDireccion;
  fsalida.write(direccion, sizeof(string));

  cout<<"Introduce la fecha de nacimiento"<<endl;
  a.setNacimiento(fecha);
  a.getNacimiento;
  fsalida.write(fecha, sizeof(string));

  cout<<"Introduce el apellido"<<endl;
  a.setApellido(apellido);
  a.getApellido;
  fsalida.write(Apellido, sizeof(string));

  cout<<"Introduce el curso mas alto"<<endl;
  a.setCurso(curso);
  a.getCurso;
  fsalida.write(curso, sizeof(int));

  cout<<"Introduce el grupo"<<endl;
  a.setGrupo(grupo);
  a.getGrupo;
  fsalida.write(grupo, sizeof(int));

  cout<<"Introduce si es lider"<<endl;
  a.setLiderazgo(lider);
  a.getLiderazgo;
  fsalida.write(lider, sizeof(int));

  cout<<"Introduce si es a tiempo parcial"<<endl;
  a.setParcialidad(tiempo);
  a.getParcialidad;
  fsalida.write(tiempo, sizeof(int));

  fsalida.close();

  ifstream fentrada("Agenda.dat",ios::in|ios::binary);

  do {
      cout << cad << endl;
      fentrada.read(cad, 100);
   } while(!fentrada.eof());

}