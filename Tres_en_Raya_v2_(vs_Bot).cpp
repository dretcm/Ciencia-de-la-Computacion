// Juego: TIC TAC TOE vs BOT
// UCSP : CIENCIAS DE LA COMPUTACIÓN
// Grupo: 1
// Integrantes:
//	* Cristian Mellado Baca
//	* Marcelo Torres Acuña
//	* Alexander Carpio Mamani

#include <iostream>  // libreria estandar para usar cin & cout
#include <time.h>    // para usar random o rand

int main (){
	int numero, option;
	char name1[40], name2[40], p1, p2, turno;
	bool error;
	
	while (1){	
		std::cout << "\n\n==================================================\n";
		std::cout << "================== Tres en raya ==================\n";
		std::cout << "==================================================\n\n";
		//menu de opciones.
		std::cout << "      1. ONE Vs ONE\n";
		std::cout << "      2. ONE Vs BOT\n";
		std::cout << "      3. Exit\n\n";
		std::cout << "  option:";
		std::cin>>option;
		
		// variables inicializadas por defectuo.
		char a='1', b='2', c='3', d='4', e='5', f='6', g='7', h='8', i='9';
		
		if(option==1){
			std::cout << "\n\n==================================================\n";
			std::cout << "================== Tres en raya ==================\n";
			std::cout << "==================================================\n\n";
			std::cout << "Enter name player 1:";
			// std::cin>>name1;  // solo captura hasta cuando haga espacio.
      			// fflush(stdin);  // para borrar el buffer del teclado.
			// std::cin.getline(name1, 40, '\n');
			std::cin>>name1;
			
			do{
				std::cout << "Enter symbol player 1 (X,O):";
				std::cin>>p1;
			}while(p1!='X' && p1!='O');  	// validación de "X" y "O".
			
			if (p1=='X') p2 = 'O';  // si dentro del if solo correrá una linea, no es necesario usar llaves("{}").
			else p2 = 'X';
			
			std::cout << "Enter name player 2:";
      			// fflush(stdin);
			// std::cin.getline(name2, 40, '\n');  // variable, espacio de memoria, fin de captuda de datos.
			std::cin>>name2;
			
	        if (rand()%2 == 1) turno = p1;
	        else turno = p2;

			std::cout<<std::endl<<name1<<" jugara con: "<<p1<<std::endl;
			std::cout<<name2<<" jugara con: "<<p2<<std::endl;
			
			while (true){//Este while es para que siempre se mantenga activo y actulizando el juego.
				std::cout << "\n\n==================================================\n";
				std::cout << "================== Tres en raya ==================\n";
				std::cout << "==================================================\n\n";

        			// impresion de tabla
				std::cout<<"                     "<<a<<" | "<<b<<" | "<<c<<std::endl;    
				std::cout<<"                    ..........."<<std::endl;
				std::cout<<"                     "<<d<<" | "<<e<<" | "<<f<<std::endl;
				std::cout<<"                    ..........."<<std::endl;
				std::cout<<"                     "<<g<<" | "<<h<<" | "<<i<<std::endl;
				std::cout<<"\n\n";

				//Posibles combinaciones para determinar un ganador
				if((a+b+c==p1*3)||(a+d+g==p1*3)||(a+e+i==p1*3)||(c+e+g==p1*3)||(c+f+i==p1*3)||(d+e+f==p1*3)||(g+h+i==p1*3)||(b+e+h==p1*3)){
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					std::cout << " \t\t El ganador es "<<name1<<"\n";
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					break;  // salimos del bucle de 1v1
				}
				if((a+b+c==p2*3)||(a+d+g==p2*3)||(a+e+i==p2*3)||(c+e+g==p2*3)||(c+f+i==p2*3)||(d+e+f==p2*3)||(g+h+i==p2*3)||(b+e+h==p2*3)){
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					std::cout << " \t\t El ganador es "<<name2<<"\n";
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					break;
				}
				

				//En este if usamos el codigo ascci de "O=79" y "X=88" donde hay 5 "O" y 4 "X" esto porque el minimo debe ser el numero menor como es el caso de 5"O"s para superar el muro de todas las variables utilizadas.
				if (a+b+c+d+e+f+g+h+i >= 747){
					std::cout << "==================================================\n";
					std::cout << "==================================================\n";
					std::cout << "===================== Empate =====================\n";
					std::cout << "==================================================\n";
					std::cout << "==================================================\n\n";
					break;  // salimos del while o bucle.
				}
				
				
				do{
					error=false;

					std::cout<<" Ahora es turno de ";
					if(turno==p1) std::cout<<name1;
					else std::cout<<name2;
          
					std::cout<<" con \""<< turno <<"\" : "; std::cin>>numero;

					if(numero==1 && a=='1'){  // solo entrará si la letra es igual a la de por defectuo y la opcion del número.
						a=turno;
					}
					else if(numero==2 && b=='2'){
						b=turno;
					}
					else if(numero==3 && c=='3'){
						c=turno;	
					}
					else if(numero==4 && d=='4'){
						d=turno;
					}
					else if(numero==5 && e=='5'){
						e=turno;
					}
					else if(numero==6 && f=='6'){
						f=turno;
					}
					else if(numero==7 && g=='7'){
						g=turno;
					}
					else if(numero==8 && h=='8'){
						h=turno;
					}
					else if(numero==9 && i=='9'){
						i=turno;		
					}
					else{
						error=true; // activacion en caso de que no haya entrado a un if.
						std::cout<<"\nerror esa casilla ya esta siendo usada\n\a"<<std::endl;
					}
				}while(error==true); // validación en caso que se repita un variable ya utilizada.
					
				if(turno==p1){   // Cambio de turno.
					turno=p2;
				}
				else{
					turno=p1;
				}

			}			

		}
		else if (option==2){
			srand (time(NULL));
			
			std::cout << "\n\n==================================================\n";
			std::cout << "================== Tres en raya ==================\n";
			std::cout << "==================================================\n\n";
			// dificultades del bot
			std::cout << "      1. Easy\n";
			std::cout << "      2. Normal\n";
			std::cout << "      3. Hardcore\n\n";
			std::cout << "  option:";
			std::cin>>option;
			
			std::cout << "\n\n==================================================\n";
			std::cout << "================== Tres en raya ==================\n";
			std::cout << "==================================================\n\n";
			
			do{
				std::cout << "Enter your symbol (X,O):";
				std::cin>>p1;
			}while(p1!='X' && p1!='O');
			
			if (p1=='X') p2 = 'O';
			else p2 = 'X';
			
			if (rand()%2 == 1) turno = p1; # elegi aleatoriamente un turno
		    else turno = p2;
			
			std::cout<<std::endl<<" Tu jugaras con: "<<p1<<std::endl;
			std::cout<<" Bot jugara con: "<<p2<<std::endl;
			
			
			while (true){
				std::cout << "\n\n==================================================\n";
				std::cout << "================== Tres en raya ==================\n";
				std::cout << "==================================================\n\n";


				std::cout<<"                     "<<a<<" | "<<b<<" | "<<c<<std::endl; 
				std::cout<<"                    ..........."<<std::endl;
				std::cout<<"                     "<<d<<" | "<<e<<" | "<<f<<std::endl;
				std::cout<<"                    ..........."<<std::endl;
				std::cout<<"                     "<<g<<" | "<<h<<" | "<<i<<std::endl;
				std::cout<<"\n\n";
				
				
				if((a+b+c==p1*3)||(a+d+g==p1*3)||(a+e+i==p1*3)||(c+e+g==p1*3)||(c+f+i==p1*3)||(d+e+f==p1*3)||(g+h+i==p1*3)||(b+e+h==p1*3)){
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					std::cout << " \t\t El ganador eres Tú \n";
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					break;
				}
				if((a+b+c==p2*3)||(a+d+g==p2*3)||(a+e+i==p2*3)||(c+e+g==p2*3)||(c+f+i==p2*3)||(d+e+f==p2*3)||(g+h+i==p2*3)||(b+e+h==p2*3)){
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					std::cout << " \t\t El ganador es el Bot\n";
					std::cout << " ==================================================\n";
					std::cout << " ==================================================\n";
					break;
				}
				
				
				if (a+b+c+d+e+f+g+h+i >= 747){
					std::cout << "==================================================\n";
					std::cout << "==================================================\n";
					std::cout << "===================== Empate =====================\n";
					std::cout << "==================================================\n";
					std::cout << "==================================================\n\n";
					break;
				}
				
				//validacion de turnos
				do{
					error=false;
					if (turno==p1){
						std::cout<<" Ahora es tu turno con \""<< turno <<"\" : ";std::cin>>numero;
					}
					//proceso de dificultades de bot
					else{
						int random_state = 0;
						//dificultad intermedia
						if (option == 2){
							random_state = rand() % 2;
						}
						//dificultad easy
						if (option == 1 || random_state==1){ 
							numero = 1 + rand() % 9;
						}
						//dificultad hardcore 
						else if (option == 3 || random_state==0){
							// condicionales del bot para intentar ganar
							if (a+b==p2*2 &&  c =='3'){
								numero = 3;        
							}
							else if (a+c==p2*2 && b =='2'){
								numero = 2;
							}
							else if (b+c==p2*2 && a == '1'){
								numero = 1;
							}
							else if (a+d==p2*2 && g == '7'){
								numero = 7;
							}
							else if (a+g==p2*2 && d == '4'){
								numero = 4;
							}
							else if (d+g==p2*2 && a == '1'){
								numero = 1;
							}
							else if (d+e==p2*2 && f == '6'){
								numero = 6;
							}
							else if (d+f==p2*2 && e == '5'){
								numero = 5;
							}
							else if (e+f==p2*2 && d == '4'){
								numero = 4;
							}
							else if (g+h==p2*2 && i == '9'){
								numero = 9;
							}
							else if (h+i==p2*2 && g=='7'){
								numero = 7;
							}
							else if (g+i==p2*2 && h=='8'){
								numero = 8;
							}
							else if (b+e==p2*2 && h=='8'){
								numero = 8;
							}
							else if (b+h==p2*2 && e=='5'){
								numero = 5;
							}
							else if (e+h==p2*2 && b=='2'){
								numero = 2;
							}
							else if (c+f==p2*2 && i=='9'){
								numero = 9;
							}
							else if (f+i==p2*2 && c=='3'){
								numero = 3;
							}
							else if (c+i==p2*2 && f=='6'){
								numero = 6;
							}
							else if (a+e==p2*2 && i=='9'){
								numero = 9;
							}
							else if (a+i==p2*2 && e=='5'){
								numero = 5;
							}
							else if (e+i==p2*2 && a=='1'){
								numero = 1;
							}
							else if (c+e==p2*2 && g=='7'){
								numero = 7;
							}
							else if (c+g==p2*2 && e=='5'){
								numero = 5;
							}
							else if (g+e==p2*2 && c=='3'){
								numero =3;
							}
							// condicionales del bot para bloquear al jugador
							else if (a+b==p1*2 &&  c =='3'){
								numero = 3;        
							}
							else if (a+c==p1*2 && b =='2'){
								numero = 2;
							}
							else if (b+c==p1*2 && a == '1'){
								numero = 1;
							}
							else if (a+d==p1*2 && g == '7'){
								numero = 7;
							}
							else if (a+g==p1*2 && d == '4'){
								numero = 4;
							}
							else if (d+g==p1*2 && a == '1'){
								numero = 1;
							}
							else if (d+e==p1*2 && f == '6'){
								numero = 6;
							}
							else if (d+f==p1*2 && e == '5'){
								numero = 5;
							}
							else if (e+f==p1*2 && d == '4'){
								numero = 4;
							}
							else if (g+h==p1*2 && i == '9'){
								numero = 9;
							}
							else if (h+i==p1*2 && g=='7'){
								numero = 7;
							}
							else if (g+i==p1*2 && h=='8'){
								numero = 8;
							}
							else if (b+e==p1*2 && h=='8'){
								numero = 8;
							}
							else if (b+h==p1*2 && e=='5'){
								numero = 5;
							}
							else if (e+h==p1*2 && b=='2'){
								numero = 2;
							}
							else if (c+f==p1*2 && i=='9'){
								numero = 9;
							}
							else if (f+i==p1*2 && c=='3'){
								numero = 3;
							}
							else if (c+i==p1*2 && f=='6'){
								numero = 6;
							}
							else if (a+e==p1*2 && i=='9'){
								numero = 9;
							}
							else if (a+i==p1*2 && e=='5'){
								numero = 5;
							}
							else if (e+i==p1*2 && a=='1'){
								numero = 1;
							}
							else if (c+e==p1*2 && g=='7'){
								numero = 7;
							}
							else if (c+g==p1*2 && e=='5'){
								numero = 5;
							}
							else if (g+e==p1*2 && c=='3'){
								numero =3;
							}
							else{
								numero = 1 + rand() % 9;
							}
						}
					}
					
         			//para  verificar si las casillas estan ocupadas y en caso no entre ni uno repetira que ingrese el numero nuevamente. 
					if(numero==1 && a=='1'){
						a=turno;
					}
					else if(numero==2 && b=='2'){
						b=turno;
					}
					else if(numero==3 && c=='3'){
						c=turno;	
					}
					else if(numero==4 && d=='4'){
						d=turno;
					}
					else if(numero==5 && e=='5'){
						e=turno;
					}
					else if(numero==6 && f=='6'){
						f=turno;
					}
					else if(numero==7 && g=='7'){
						g=turno;
					}
					else if(numero==8 && h=='8'){
						h=turno;
					}
					else if(numero==9 && i=='9'){
						i=turno;		
					}
					else{
						error=true;
						if (turno==p1)
							std::cout<<"\nerror esa casilla ya esta siendo usada\a\n"<<std::endl;
					}
				}while(error==true);
					
				if(turno==p1){
					turno=p2;
				}
				else{
					turno=p1;
				}
			}
		}
		else if (option==3){
			break;  // sale del while.
		}
		else{
			std::cout << "\n\n  Doesnt exist this option.\n\n";
		}
	}

	return 0;
}
