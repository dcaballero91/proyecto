//Este es una prueba para manejo de version por si esteban rompe
//por si sigue commiteando
//commit 2
# include "iostream"
# include "conio.h"
# include "fstream"
# include <stdio.h>
# include <string.h>
# include <time.h>
# include <dos.h>
# include <stdlib.h>
#include <cstdlib>
#include <windows.h>
#include "sstream"
using namespace std;
void modempleados();
void modproductos();
void modproveedores();
void reportes();
void facturacion();
void derechos();
void inventario();
void menu();
void loge();
void reclientes();
void reproveedores();
void reproductos();
void ventasdeldia();
void ingresolog();
void comisionvendedor();
void productoacomprar();
void eliminaciones();
void existenciainventario();
void eliproductosinventario();
void eliempleados();
void eliclientes();
void eliproveedores();
void elifacventas();
void acceso();
char apellido[10];
string nombre;
int codigo;


struct producto
{
	int max,costo,ganancia,min;
  	string cod,auxganancia,auxmin,auxmax;
    float  auxcosto;
  	char  descripcion[10],proveedor[10],auxnombre[10], auxdescripcion[10];
  	char nit[10],auxproveedor[10],nombre[10],auxcod[10];
  	
};	
producto ingreso;
struct trabajadores
{
  	int cod, ganancia;
  	char nombre[10],apellidos[10],dpi[10];
  	char auxcod[10];
};	
trabajadores sempleados;
struct client
{
    string  telefono, limitecredito,auxlimitecredito,auxtelefono;
    string direccion,auxdireccion,auxnombre;
    string nit,auxnit,nombre;
    
}; 
client cliente; 
struct login
{
  	int edad,auxedad,auxpor;
  	char auxcontr[10];
  	char auxnombre[10],auxiuser[10],auxapellidos[10],auxdpi[10];
  	string nombre,dpi,user,contr,iuser,icontr,auxicontr;
  	string apellidos,por,auxcodigo,auxuser,codigo,aux;
  	
  
};	
login login;
struct prov
{
    int  telefono, limitecredito,auxlimitecredito,auxtelefono;
    char nombre[10],direccion[10],auxdireccion[10],auxnombre[10];
    char nit[10],auxnit[10];
}; 
prov prov; 
struct inv
{
    int cantidad,existencia,operar,costo;
    char nombre[10],descripcion[10],proveedor[10],cod[10],ganancia[10];
    char auxcod[10];
    
   
}; 
inv inv;
struct almacen
{
  int cod,cantidad,auxcantidad;
  char auxcod[10];
}; 
almacen almacen; 
struct fac
{
    int nofactura,auxnofactura,cantidad,telefonocliente;
    float total,costo;
    char nitcliente[10],direccioncliente[10],fecha[10],descripcionproducto[10],nombreproducto[10],dpi[10];
    char codcliente[10],auxcod[10],nombrecliente[10],codigo[10];
   
}; 
fac fac; 

int main()
{
	acceso();
	//ingresolog();
	system("pause");
	return 0;

    
	
}
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
void acceso(){
	
	ofstream gproveedores;
	ofstream ventas;
	ofstream productos;
	ofstream gcliente;
	ofstream ginventario;
	ofstream log;
    ventas.open("Ventas.txt",ios::in);
    log.open("Login.txt",ios::in);
    gproveedores.open("Proveedores.txt",ios::in);
    productos.open("Productos.txt",ios::in);
    gcliente.open("Clientes.txt",ios::in);
    ginventario.open("Inventario.txt",ios::in);
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output,128,"%d/%m/%y %H:%M",tlocal);
  	int opcion;
  	while(opcion!=3)
  	{
  		system("cls");
  		int i;
  		system("Color B");
  		cout<<endl;
  		printf("%s\n",output);
        for(i=1;i<81;i++){
        	gotoxy(i,1);
          	printf("%c",219);
      		gotoxy(i,25);
          	printf("%c",219);
        }
        for(i=1;i<25;i++){
        	gotoxy(1,i);
          	printf("%c",219);
      		gotoxy(80,i);
          	printf("%c",219);
        }
  		gotoxy(23,10);
  		cout<<"***********************************"<<endl;
  		gotoxy(23,11);
  		cout<<"*	                                *"<<endl;
  		gotoxy(23,12);
  		cout<<"*	        1....Ingreso            *"<<endl;
  		gotoxy(23,13);
  		cout<<"*	        2....Creacion           *"<<endl;
  		gotoxy(23,14);
  		cout<<"*	        3....Salir              *"<<endl;
  		gotoxy(23,15);
  		cout<<"*	                                *"<<endl;
  		gotoxy(23,16);
  		cout<<"***********************************"<<endl;
        ventas.close();
        log.close();
        gproveedores.close();
        productos.close();
        gcliente.close();
        ginventario.close();
  		gotoxy(24,17);
  		cin>>opcion;
  		switch(opcion){
  			case 1:{
  				loge();
  	    	break;
  			}
  			case 2:{
  				ingresolog();
  				break;
  			}
	        case 3:{
	          break;
	        }

  		}
  	}
}
void menu()
{
  	int opcion;
  	while (opcion !=7)
  	{
  		system("cls");
  		time_t tiempo = time(0);
    	struct tm *tlocal = localtime(&tiempo);
    	char output[128];
    	strftime(output,128,"%d/%m/%y %H:%M",tlocal);
      	system("Color A");
      	int i;
        gotoxy(2,2);
      	cout<<nombre<<" "<<apellido<<endl;
      	codigo;
        gotoxy(2,3);
        printf("%s\n",output);
  		cout<<endl<<endl<<endl;
      	gotoxy(15,7);
      	for(i=0;i<50;i++)
        {
        	printf("%c",175);
      	}
      	gotoxy(15,20);
      	for(i=0;i<50;i++)
        {
        printf("%c",174);
        }
        for(i=1;i<81;i++){
            gotoxy(i,1);
            printf("%c",219);
            gotoxy(i,25);
            printf("%c",219);
        }
        for(i=1;i<25;i++){
            gotoxy(1,i);
            printf("%c",219);
            gotoxy(80,i);
            printf("%c",219);
        }
        gotoxy(33,8);
        cout<<"MENU PRINCIPAL"<<endl;
        gotoxy(30,10);
      	cout<<"1........Clientes"<<endl;
        gotoxy(30,11);
      	cout<<"2........Productos"<<endl;
        gotoxy(30,12);
      	cout<<"3........Derechos de autor"<<endl;
        gotoxy(30,13);
        cout<<"4........Salir"<<endl;
        gotoxy(34,14);
      	cout<<"Ingrese Opcion"<<endl;
        gotoxy(34,15);
  		cin>>opcion;
  		switch(opcion){
  			case 1:{
  				clientes();
  				break;
  			}
  			case 2:{
  				modificaciones();
  				break;
  			}
  			case 3:{
  				derechos();
  				break;
  			}
            case 5:{
              break;
            }
  		}
  	}
}

void productosinventario()
{
	ifstream consultap;
	ifstream consultapi;
	ifstream productos;
	ifstream gproveedores;
	productos.close();
    consultap.close();
    consultapi.close();
    gproveedores.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color F");
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    int i;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl<<endl;
    gotoxy(13,4);
    for(i=0;i<55;i++)
    {
        printf("%c",126);
      
    }
    gotoxy(13,20);
    for(i=0;i<55;i++)
    {
        printf("%c",126); 
    }
    gotoxy(30,5);
    cout<<"INGRESO DE PRODUCTOS"<<endl;
    cout<<endl<<endl;
    bool repetido=false;
    bool si=false;
    productos.open("Productos.txt",ios::app);
    consultapi.open("Productos.txt");
    gproveedores.open("Proveedores.txt",ios::app);
    consultap.open("Proveedores.txt");
    gotoxy(16,9);
    cout<<"Ingrese Codigo del Producto..........: ";cin>>ingreso.auxcod;
    consultapi>>ingreso.cod;
    while(!consultapi.eof())
    {
      	consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
      	if(ingreso.cod==ingreso.auxcod)
      	{
            cout<<endl;
            gotoxy(16,10);
  	        system("color 02");printf("Ya existe un Producto con ese Codigo");
  	        repetido=true;
            getch();
  	        break;
      	}
      	consultapi>>ingreso.cod;
    }

    if(repetido==false)
    {
        gotoxy(16,10);
      	cout<<"Ingrese Nombre del Producto..........: ";cin >>ingreso.nombre;
        gotoxy(16,11);
      	cout<<"Ingrese Descripcion del de Producto..: ";cin >>ingreso.descripcion;
        gotoxy(16,12);
      	cout<<"Ingrese Costo del Producto.......... : ";cin >>ingreso.costo;
        gotoxy(16,13);
      	cout<<"Ingrese Porcentaje de Ganancia.......: ";cin >>ingreso.ganancia;
        gotoxy(16,14);
      	cout<<"Ingrese Numero del Nit del Proveedor.: ";cin >>ingreso.nit;
        gotoxy(16,15);
      	consultap>>prov.nit;
  	  	while(!consultap.eof())
  	  	{
  		    consultap>>prov.nombre>>prov.direccion>>prov.telefono;
  		    int result=strcmp(ingreso.nit, prov.nit);
  		    if(result==0)
  		    {
                gotoxy(16,16);
  		        cout<<"Nombre del Proveedor ................: "<<prov.nombre<<endl;
  		        //strcpy(ingreso.proveedor.c_str(),prov.nombre.c_str());
  		        si=true;
  		        break;
  		    }
  	        consultap>>prov.nit;
  	  	}	
        if(si==false){
            gotoxy(16,16);
            system("color 02");printf("Proveedor No Encontrado, Ingrese e Intentelo de Nuevo");
            productos.close();
            consultap.close();
            consultapi.close();
            getch();
            return;
        }
        gotoxy(16,17);
      	cout<<"Ingrese Minimo en Existencia.........: ";cin >>ingreso.min;
        gotoxy(16,18);
      	cout<<"Ingrese Maximo en Existencia.........: ";cin >>ingreso.max;
      	cout<<endl<<endl;
        gotoxy(16,19);
      	cout<<"Guardado Correctamente..."<<endl;
      	productos.open("Productos.txt",ios::out); //abriendo archivo
      	
      	//productos<<ingreso.auxcod<<" "<<ingreso.nombre<<" "<<ingreso.descripcion<<" "<<ingreso.costo<<" "<<ingreso.ganancia<<" "<<ingreso.proveedor<<" "<<" "<<ingreso.min<<" "<<ingreso.max<<endl;

		if(productos.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
		getch();
      }

    productos.close();
    consultap.close();
    consultapi.close();
    gproveedores.close();
}
}
void clientes()
{
	system("cls");
  	ofstream log;
  	string auxuser, linea,linea2,linea3,linea4,linea5,linea6,linea7;
	int res=0;
  	ifstream consultac;
	consultac.open("Clientes.txt",ios::in); //abriendo archivo
    system("Color F");
    gotoxy(30,5);
    cout<<"Creacion de Usuarios"<<endl;
    cout<<endl<<endl;
    bool repetido=false;
    string codigo;
    log.open("Login.txt",ios::app);
    cout<<endl<<endl;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
    system("Color E");printf("NOTA: el Codigo y el Usuario No se podran modificar en un futuro");
    cout<<endl<<endl;
    cout<<"                   Ingrese Usuario (Nick).......: ";cin>>login.auxuser;
    
    
	if(consultac.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	while(getline(consultac,linea))
	{
		if(linea.find(login.auxuser) != string::npos)
		{
			system("cls");
        	gotoxy(20,10);
        	system("Color E");printf("Lo sentimos, Codigo o Usuario ya en Uso");
        	log.close();	
			res = 1;
		}
		
	}
	if (res==0){
		cout<<"                   Usuario Disponible...........: "<<login.auxuser<<endl;
		cout<<"                   Ingrese Nombre...............: ";cin>>login.nombre;
      	cout<<"                   Ingrese Apellido.............: ";cin>>login.apellidos;
      	cout<<"                   Ingrese Pass.................: ";cin>>login.contr;
      	cout<<endl<<endl;
      	cout<<"                            Guardado Correctamente"<<endl;
      	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
		log <<login.auxuser<<endl;
		log <<login.nombre<<endl;
		log <<login.apellidos<<endl;
		log <<login.contr<<endl;
		log.close();
        consultac.close();
        
	}
	system("pause");
	
    /*
	ifstream gcliente;
	ifstream log;
	string auxuser, linea,linea2,linea3,linea4,linea5,linea6,linea7;
	int res=0;
	system("cls");
	gcliente.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color F");
    cout<<"Fecha "<<fecha<<endl;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    int i;
    gotoxy(13,8);
    for(i=0;i<55;i++)
    {
    printf("%c",254);
    }
    gotoxy(13,17);
    for(i=0;i<55;i++)
    {
        printf("%c",254); 
    }
    gotoxy(30,9);
    cout<<"INGRESO DE CLIENTES"<<endl;
    cout<<endl<<endl;
    bool repetido=false;
    gotoxy(15,11);
    cout<<"Ingrese NIT del Cliente..............: ";
    cin>>cliente.auxnit;
    
    ifstream consultac;
	consultac.open("Clientes.txt",ios::in); //abriendo archivo
    while(getline(consultac,linea))
	{
		if(linea.find(cliente.auxnit) != string::npos)
		{
			system("cls");
        	gotoxy(20,10);
        	system("Color E");printf("Lo sentimos, cliente ya existe");
        	log.close();	
			res = 1;
		}
		
	}
	if (res==0){
		gotoxy(15,12);
        cout<<"Ingrese Nombre del Clientes..........: ";cin >>cliente.nombre;
        gotoxy(15,13);
        cout<<"Ingrese Direccion del Clientes.......: ";cin >>cliente.direccion;
        gotoxy(15,14);
        cout<<"Ingrese Telefono del Clientes....... : ";cin >>cliente.telefono;
        gotoxy(15,15);
        cout<<"Ingrese Limite De Credito............: ";cin >>cliente.limitecredito;
        gotoxy(15,16);
        cout<<"Guardado Correctamente..."<<endl;
		//consultac <<cliente.nombre<<endl;
		consultac <<cliente.direccion<<endl;
		consultac <<cliente.telefono<<endl;
		consultac <<cliente.limitecredito<<endl;
		consultac.close();
        
	}
	system("pause");
	*/
}
void inventario()
{
	ifstream consultav;
	ifstream consultaa;
	ifstream ginventario;
	ifstream consultap;
	ifstream consultapi;
	ifstream ventas;
	ifstream productos;
	system("cls");
    ginventario.close();
    consultap.close();
    consultapi.close();
    consultaa.close();
    consultav.close();
    ventas.close();
    productos.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color F");
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl<<endl;
    int existencia=0,resta=0,i;
    gotoxy(13,7);
    for(i=0;i<55;i++)
    {
        printf("%c",254);
    }
    gotoxy(13,22);
    for(i=0;i<55;i++)
    {
        printf("%c",254); 
    }
    gotoxy(22,8);
    cout<<"INGRESO DE MERCADERIAS AL INVENTARIO"<<endl;
    cout<<endl<<endl;
    bool repetido=false;
    ginventario.open("Inventario.txt",ios::app);
    ventas.open("Ventas.txt",ios::app);
    consultapi.open("Productos.txt");
    consultap.open("Inventario.txt");
    consultav.open("Ventas.txt");
    productos.open("Productos.txt",ios::app);
    cout<<endl<<endl;
    gotoxy(25,10);
    cout<<"Ingrese Codigo del Producto ";
    char auxcod[10];
    cin>>auxcod;
    consultapi>>ingreso.cod;
    consultaa>>almacen.cantidad;
    consultap>>inv.cod;
    consultav>>fac.auxnofactura;
    
    while(!consultav.eof())
    {
        consultav>>fac.codcliente>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo>>fac.dpi;
        if(auxcod==fac.auxcod)
        {
            resta=fac.cantidad+resta;
        }
        consultav>>fac.auxnofactura;
    }
    while(!consultap.eof())
    {
        consultap>>inv.nombre>>inv.descripcion>>inv.costo>>inv.ganancia>>inv.proveedor>>inv.cantidad;
        if(auxcod==inv.cod)
        {
            existencia=(inv.cantidad+existencia);
        }
        consultap>>inv.cod;
    }
    while(!consultapi.eof())
    {
        consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
        
		if(auxcod==ingreso.cod)
		
        {
            gotoxy(25,11);
       	    cout<<"Nombre Producto:........... "<<ingreso.nombre<<endl;
            gotoxy(25,12);
        	cout<<"Descripcion del Producto:.. "<<ingreso.descripcion<<endl;
            gotoxy(25,13);
        	cout<<"Costo del Producto:........ "<<ingreso.costo<<endl;
            gotoxy(25,14);
        	cout<<"Ganancia del Producto:..... "<<ingreso.ganancia<<endl;
            gotoxy(25,15);
        	cout<<"Proveedor del Producto:.... "<<ingreso.proveedor<<endl;
            gotoxy(25,16);
        	cout<<"Min del Producto:.......... "<<ingreso.min<<endl;
            gotoxy(25,17);
        	cout<<"Max del Producto:.......... "<<ingreso.max<<endl;
            gotoxy(25,18);
        	cout<<"Existencia del Producto:... "<<(existencia-resta)<<endl;
            gotoxy(25,19);
            cout<<"Cantidad a Comprar:........ ";cin>>inv.cantidad;
            inv.operar=(inv.cantidad+existencia)-resta;
        	repetido=true;
        	break;
      	}
        consultapi>>ingreso.cod;
    }	
    if(repetido==false)
    {
        gotoxy(25,11);
      	cout<<"Producto no Ingresado"<<endl;
      	getch();
        productos.close();
        ginventario.close();
        consultap.close();
        consultapi.close();
        consultaa.close();
        consultav.close();
        ventas.close();
        return;
    }
    //inv.costo=ingreso.costo;
    //inv.cod=ingreso.cod;
    //inv.ganancia=ingreso.ganancia;
    //strcpy(inv.nombre,ingreso.nombre.c_);
    //strcpy(inv.descripcion,ingreso.descripcion);
    //strcpy(inv.proveedor,ingreso.proveedor);
    if(inv.operar>ingreso.max)
    {
        gotoxy(23,20);
        cout<<"La cantidad maxima a comprar es de "<<(ingreso.max-(existencia-resta))<<endl;
        getch();  
    }
    else
    {
        cout<<endl;
        gotoxy(25,20);
        cout<<"El total de la Compra es... "<<ingreso.costo*inv.cantidad<<endl;
        gotoxy(25,21);
        cout<<"Almacenado Correctamente"<<endl;
        getch();
        //ginventario<<inv.cod<<" "<<inv.nombre<<" "<<inv.descripcion<<" "<<inv.costo<<" "<<inv.ganancia<<" "<<inv.proveedor<<" "<<inv.cantidad<<endl;
    }
    ginventario.close();
    consultap.close();
    consultapi.close();
    consultaa.close();
    consultav.close();
    productos.close();
    ventas.close();
}
void modificaciones()
{
  	int opcion,i;
  	while(opcion!=5)
    {
  	    system("cls");
  	    time_t tiempo = time(0);
	    struct tm *tlocal = localtime(&tiempo);
	    char output[128];
	    strftime(output,128,"%d/%m/%y %H:%M",tlocal);
        system("Color E");
        gotoxy(2,2);
        cout<<nombre<<" "<<apellido<<endl;
        codigo;
        gotoxy(2,3);
        printf("%s\n",output);
        //cout<<"Fecha "<<fecha<<endl;
        cout<<endl<<endl<<endl;
        gotoxy(15,9);
        for(i=0;i<50;i++)
        {
            printf("%c",240); 
        }
        gotoxy(15,18);
        for(i=0;i<50;i++)
        {
            printf("%c",240);
        }
        for(i=1;i<81;i++){
            gotoxy(i,1);
            printf("%c",219);
            gotoxy(i,25);
            printf("%c",219);
        }
        for(i=1;i<25;i++){
            gotoxy(1,i);
            printf("%c",219);
            gotoxy(80,i);
            printf("%c",219);
        }


        gotoxy(33,10);
        cout<<"MODIFICACIONES"<<endl;
        gotoxy(30,12);
  		cout<<"1............Clientes"<<endl;
        gotoxy(30,13);
  		cout<<"2............Empleados"<<endl;
        gotoxy(30,14);
  		cout<<"3............Productos"<<endl;
        gotoxy(30,15);
  		cout<<"4............Proveedores"<<endl;
        gotoxy(30,16);
  		cout<<"5............Principal"<<endl;
        gotoxy(30,17);
  		cin>>opcion;
  		switch(opcion){
  			case 1:{
  				modclientes();
  				break;
  			}
  			case 2:{
  				modempleados();
  				break;
  			}
  			case 3:{
  				modproductos();
  				break;
  			}
  			case 4:{
  				modproveedores();
  			}
  			case 5:{
  				break;
  			}
  		}
  	}
}
void modclientes()
{
	ofstream Temp;
	ofstream gcliente;
	ofstream consultac;
	system("cls");
	Temp.close();
    gcliente.close();
  	consultac.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color E");
  	int i;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl<<endl;
  	bool encontrado;
    encontrado=false;
  	Temp.open("Temp.txt");
    gcliente.open("Clientes.txt",ios::app);
    consultac.open("Clientes.txt");
    gotoxy(15,7);
    for(i=0;i<50;i++)
    {
        printf("%c",240); 
    }
    gotoxy(15,25);
    for(i=0;i<50;i++)
    {
        printf("%c",240);
    }
    gotoxy(28,8);
    cout<<"MODIFICACION DE CLIENTES"<<endl;
    gotoxy(18,10);
  	cout<<"Ingrese el NIT del Cliente a modificar: ";
  	cin>>cliente.auxnit;
  	//consultac>>cliente.nit;
  	while(!consultac.eof())
  	{
  		//consultac>>cliente.nombre>>cliente.direccion>>cliente.telefono>>cliente.limitecredito;
  	//	if((strcmp(cliente.auxnit, cliente.nit == 0)))
  		{
            encontrado=true;
            gotoxy(18,11);
            cout<<"NIT del Cliente:................"<<cliente.nit<<endl<<endl;
            gotoxy(18,12);
            cout<<"Nombre del Cliente:............."<<cliente.nombre<<endl;
            gotoxy(18,13);
            cout<<"Direccion del Cliente:.........."<<cliente.direccion<<endl;
            gotoxy(18,14);
            cout<<"Telefono del Cliente:..........."<<cliente.telefono<<endl;
            gotoxy(18,15);
            cout<<"Limite de Credito del Cliente:.."<<cliente.limitecredito<<endl;
            gotoxy(18,17);
            cout<<"Ingrese los nuevos campos para el registro"<<endl;
            gotoxy(18,19);
      		cout<<"NIT del Cliente:.................";cin>>cliente.auxnit;
            gotoxy(18,20);
      		cout<<"Nombre del Cliente:..............";cin>>cliente.auxnombre;
            gotoxy(18,21);
      		cout<<"Direccion del Cliente:...........";cin>>cliente.auxdireccion;
            gotoxy(18,22);
      		cout<<"Telefono del Cliente:............";cin>>cliente.auxtelefono;
            gotoxy(18,23);
      		cout<<"Limite de Credito del Cliente:...";cin>>cliente.auxlimitecredito;
            gotoxy(18,24);
      		cout<<"Modificado!"<<endl;
      		Temp<<cliente.auxnit<<" "<<cliente.auxnombre<<" "<<cliente.auxdireccion<<" "<<cliente.auxtelefono<<" "<<cliente.auxlimitecredito<<endl;
            getch();
  		}
  	//	else
  		{
  			Temp<<cliente.nit<<" "<<cliente.nombre<<" "<<cliente.direccion<<" "<<cliente.telefono<<" "<<cliente.limitecredito<<endl;

  		}
        //consultac>>cliente.nit;
    }

    if(encontrado==false)
    {		
      	gotoxy(18,11);
        cout<<"No. de NIT no ha sido creado"<<endl;
        Temp.close();
        gcliente.close();
        consultac.close();
        getch();
    }

  	Temp.close();
    gcliente.close();
  	consultac.close();
    remove("Clientes.txt");
    rename("Temp.txt","Clientes.txt");
}
void modempleados()
{
	ifstream consultal;
	ifstream Temp;
	ifstream log;
	system("cls");
	Temp.close();
	consultal.close();
	log.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color E");
  	int i;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl<<endl;
  	consultal.close();
  	bool encontrado;
    encontrado=false;
    log.open("Login.txt",ios::app);
  	Temp.open("Temp.txt");
    consultal.open("Login.txt");
    gotoxy(15,6);
    for(i=0;i<50;i++)
    {
        printf("%c",240); 
    }
    gotoxy(15,27);
    for(i=0;i<50;i++)
    {
        printf("%c",240);
    }
    gotoxy(28,7);
    cout<<"MODIFICACION DE EMPLEADOS"<<endl;
    gotoxy(20,9);
  	cout<<"Ingrese Su Codigo:............";cin>>login.auxcodigo;
    gotoxy(20,10);
    cout<<"Ingrese Su Contrasena:........";cin>>login.auxcontr;
  	consultal>>login.codigo;
  	while(!consultal.eof())
  	{
  		consultal>>login.apellidos>>login.nombre>>login.dpi>>login.por>>login.user>>login.contr;
  		//int result=(strcmp(login.codigo==login.auxcodigo)&&(strcmp(login.auxcontr, login.contr));
  	    //if((login.codigo==login.auxcodigo)&&(strcmp(login.auxcontr, login.contr) == 0))
      	
      	//if(result==0)
  		
  		{
        encontrado=true;
        gotoxy(20,11);
        cout<<"Codigo del Empleado:.........."<<login.codigo<<endl<<endl;
        gotoxy(20,12);
        cout<<"Apellido del Empleado:........"<<login.apellidos<<endl;
        gotoxy(20,13);
        cout<<"Nombre del Empleado:.........."<<login.nombre<<endl;
        gotoxy(20,14);
        cout<<"DPI del Empleado:............."<<login.dpi<<endl;
        gotoxy(20,15);
        cout<<"Porcentaje de Ganancia:......."<<login.por<<endl;
        gotoxy(20,16);
        cout<<"Usuario:......................"<<login.user<<endl;
        gotoxy(20,18);
        cout<<"Ingrese los nuevos campos para el registro"<<endl;
        gotoxy(20,20);
        cout<<"Apellido del Empleado:........";cin>>login.auxapellidos;
        gotoxy(20,21);
        cout<<"Nombre del Empleado:..........";cin>>login.auxnombre;
        gotoxy(20,22);
        cout<<"DPI del Empleado:.............";cin>>login.auxdpi;
        gotoxy(20,23);
        cout<<"Porcentaje de Ganancia:.......";cin>>login.auxpor;
        gotoxy(20,24);
        cout<<"Contrasena:...................";cin>>login.auxcontr;
        gotoxy(20,25);
        cout<<"Modificado!"<<endl;
        gotoxy(18,26);
        cout<<"Se actualizara la proxima vez que inicie sesion"<<endl;
        getch();
        //Temp<<login.codigo<<" "<<login.auxapellidos<<" "<<login.auxnombre<<" "<<login.auxdpi<<" "<<login.auxpor<<" "<<login.user<<" "<<login.auxcontr<<endl;
  		}
  		//else
  		{
  			//Temp<<login.codigo<<" "<<login.apellidos<<" "<<login.nombre<<" "<<login.dpi<<" "<<login.por<<" "<<login.user<<" "<<login.contr<<endl;

  		}
      consultal>>login.codigo;
    }

    if(encontrado==false)
    {
    	gotoxy(20,11);
        cout<<"Codigo o Contrasena incorrectas"<<endl;
        Temp.close();
	  	consultal.close();
	    log.close();
        getch();
    }
    if(encontrado==true){
    	Temp.close();
	  	consultal.close();
	    log.close();
	    remove("Login.txt");
	    rename("Temp.txt","Login.txt");

    }	
}
void modproductos()
{
	ofstream Temp;
	ofstream consultapi;
	ofstream productos;
	ofstream consultap;
	system("cls");
	Temp.close();
  	consultapi.close();
    productos.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color E");
  	int i;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl<<endl;
  	bool encontrado;
    encontrado=false;
  	Temp.open("Temp.txt");
    productos.open("Productos.txt",ios::app);
  	consultap.open("Proveedores.txt");
    consultapi.open("Productos.txt");
    gotoxy(15,7);
    for(i=0;i<50;i++){

        printf("%c",240); 
    }
    gotoxy(15,31);
    for(i=0;i<50;i++)
    {
        printf("%c",240);
    }
    gotoxy(28,8);
    cout<<"MODIFICACION DE PRODUCTOS"<<endl;
    gotoxy(17,10);
  	cout<<"Ingrese el Codigo del Producto a modificar: ";
  	cin>>ingreso.auxcod;
  	//consultapi>>ingreso.cod;
  	while(!consultapi.eof())
  	{

  		//consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
  		if(ingreso.cod==ingreso.auxcod)
  		{
            encontrado=true;
            gotoxy(21,11);
            cout<<"Codigo del Producto:.........."<<ingreso.cod<<endl<<endl;
            gotoxy(21,12);
            cout<<"Nombre del Producto:.........."<<ingreso.nombre<<endl;
            gotoxy(21,13);
            cout<<"Descripcion del Producto:....."<<ingreso.descripcion<<endl;
            gotoxy(21,14);
            cout<<"Costo del Producto:..........."<<ingreso.costo<<endl;
            gotoxy(21,15);
            cout<<"Porcentaje de Ganancia:......."<<ingreso.ganancia<<endl;
            gotoxy(21,16);
            cout<<"Proveedor:...................."<<ingreso.proveedor<<endl;
            gotoxy(21,17);
            cout<<"Limite Minimo de Existencia:.."<<ingreso.min<<endl;
            gotoxy(21,18);
            cout<<"Limite Maximo de Existencia:.."<<ingreso.max<<endl;
            gotoxy(17,20);
            cout<<"Ingrese los nuevos campos para el registro"<<endl;
            gotoxy(21,22);
            cout<<"Nombre del Producto:..........";cin>>ingreso.auxnombre;
            gotoxy(21,23);
            cout<<"Descripcion del Producto:.....";cin>>ingreso.auxdescripcion;
            gotoxy(21,24);
            cout<<"Costo del Producto:...........";cin>>ingreso.auxcosto;
            gotoxy(21,25);
            cout<<"Porcentaje de Ganancia:.......";cin>>ingreso.auxganancia;
            gotoxy(21,26);
            cout<<"Nit Del Proveedor:............";cin>>ingreso.nit;
            //consultap>>prov.nit;
            bool repetido=false;
            while(!consultap.eof())
      		{
      			//consultap>>prov.nombre>>prov.direccion>>prov.telefono;
      			int result=strcmp(ingreso.nit,prov.nit);
      			if(result == 0)
      			{
                    gotoxy(21,27);
      			    cout<<"Nombre del Proveedor:........."<<prov.nombre<<endl;
      			    //strcpy(ingreso.auxproveedor,prov.nombre);
      			    repetido=true;
      			    break;
      			}
      		    //consultap>>prov.nit;
      		}	
            gotoxy(21,28);
            cout<<"Limite Minimo de Existencia:..";cin>>ingreso.auxmin;
            gotoxy(21,29);
            cout<<"Limite Maximo de Existencia:..";cin>>ingreso.auxmax;
      		Temp<<ingreso.cod<<" "<<ingreso.auxnombre<<" "<<ingreso.auxdescripcion<<" "<<ingreso.auxcosto<<" "<<ingreso.auxganancia<<" "<<ingreso.auxproveedor<<" "<<ingreso.auxmin<<" "<<ingreso.auxmax<<endl;
            gotoxy(21,30);
            cout<<"Modificado!"<<endl;
            getch();
  		}
  		else
  		{
  			Temp<<ingreso.cod<<" "<<ingreso.nombre<<" "<<ingreso.descripcion<<" "<<ingreso.costo<<" "<<ingreso.ganancia<<" "<<ingreso.proveedor<<" "<<ingreso.min<<" "<<ingreso.max<<endl;
  		}
        //consultapi>>ingreso.cod;
    }
    if(encontrado==false)
    {
        gotoxy(28,11);
        cout<<"Codigo no ha sido creado"<<endl;
        getch();
    }
  	Temp.close();
  	consultapi.close();
    productos.close();
    remove("Productos.txt");
    rename("Temp.txt","Productos.txt");
}
void modproveedores()
{
	ofstream Temp;
	ofstream consultap;
	ofstream gproveedores;
	system("cls");
    Temp.close();
    consultap.close();
    gproveedores.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color E");
  	int i;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl<<endl;
  	bool encontrado;
    encontrado=false;
  	Temp.open("Temp.txt");
    gproveedores.open("Proveedores.txt",ios::app);
    consultap.open("Proveedores.txt");
    gotoxy(15,7);
    for(i=0;i<50;i++)
    {
        printf("%c",240); 
    }
    gotoxy(15,23);
    for(i=0;i<50;i++)
    {
        printf("%c",240);
    }
    gotoxy(27,8);
    cout<<"MODIFICACION DE PROVEEDORES"<<endl;
    gotoxy(20,10);
    cout<<"Ingrese el NIT del Proveedor a modificar: ";
  	cin>>prov.auxnit;
  	//consultap>>prov.nit;
  	while(!consultap.eof())
  	{
  		//consultap>>prov.nombre>>prov.direccion>>prov.telefono;
  		int result=strcmp(prov.nit,prov.auxnit);
  		
  		//if((strcmp(prov.nit,prov.auxnit) == 0))
  		if(result==0)
  		{
            encontrado=true;
            gotoxy(20,11);
            cout<<"NIT del Proveedor:................"<<prov.nit<<endl<<endl;
            gotoxy(20,12);
            cout<<"Nombre del Proveedor:............."<<prov.nombre<<endl;
            gotoxy(20,13);
            cout<<"Direccion del Proveedor:.........."<<prov.direccion<<endl;
            gotoxy(20,14);
            cout<<"Telefono del Proveedor:..........."<<prov.telefono<<endl;
            gotoxy(20,16);
            cout<<"Ingrese los nuevos campos para el registro"<<endl;
            gotoxy(20,18);
      		cout<<"NIT del Proveedor:.................";cin>>prov.auxnit;
            gotoxy(20,19);
      		cout<<"Nombre del Proveedor:..............";cin>>prov.auxnombre;
            gotoxy(20,20);
      		cout<<"Direccion del Proveedor:...........";cin>>prov.auxdireccion;
            gotoxy(20,21);
      		cout<<"Telefono del Proveedor:............";cin>>prov.auxtelefono;
            gotoxy(20,22);
            cout<<"Modificado!"<<endl;
      		Temp<<prov.auxnit<<" "<<prov.auxnombre<<" "<<prov.auxdireccion<<" "<<prov.auxtelefono<<endl;
            getch();
  		}
  		else
  		{
  			Temp<<prov.nit<<" "<<prov.nombre<<" "<<prov.direccion<<" "<<prov.telefono<<endl;
  		}
        //consultap>>prov.nit;
    }

    if(encontrado==false)
    {
        gotoxy(26,11);
        cout<<"No. de NIT no ha sido creado"<<endl;
        getch();
    }

  	Temp.close();
  	consultap.close();
    gproveedores.close();
    remove("Proveedores.txt");
    rename("Temp.txt","Proveedores.txt");
}
void reportes()
{
    int opcion,i;
    while(opcion!=8)
    {
        system("cls");
        time_t tiempo = time(0);
    	struct tm *tlocal = localtime(&tiempo);
    	char output[128];
    	strftime(output,128,"%d/%m/%y %H:%M",tlocal);
        system("Color E");
        gotoxy(2,2);
        cout<<nombre<<" "<<apellido<<endl;
        codigo;
        gotoxy(2,3);
        printf("%s\n",output);
        //cout<<"Fecha "<<fecha<<endl;
        gotoxy(15,9);
        for(i=0;i<50;i++)
        {
            printf("%c",240); 
        }
        gotoxy(15,21);
        for(i=0;i<50;i++)
        {
            printf("%c",240);
        }
        for(i=1;i<81;i++){
            gotoxy(i,1);
            printf("%c",219);
            gotoxy(i,25);
            printf("%c",219);
        }
        for(i=1;i<25;i++){
            gotoxy(1,i);
            printf("%c",219);
            gotoxy(80,i);
            printf("%c",219);
        }
        gotoxy(36,10);
        cout<<"REPORTES"<<endl;
        gotoxy(25,12);
        cout<<"1.......Comisiones Por Vendedor"<<endl;
        gotoxy(25,13);
        cout<<"2.......Ventas del Dia"<<endl;
        gotoxy(25,14);
        cout<<"3.......Clientes"<<endl;
        gotoxy(25,15);
        cout<<"4.......Proveedores"<<endl;
        gotoxy(25,16);
        cout<<"5.......Productos"<<endl;
        gotoxy(25,17);
        cout<<"6.......Existencia en Inventario"<<endl;
        gotoxy(25,18);
        cout<<"7.......Productos a Comprar"<<endl;
        gotoxy(25,19);
        cout<<"8.......Principal"<<endl;
        gotoxy(25,20);
        cin>>opcion;
        switch(opcion)
        {
            case 1:{
                comisionvendedor();
                break;
            }
            case 2:{
                ventasdeldia();
                break;
            }
            case 3:{
        	    reclientes();
                break;
            }
            case 4:{
                reproveedores();
                break;
            }
            case 5:{
                reproductos();
                break;
            }
            case 6:{
                existenciainventario();
                break;
            }
            case 7:{
                productoacomprar();
                break;
            }
            case 8:{
                break;
            }
        }
    }  
}
void loge()
{
  	system("cls");
	int res=0;
  	ofstream log;
    log.close();
    system("Color F");
    log.open("Login.txt",ios::app);
  	bool si=false;
    gotoxy(26,11);
  	cout<<"Ingrese Usuario....: ";
  	cin>>login.iuser;
    gotoxy(26,12);
    cout<<"Ingrese Contrasena.: ";
  	cin>>login.icontr;
  	ifstream consultal;
	string texto;
	consultal.open("Login.txt",ios::in); //abriendo archivo
	if(consultal.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
  	while(!consultal.eof())
  	{
  		
  	while(getline(consultal,login.user))
	{
		if(login.user.find(login.auxuser) != string::npos)
		{
			cout<<login.user<<endl;
			getline(consultal,login.nombre);
			cout<<login.nombre<<endl;
			getline(consultal,login.apellidos);
			cout<<login.apellidos<<endl;
			getline(consultal,login.contr);
			cout<<login.contr<<endl;
			int result = strcmp(login.user.c_str(), login.iuser.c_str());
  			int result2 = strcmp(login.contr.c_str(), login.icontr.c_str());
  		if (result==0&&result2==0)
  	  	{
  	    	system("cls");
        	system("Color F");
        	gotoxy(28,12);
  	    	cout<<"Bienvenido "<<login.nombre<<" "<<login.apellidos<<"!!"<<endl;
        	getch();
  	    	menu();
  	  	}else {
      	system("cls");
      	system("Color C");
      	gotoxy(26,12);
      	cout<<"Usuario o contraseņa incorrecto "<<endl;
  		getch();
  		}
			
			
			res = 1;
		}
	}
	if (res==0){
		cout<<login.auxuser<<"no encontrado..."<<endl;
	}
	
  		
  }
  	consultal.close();
    log.close();
}

void ingresolog()
{
  	system("cls");
  	ofstream log;
  	string auxuser, linea,linea2,linea3,linea4,linea5,linea6,linea7;
	int res=0;
  	ifstream consultal;
	consultal.open("Login.txt",ios::in); //abriendo archivo
	log.open("Login.txt",ios::in); //abriendo archivo
  	log.close();
    system("Color E");
    gotoxy(30,5);
    cout<<"Creacion de Usuarios"<<endl;
    cout<<endl<<endl;
    bool repetido=false;
    string codigo;
    log.open("Login.txt",ios::app);
    cout<<endl<<endl;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
    system("Color E");printf("NOTA: el Codigo y el Usuario No se podran modificar en un futuro");
    cout<<endl<<endl;
    cout<<"                   Ingrese Usuario (Nick).......: ";cin>>login.auxuser;
    
    
	if(consultal.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	while(getline(consultal,linea))
	{
		if(linea.find(login.auxuser) != string::npos)
		{
			system("cls");
        	gotoxy(20,10);
        	system("Color E");printf("Lo sentimos, Codigo o Usuario ya en Uso");
        	log.close();	
			res = 1;
		}
		
	}
	if (res==0){
		cout<<"                   Usuario Disponible...........: "<<login.auxuser<<endl;
		cout<<"                   Ingrese Nombre...............: ";cin>>login.nombre;
      	cout<<"                   Ingrese Apellido.............: ";cin>>login.apellidos;
      	cout<<"                   Ingrese Pass.................: ";cin>>login.contr;
      	cout<<endl<<endl;
      	cout<<"                            Guardado Correctamente"<<endl;
      	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
		log <<login.auxuser<<endl;
		log <<login.nombre<<endl;
		log <<login.apellidos<<endl;
		log <<login.contr<<endl;
		log.close();
        consultal.close();
        
	}
	system("pause");
}


void proveedores()
{
	ifstream gproveedores;
	ifstream consultap;
	system("cls");
	gproveedores.close();
    consultap.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color F");
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    int i;
    cout<<"Fecha "<<fecha<<endl;
    gotoxy(13,9);
    for(i=0;i<55;i++)
    {
        printf("%c",254);  
    }
    gotoxy(13,17);
    for(i=0;i<55;i++)
    {
        printf("%c",254); 
    }
    gotoxy(29,10);
    cout<<"INGRESO DE PROVEEDORES"<<endl;
    bool repetido=false;
    gproveedores.open("Proveedores.txt",ios::app);
    consultap.open("Proveedores.txt");
    gotoxy(16,12);
    cout<<"Ingrese NIT del Proveedor..............: ";cin>>prov.auxnit;
    consultap>>prov.nit;
    while(!consultap.eof())
    {
        consultap>>prov.nombre>>prov.direccion>>prov.telefono;
        if((strcmp(prov.auxnit, prov.nit) == 0))
        {
            gotoxy(16,13);
            cout<<"Ya existe un Proveedor con el NIT No.: "<<prov.auxnit<<endl;
            repetido=true;
            break;
        }
        consultap>>prov.nit;
    }	

    if(repetido==false)
    {
        gotoxy(16,13);
        cout<<"Ingrese Nombre del Proveedor...........: ";cin >>prov.nombre;
        gotoxy(16,14);
        cout<<"Ingrese Direccion del Proveedor........: ";cin >>prov.direccion;
        gotoxy(16,15);
        cout<<"Ingrese Telefono del Proveedor........ : ";cin >>prov.telefono;
        gotoxy(16,16);
        cout<<"Guardado Correctamente..."<<endl;
        //gproveedores<<prov.auxnit<<" "<<prov.nombre<<" "<<prov.direccion<<" "<<prov.telefono<<" "<<endl;
    }

    gproveedores.close();
    consultap.close();
    getch();
}
void facturacion()
{
	system("cls");
	ifstream ventas;
	ifstream ginventario;
	ifstream gcliente;
	ifstream productos;
	ifstream consultav;
	ifstream consultac;
	ifstream consultapi;
	ifstream consultap;
	ventas.close();
    ginventario.close();
    gcliente.close();
    productos.close();
    consultav.close();
    consultac.close();
    consultapi.close();
    consultap.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    ventas.open("Ventas.txt",ios::app);
    ginventario.open("Inventario.txt",ios::app);
    gcliente.open("Clientes.txt",ios::app);
    productos.open("Productos.txt",ios::app);
    consultav.open("Ventas.txt");
    consultac.open("Clientes.txt");
    consultapi.open("Productos.txt");
    consultap.open("Inventario.txt");
    system("Color F");
    float precio=0.00;
    bool encontrado=false;
    bool encontrado2=false;
    bool nofac=false;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl<<endl;
    cout<<"          /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*"<<endl;
    gotoxy(34,6);
    cout<<"FACTURACION"<<endl;
    gotoxy(24,8);
    cout<<"Ingrese  numero de factura ";cin>>fac.auxnofactura;
    consultav>>fac.nofactura;
    while(!consultav.eof())
    {
        consultav>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo;
        if(fac.auxnofactura==fac.nofactura)
        {
      	    gotoxy(24,10);
            cout<<"Factura Ya en uso"<<endl;
            nofac=true;
            ventas.close();
            ginventario.close();
            gcliente.close();
            productos.close();
            consultav.close();
            consultac.close();
            consultapi.close();
            consultap.close();
            getch();
            break;
        }
        consultav>>fac.nofactura;
    }
    fac.nofactura=fac.auxnofactura;
    if (nofac==false)
    {
        consultav.close(); 
        gotoxy(24,9);
        cout<<"Ingrese Codigo del Cliente ";cin>>fac.codcliente;
        consultav.open("Ventas.txt");
        consultac>>cliente.nit;
        while(!consultac.eof())
        {
            consultac>>cliente.nombre>>cliente.direccion>>cliente.telefono>>cliente.limitecredito;
           // if(strcmp(fac.codcliente, cliente.nit) == 0)
            {
                gotoxy(24,10);
                cout<<"Nombre Cliente............ "<<cliente.nombre<<endl;
                gotoxy(24,11);
                cout<<"NIT Cliente............... "<<cliente.nit<<endl;
                gotoxy(24,12);
                cout<<"Direccion Cliente......... "<<cliente.direccion<<endl;
                gotoxy(24,13);
                cout<<"Telefono Cliente........... "<<cliente.telefono<<endl;

                encontrado=true;
                break;
            }
            consultac>>cliente.nit;
        } 
    if(encontrado==false)
    {
      	gotoxy(24,10);
        cout<<"No encontrado"<<endl;
        getch();
        ventas.close();
        ginventario.close();
        gcliente.close();
        productos.close();
        consultav.close();
        consultac.close();
        consultapi.close();
        consultap.close();
        return;
      }
    int  existencia=0,resta=0;
    char auxcod[10];
    gotoxy(24,14);
    cout<<"Ingrese codigo del producto ";cin>>auxcod; 
    consultap>>inv.cod;
    consultav>>fac.auxnofactura;
    while(!consultav.eof())
    {
        consultav>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo;
        int result=(strcmp(auxcod, fac.auxcod));
		
  		if(result==0)
		//if(auxcod==fac.auxcod)
        {
            resta=fac.cantidad+resta;
        }
        consultav>>fac.auxnofactura;
    }
    while(!consultap.eof())
    {
        consultap>>inv.nombre>>inv.descripcion>>inv.costo>>inv.ganancia>>inv.proveedor>>inv.cantidad;
        if(auxcod==inv.cod)
        {
            existencia=(inv.cantidad+existencia);
        }
        consultap>>inv.cod;
    }

    consultapi>>ingreso.cod;
    while(!consultapi.eof())
    {
        consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
        if(ingreso.cod==auxcod)
        {
            gotoxy(24,15);
            cout<<"Nombre Producto...... "<<ingreso.nombre<<endl;
            gotoxy(24,16);
            cout<<"Descripcion Producto. "<<ingreso.descripcion<<endl;
            int precio=((ingreso.costo*ingreso.ganancia)/100)+ingreso.costo;
            gotoxy(24,17);
            cout<<"Costo Producto....... "<<precio<<endl;
            encontrado2=true;
            break;
        }
        consultapi>>ingreso.cod;
    }

    if(encontrado2==false)
    {
      	gotoxy(24,16);
        cout<<"no encontrado"<<endl;
        getch();
        ventas.close();
        ginventario.close();
        gcliente.close();
        productos.close();
        consultav.close();
        consultac.close();
        consultapi.close();
        consultap.close();
        return;
    }
    gotoxy(24,18);
    cout<<"TOTAL EN EXISTENCIA.. "<<(existencia-resta)<<endl;
    int comprar=(existencia-resta);
    gotoxy(24,19);
    cout<<"Cantidad Producto.... ";cin>>fac.cantidad;
    while(fac.cantidad>comprar)
    {
        cout<<"                       La cantidad maxima a vender es; "<<(existencia-resta)<<endl;
        cout<<"                       Cantidad Producto.... ";cin>>fac.cantidad;
    }
    fac.total=(((ingreso.costo*ingreso.ganancia)/100)+ingreso.costo)*fac.cantidad;
    cout<<"                       Total Venta.......... "<<fac.total<<endl;
    cout<<"                       Venta Almacenada"<<endl;
    cout<<"          /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*"<<endl;
    /*fac.codigo=codigo;
    strcpy(fac.nombrecliente,cliente.nombre);
    strcpy(fac.nitcliente,cliente.nit);
    strcpy(fac.direccioncliente,cliente.direccion);
    fac.telefonocliente=cliente.telefono;
    fac.auxcod=auxcod;
    strcpy(fac.fecha,fecha);
    strcpy(fac.descripcionproducto,ingreso.descripcion);
    strcpy(fac.nombreproducto,ingreso.nombre);
    fac.costo=precio;*/
    getch();
    //ventas<<fac.nofactura<<" "<<fac.nombrecliente<<" "<<fac.nitcliente<<" "<<fac.direccioncliente<<" "<<fac.telefonocliente<<" "<<fac.fecha<<" "<<fac.auxcod<<" "<<fac.nombreproducto<<" "<<fac.descripcionproducto<<" "<<fac.costo<<" "<<fac.cantidad<<" "<<fac.total<<" "<<fac.codigo<<endl;
    ventas.close();
    ginventario.close();
    gcliente.close();
    productos.close();
    consultav.close();
    consultac.close();
    consultapi.close();
    consultap.close();
    }
}
void existenciainventario()
{
    system("cls");
    ifstream ventas;
    ifstream consultav;
    ifstream consultac;
    ifstream consultapi;
    ifstream consultap;
    ventas.close();
    consultav.close();
    consultac.close();
    consultapi.close();
    consultap.close();
    system("Color A");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    cout<<nombre<<" "<<apellido<<endl;
    char codigo[10],cod[10];
    cout<<"Fecha "<<fecha<<endl;
    int existencia=0,resta=0,i;
    float precio=0.00;
    bool encontrado=false;
    ventas.open("Ventas.txt",ios::app);
    //ginventario.open("Inventario.txt",ios::app);
    consultav.open("Ventas.txt");
    consultap.open("Inventario.txt");
    consultapi.open("Productos.txt");
    gotoxy(13,6);
    for(i=0;i<55;i++)
    {
        printf("%c",254);
    }
    gotoxy(13,15);
    for(i=0;i<55;i++)
    {
        printf("%c",254); 
    }
    gotoxy(22,7);
    cout<<"EXISTENCIA DE PRODUCTOS EN INVENTARIO"<<endl;
    gotoxy(26,9);
    cout<<"Ingrese Codigo del Producto ";cin>>cod;
    cout<<endl; 
    consultap>>inv.cod;
    consultav>>fac.auxnofactura;
    while(!consultav.eof())
    {
        consultav>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo;
        
		if(cod==fac.auxcod)
        {
            resta=fac.cantidad+resta;
        }
        consultav>>fac.auxnofactura;
    }
    while(!consultap.eof())
    {
        consultap>>inv.nombre>>inv.descripcion>>inv.costo>>inv.ganancia>>inv.proveedor>>inv.cantidad;
        if(cod==inv.cod)
        {
            existencia=(inv.cantidad+existencia);
        }
        consultap>>inv.cod;
    }
    consultapi>>ingreso.cod;
    while(!consultapi.eof())
    {
        consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
        if(ingreso.cod==cod)
        {
      	    gotoxy(26,10);
            cout<<"Nombre Producto........... "<<ingreso.nombre<<endl;
            gotoxy(26,11);
            cout<<"Descripcion Producto...... "<<ingreso.descripcion<<endl;
            precio=((ingreso.costo*ingreso.ganancia)/100)+ingreso.costo;
            gotoxy(26,12);
            cout<<"Costo Producto............ "<<precio<<endl;
            encontrado=true;
        }
        consultapi>>ingreso.cod;
    }

    if(encontrado==false)
    {
        gotoxy(34,11);
        cout<<"No encontrado"<<endl;
        getch();
        ventas.close();
        consultav.close();
        consultac.close();
        consultapi.close();
        consultap.close();
        return;
    }
  	gotoxy(26,14);
    cout<<"TOTAL EN EXISTENCIA.. "<<(existencia-resta)<<endl;
    getch();
    ventas.close();
    consultav.close();
    consultac.close();
    consultapi.close();
    consultap.close();
}
void productoacomprar()
{
    system("cls");
    ifstream ventas;
    ifstream consultav;
    ifstream consultac;
    ifstream consultapi;
    ifstream consultap;
    ventas.close();
    consultav.close();
    consultac.close();
    consultapi.close();
    consultap.close();
    system("Color A");
    bool encontrado=false;
    ventas.open("Ventas.txt",ios::app);
    //ginventario.open("Inventario.txt",ios::app);
    consultapi.open("Productos.txt");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
	  cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl<<endl<<endl;
    cout<<"Aca aparecen todos los productos con la cantidad minima de existencia o menos."<<endl<<endl<<endl;
    consultapi>>ingreso.cod;
    while(!consultapi.eof())
    {
        consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
        int comprar=0,existencia=0,resta=0;
        consultav.close();
        consultap.close();
        consultav.open("Ventas.txt");
        consultap.open("Inventario.txt");
        consultav>>fac.auxnofactura;
        while(!consultav.eof())
        {
            consultav>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo;
            if(ingreso.cod==fac.auxcod)
            {
                resta=fac.cantidad+resta;
            }
            consultav>>fac.auxnofactura;
        }
        consultap>>inv.cod;
        while(!consultap.eof())
        {
            consultap>>inv.nombre>>inv.descripcion>>inv.costo>>inv.ganancia>>inv.proveedor>>inv.cantidad;
            if(ingreso.cod==inv.cod)
            {
                existencia=(inv.cantidad+existencia);
            }
            consultap>>inv.cod;
        }
        comprar=(existencia-resta);
        if(comprar<=ingreso.min)
        {
          	cout<<"          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"                         CODIGO DEL PRODUCTO.. "<<ingreso.cod<<endl<<endl;
            cout<<"                         Nombre Producto...... "<<ingreso.nombre<<endl;
            cout<<"                         Descripcion Producto. "<<ingreso.descripcion<<endl;
            cout<<"                         Costo Producto....... "<<ingreso.costo<<endl;
            cout<<"                         Minimo en existencia. "<<ingreso.min<<endl;
            cout<<"                         Maximo en existencia. "<<ingreso.max<<endl;
            cout<<"                         TOTAL EN EXISTENCIA.. "<<comprar<<endl<<endl;
        }
        consultapi>>ingreso.cod;
    }
    cout<<"          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    ventas.close();
    consultav.close();
    consultac.close();
    consultapi.close();
    consultap.close();
    getch();
}
void ventasdeldia()
{
	system("cls");
	ifstream ventas;
	ifstream consultav;
	ventas.close();
    consultav.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color A");
    float total=0.00;
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl<<endl<<endl;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
    cout<<"                                VENTAS DEL DIA"<<endl<<endl;
    ventas.open("Ventas.txt",ios::app);
    consultav.open("Ventas.txt");
    consultav>>fac.nofactura;
    while(!consultav.eof())
    {
        consultav>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo;
        if (strcmp(fac.fecha, fecha) == 0)
        {
            cout<<"                    Numero de Factura........... "<<fac.nofactura<<endl;
            cout<<"                    Nit del Cliente............. "<<fac.nitcliente<<endl;
            cout<<"                    Nombre del Cliente.......... "<<fac.nombrecliente<<endl;
            cout<<"                    Direccion del Cliente....... "<<fac.direccioncliente<<endl;
            cout<<"                    No. de Telefono del Cliente. "<<fac.telefonocliente<<endl;
            cout<<"                    Fecha de Venta.............. "<<fac.fecha<<endl;
            cout<<"                    Codigo del Producto......... "<<fac.auxcod<<endl;
            cout<<"                    Nombre del Producto......... "<<fac.nombreproducto<<endl;
            cout<<"                    Descripcion del Producto.... "<<fac.descripcionproducto<<endl;
            cout<<"                    Costo de Venta.............. "<<fac.costo<<endl;
            cout<<"                    Cantidad de Venta........... "<<fac.cantidad<<endl;
            cout<<"                    Total de Venta.............. "<<fac.total<<endl;
            total=fac.total+total;
            cout<<endl<<endl;
        }
        consultav>>fac.nofactura;
    }
    cout<<"                         Total de las Ventas del Dia. "<<total<<endl;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
    getch();
    ventas.close();
    consultav.close();
}
void comisionvendedor()
{
    system("cls");
    ifstream ventas;
    ifstream consultav;
    ifstream log;
    ifstream consultal;
    ventas.close();
    consultav.close();
    log.close();
    //consultal.close();
    consultal.close();
    system("Color A");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    int i;
    char empleado[10];
    ventas.open("Ventas.txt",ios::app);
    consultav.open("Ventas.txt");
    log.open("Login.txt",ios::app);
    consultal.open("Login.txt");
    float total=0.00,comision=0.00;
    int porcentaje=0;
    gotoxy(15,5);
    for(i=0;i<50;i++)
    {
        printf("%c",126); 
    }
    gotoxy(15,12);
    for(i=0;i<50;i++)
    {
        printf("%c",126);
    }
    gotoxy(28,6);
    cout<<"COMISIONES DEL VENDEDOR"<<endl;
    gotoxy(26,8);
    cout<<"Ingrese Codigo del Empleado ";cin>>empleado;
    bool encontrado=false;
    consultal>>login.codigo;
    while(!consultal.eof())
    {
        consultal>>login.apellidos>>login.nombre>>login.dpi>>login.por>>login.user>>login.contr;
        if(empleado==login.codigo)
        {
           // porcentaje=login.por;
            encontrado=true;
            consultav>>fac.nofactura;
            while(!consultav.eof())
            {
                consultav>>fac.nombrecliente>>fac.nitcliente>>fac.direccioncliente>>fac.telefonocliente>>fac.fecha>>fac.auxcod>>fac.nombreproducto>>fac.descripcionproducto>>fac.costo>>fac.cantidad>>fac.total>>fac.codigo;
                if(empleado==fac.codigo)
                {
                    total=total+fac.total;
                }
                consultav>>fac.nofactura;
            }

            break;
        }
        consultal>>login.codigo;
    } 
    comision=(total*porcentaje)/100;
    gotoxy(28,10);
    cout<<"El "<<porcentaje<<" Porciento Sobre; Q"<<total<<endl;
    gotoxy(24,11);
    cout<<"La comision del vendedor es; Q"<<comision<<endl;
    getch();    
    ventas.close();
    consultav.close();
    log.close();
    consultal.close();
}
void eliminaciones()
{
    system("Color E");
    int opcion, i;
    system("cls");
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output,128,"%d/%m/%y %H:%M",tlocal);
    gotoxy(2,2);
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    gotoxy(2,3);
    printf("%s\n",output);
    gotoxy(15,9);
    for(i=0;i<50;i++)
    {
        printf("%c",240); 
    }
    gotoxy(15,18);
    for(i=0;i<50;i++)
    {
        printf("%c",240);  
    }
    for(i=1;i<81;i++)
    {
        gotoxy(i,1);
        printf("%c",219);
        gotoxy(i,25);
        printf("%c",219);
    }
    for(i=1;i<25;i++)
    {
        gotoxy(1,i);
        printf("%c",219);
        gotoxy(80,i);
        printf("%c",219);
    }
    gotoxy(37,11);
    cout<<"ELIMINACIONES"<<endl;
    gotoxy(23,13);
    cout<<"1..........Productos al inventario"<<endl;
    gotoxy(23,14);
    cout<<"2..........Clientes"<<endl;
    gotoxy(23,15);
    cout<<"3..........Proveedores"<<endl;
    gotoxy(23,16);
    cout<<"4..........Principal"<<endl;
    gotoxy(23,17);
    cin>>opcion;
    switch(opcion)
    {
        case 1:{  
            eliproductosinventario();
            break;
        }
        case 2:{
            eliclientes();
            break;
        }
        case 3:{
            eliproveedores();
            break;
        }
        case 4:{
            break;
        }
    }  
}
void eliproductosinventario()
{
    system("cls");
    ifstream consultapi;
    ifstream Temp;
    ifstream productos;
    consultapi.close();
    Temp.close();
    productos.close();
    system("Color C");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    bool repetido=false;
    consultapi.open("Productos.txt");
    productos.open("Productos.txt",ios::app);
    Temp.open("Temp.txt");
    int i;
    char auxcod[10];
    gotoxy(13,5);
	for(i=0;i<55;i++)
    {
	    printf("%c",223);
	      
	}
	gotoxy(13,21);
	for(i=0;i<55;i++)
    {
	    printf("%c",223); 
	}
	gotoxy(27,6);
    cout<<"ELIMINACION DE PRODUCTOS"<<endl;
    gotoxy(25,8);
    cout<<"Ingrese Codigo del Producto ";cin>>auxcod;
    consultapi>>ingreso.cod; 
    while(!consultapi.eof())
    {
        consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
        if(auxcod==ingreso.cod)
        {
            repetido=true;
            gotoxy(25,11);
            cout<<"Nombre Producto:........... "<<ingreso.nombre<<endl;
            gotoxy(25,12);
            cout<<"Descripcion del Producto:.. "<<ingreso.descripcion<<endl;
            gotoxy(25,13);
            cout<<"Costo del Producto:........ "<<ingreso.costo<<endl;
            gotoxy(25,14);
            cout<<"Ganancia del Producto:..... "<<ingreso.ganancia<<endl;
            gotoxy(25,15);
            cout<<"Proveedor del Producto:.... "<<ingreso.proveedor<<endl;
            gotoxy(25,16);
            cout<<"Min del Producto:.......... "<<ingreso.min<<endl;
            gotoxy(25,17);
            cout<<"Max del Producto:.......... "<<ingreso.max<<endl;
            consultapi.close();
            productos.close();
            gotoxy(25,19);
            cout<<"Esta Seguro de eliminar s/n?"<<endl;
            char eliminar[2];
            gotoxy(25,20);
            cin>>eliminar;
            if ((strcmp(eliminar, "s")==0)|(strcmp(eliminar, "S")==0))
            {
                consultapi.open("Productos.txt");
                productos.open("Productos.txt",ios::app);
                consultapi>>ingreso.cod;
                while(!consultapi.eof())
                {
                    consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
                    if(auxcod==ingreso.cod)
                    {
                        system("cls");
                        gotoxy(29,11);
                        cout<<"Eliminado Correctamente"<<endl;   
                    }
                    else
                    {
                        //Temp<<ingreso.cod<<" "<<ingreso.nombre<<" "<<ingreso.descripcion<<" "<<ingreso.costo<<" "<<ingreso.ganancia<<" "<<ingreso.proveedor<<" "<<" "<<ingreso.min<<" "<<ingreso.max<<endl;
                    }
                    //consultapi>>ingreso.cod;
                }
                getch();
                consultapi.close();
                Temp.close();
                productos.close();
                remove("Productos.txt");
                rename("Temp.txt","Productos.txt"); 
            }
        }
        consultapi>>ingreso.cod;
    }
    if (repetido==false)
    {
        system("cls");
        gotoxy(34,11);
        cout<<"No Encontrado"<<endl;
        consultapi.close();
        Temp.close();
        productos.close();
        getch();
    }
}
void eliclientes()
{
	ifstream consultac;
	ifstream Temp;
	ifstream gcliente;
    system("cls");
    consultac.close();
    Temp.close();
    gcliente.close();
    system("Color C");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    bool repetido=false;
    gcliente.open("Clientes.txt",ios::app);
    consultac.open("Clientes.txt");
    Temp.open("Temp.txt");
    int i;
    char auxcod[30];
    gotoxy(13,5);
	for(i=0;i<55;i++)
    {
	    printf("%c",223);
	      
	}
	gotoxy(13,21);
	for(i=0;i<55;i++)
    {
	    printf("%c",223); 
	}
	gotoxy(27,6);
    cout<<"ELIMINACION DE CLIENTES"<<endl;
    gotoxy(22,8);
    cout<<"Ingrese Codigo del Cliente ";cin>>auxcod;
    consultac>>cliente.nit;
    while(!consultac.eof())
    {
        consultac>>cliente.nombre>>cliente.direccion>>cliente.telefono>>cliente.limitecredito;
        //if((strcmp(auxcod, cliente.nit)==0))
        {
            repetido=true;
            gotoxy(22,11);
            cout<<"Nombre Producto:........... "<<cliente.nombre<<endl;
            gotoxy(22,12);
            cout<<"Descripcion del Producto:.. "<<cliente.direccion<<endl;
            gotoxy(22,13);
            cout<<"Costo del Producto:........ "<<cliente.telefono<<endl;
            gotoxy(22,14);
            cout<<"Ganancia del Producto:..... "<<cliente.limitecredito<<endl;
            consultac.close();
            gcliente.close();
            gotoxy(22,19);
            cout<<"Esta Seguro de eliminar s/n?"<<endl;
            char eliminar[2];
            gotoxy(22,20);
            cin>>eliminar;
            if ((strcmp(eliminar, "s")==0)|(strcmp(eliminar, "S")==0))
            {
                gcliente.open("Clientes.txt",ios::app);
                consultac.open("Clientes.txt");
                consultac>>cliente.nit;
                while(!consultac.eof())
                {
                    consultac>>cliente.nombre>>cliente.direccion>>cliente.telefono>>cliente.limitecredito;
                    //if((strcmp(auxcod, cliente.nit)==0))
                    {
                        system("cls");
                        gotoxy(29,11);
                        cout<<"Eliminado Correctamente"<<endl;
                    }
                    //else
                    {
                        //Temp<<cliente.nit<<" "<<cliente.nombre<<" "<<cliente.direccion<<" "<<cliente.telefono<<" "<<cliente.limitecredito<<endl;
                    }
                    //consultac>>cliente.nit;
                }
            getch();
            consultac.close();
            Temp.close();
            gcliente.close();
            remove("Clientes.txt");
            rename("Temp.txt","Clientes.txt"); 
            }
        }
        consultac>>cliente.nit;
    }
    if (repetido==false){
    system("cls");
    gotoxy(34,11);
    cout<<"No Encontrado"<<endl;
    consultac.close();
    Temp.close();
    gcliente.close();
    getch();
    }
}
void eliproveedores()
{
    system("cls");
    ifstream consultap;
    ifstream Temp;
    ifstream gproveedores;
    consultap.close();
    Temp.close();
    gproveedores.close();
    system("Color C");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl;
    bool repetido=false;
    gproveedores.open("Proveedores.txt",ios::app);
    consultap.open("Proveedores.txt");
    Temp.open("Temp.txt");
    char auxcod[30];
    int i;
    gotoxy(13,5);
	for(i=0;i<55;i++)
    {
	    printf("%c",223);    
	}
	gotoxy(13,21);
	for(i=0;i<55;i++)
    {
	    printf("%c",223); 
	}
	gotoxy(27,6);
    cout<<"ELIMINACION DE PROVEEDORES"<<endl;
    gotoxy(23,8);
    cout<<"Ingrese Codigo del Proveedor ";cin>>auxcod;
    consultap>>prov.nit;
    while(!consultap.eof())
    {
        consultap>>prov.nombre>>prov.direccion>>prov.telefono;
        if((strcmp(auxcod, prov.nit)==0))
        {
            repetido=true;
            gotoxy(23,11);
            cout<<"Nombre Producto:........... "<<prov.nombre<<endl;
            gotoxy(23,12);
            cout<<"Descripcion del Producto:.. "<<prov.direccion<<endl;
            gotoxy(23,13);
            cout<<"Costo del Producto:........ "<<prov.telefono<<endl;
            consultap.close();
            gproveedores.close();
            gotoxy(23,19);
            cout<<"Esta Seguro de eliminar s/n?"<<endl;
            char eliminar[2];
            gotoxy(23,20);
            cin>>eliminar;
            if ((strcmp(eliminar, "s")==0)|(strcmp(eliminar, "S")==0))
            {
                gproveedores.open("Proveedores.txt",ios::app);
                consultap.open("Proveedores.txt");
                consultap>>prov.nit;
                while(!consultap.eof())
                {
                    consultap>>prov.nombre>>prov.direccion>>prov.telefono;
                    if((strcmp(auxcod, prov.nit)==0))
                    {
                        system("cls");
                        gotoxy(29,11);
                        cout<<"Eliminado Correctamente"<<endl;
                  
                    }
                    else
                    {
                        //Temp<<prov.nit<<" "<<prov.nombre<<" "<<prov.direccion<<" "<<prov.telefono<<" "<<endl;
                    }
                    //consultap>>prov.nit;
                }
                getch();
                consultap.close();
                Temp.close();
                gproveedores.close();
                remove("Proveedores.txt");
                rename("Temp.txt","Proveedores.txt"); 
            }
        }
        consultap>>prov.nit;
    }
    if (repetido==false)
    {
        system("cls");
        gotoxy(34,11);
        cout<<"No Encontrado"<<endl;
        consultap.close();
        Temp.close();
        gproveedores.close();
        getch();
    }
}
void reclientes()
{
	system("cls");
	ifstream gcliente;
	ifstream consultac;
	gcliente.close();
	consultac.close();
	gcliente.open("Clientes.txt",ios::app);
   	consultac.open("Clientes.txt");
    system("Color A");
   	time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    cout<<"Fecha "<<fecha<<endl<<endl<<endl;
   	cout<<"                                    CLIENTES"<<endl<<endl<<endl<<endl;
   	consultac>>cliente.nit;
    cout<<"     #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-"<<endl<<endl;
   	while (!consultac.eof()){
   		consultac>>cliente.nombre>>cliente.direccion>>cliente.telefono>>cliente.limitecredito;
        cout<<"                Ingrese Nombre del Clientes..........: "<<cliente.nombre<<endl;
        cout<<"                Ingrese Direccion del Clientes.......: "<<cliente.direccion<<endl;
        cout<<"                Ingrese Telefono del Clientes....... : "<<cliente.telefono<<endl;
        cout<<"                Ingrese Limite De Credito............: "<<cliente.limitecredito<<endl<<endl;
        cout<<"     #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-"<<endl<<endl;
   		consultac>>cliente.nit;
   	}
   	getch();
   	gcliente.close();
	consultac.close();
}
void reproveedores()
{
	system("cls");
	ifstream gproveedores;
	ifstream consultap;
	gproveedores.close();
    consultap.close();
    system("Color 8");
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color A");
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    int i;
    cout<<"Fecha "<<fecha<<endl<<endl<<endl;
    cout<<"                                  PROVEEDORES"<<endl<<endl<<endl;
    bool repetido=false;
    gproveedores.open("Proveedores.txt",ios::app);
    consultap.open("Proveedores.txt");
    consultap>>prov.nit;
    cout<<"     #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-"<<endl<<endl;
    while(!consultap.eof())
    {
        consultap>>prov.nombre>>prov.direccion>>prov.telefono;
        cout<<"                    NIT del Proveedor........ "<<prov.nit<<endl;
        cout<<"                    Nombre del Proveedor..... "<<prov.nombre<<endl;
        cout<<"                    Direccion del Proveedor.. "<<prov.direccion<<endl;
        cout<<"                    Telefono del Proveedor... "<<prov.telefono<<endl<<endl;
        cout<<"     #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-"<<endl<<endl;
        consultap>>prov.nit;
    }   

    gproveedores.close();
    consultap.close();
    getch();
}
void reproductos()
{
	system("cls");
	ifstream productos;
	ifstream consultapi;
	productos.close();
    consultapi.close();
    time_t t;
    struct tm *tm;
    char fecha[100];
    t=time(NULL);
    tm=localtime(&t);
    strftime(fecha, 100, "%d/%m/%Y", tm);
    system("Color A");
    cout<<nombre<<" "<<apellido<<endl;
    codigo;
    int i;
    cout<<"Fecha "<<fecha<<endl;
    cout<<endl<<endl;
    cout<<"                                   PRODUCTOS"<<endl<<endl<<endl;
    bool repetido=false;
    bool si=false;
    productos.open("Productos.txt",ios::app);
    consultapi.open("Productos.txt");
    consultapi>>ingreso.cod;
    cout<<"     #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-"<<endl<<endl;
    while(!consultapi.eof())
    {
        consultapi>>ingreso.nombre>>ingreso.descripcion>>ingreso.costo>>ingreso.ganancia>>ingreso.proveedor>>ingreso.min>>ingreso.max;
        cout<<"                     Codigo del Producto........ "<<ingreso.cod<<endl;
        cout<<"                     Nombre del Producto........ "<<ingreso.nombre<<endl;
        cout<<"                     Descripcion del Producto... "<<ingreso.descripcion<<endl;
        cout<<"                     Costo del Producto......... "<<ingreso.costo<<endl;
        cout<<"                     Porcentaje de Ganancia..... "<<ingreso.ganancia<<endl;
        cout<<"                     Proveedor del Producto..... "<<ingreso.proveedor<<endl;
        cout<<"                     Minimo de Existencia....... "<<ingreso.min<<endl;
        cout<<"                     Maximo de Existencia....... "<<ingreso.max<<endl<<endl;;
        cout<<"     #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-"<<endl<<endl;
        consultapi>>ingreso.cod;
    }
    getch();
    productos.close();
    consultapi.close();
}
void derechos()
{
    system("cls");
    cout<<""<<endl;
    cout<<""<<endl;
    getch();
}
