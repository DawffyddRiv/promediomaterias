#include<stdio.h>
/*Programa en C para calcular promedio de 4 materias*/
/*Se puede usar un apuntador para reducir el número de lineas de código*/
/*Pero habría que analizar su eficiencia*/
int main(){
	char nombre[30], paternoApe[30], maternoApe[30];
	char asig_a[30], subj_b[30],asig_c[30],asig_d[30];
	float suma,promedio;
	float cal_a,cali_b,cal_c,cal_d;
		
	printf("Introduce el nombre del alumno\n");
	scanf("%s", &nombre);
	
	printf("Introduce el apellido paterno \n ");
	scanf("%s",&paternoApe);
	
	printf("Introduce el apellido materno \n");
	scanf("%s",&maternoApe);	

	printf("Introduce el nombre de la asignatura \n");
	scanf("%s",&asig_a);
	printf("Introduce la calificacion de %s \n ", asig_a ,"\n" );
	scanf("%f",&cal_a);
	while((cal_a<0) && (cal_a>10 ))/* Bucle para filtrar que el valor de las calificaciones sean entre 0 y 10*/
	{
		printf("No se permiten calificaciones menores a cero y mayores a 10 \n");
		if((cal_a>=0) && (cal_a<=10))
			{
			printf("vuelve a introducir la calificacion \n");
			scanf("%.2f",&cal_a);
					
			}
			break;		
	}
	
	printf("Introduce el nombre de la siguiente asignatura  \n");
	scanf("%s",&subj_b);	
	
	printf("Introduce la calificacion de %s \n",subj_b);
	scanf("%f", &cali_b);
	
	while(cali_b<0 || cali_b>10 )
	{
		printf("No se permiten calificaciones menores a cero y mayores a 10 \n");
		if(cali_b>=0||cali_b<=10)
			{
			printf("vuelve a introducir la calificacion \n");
			scanf("%.2f",&cali_b);
					
			}	
		break;	
	}
	
	printf("Introduce el nombre de la siguiente asignatura  \n");
	scanf("%s",&asig_c);	
	
	printf("Introduce la calificacion de %s \n",asig_c);
	scanf("%f", &cal_c);
	
	while(cal_c<0 || cal_c>10 )
	{
		printf("No se permiten calificaciones menores a cero y mayores a 10 \n");
		if(cal_c>=0||cal_c<=10)
			{
			printf("vuelve a introducir la calificacion \n");
			scanf("%.2f",&cal_c);
					
			}	
		break;	
	}
	
	printf("Introduce el nombre de la siguiente asignatura  \n");
	scanf("%s",&asig_d);	
	
	printf("Introduce la calificacion de %s \n",asig_d);
	scanf("%f", &cal_d);
	
	while(cal_d<0 || cal_d>10 )
	{
		printf("No se permiten calificaciones menores a cero y mayores a 10 \n");
		if(cal_d>=0||cal_d<=10)
			{
			printf("vuelve a introducir la calificacion \n");
			scanf("%.2f",&cal_d);
					
			}	
		break;	
	}
	suma=cal_a+cali_b+cal_c+cal_d;
	promedio=suma/4;
	
	if(promedio<8){
		printf("Nombre del alumno: %s %s %s \n  ", nombre , paternoApe, maternoApe);
		printf("Promedio: %.2f \n  ",promedio); 
		printf("Porcentaje de beca: No tiene derecho a beca \n "); 
		printf(" Asignatura   Calificacion  \n  ");
		printf("%s 	%.2f \n  ",asig_a, cal_a);
		printf("%s 	%.2f \n  ",subj_b,cali_b );
		printf("%s 	%.2f \n  ",asig_c,cal_c);
		printf("%s 	%.2f \n  ",asig_d,cal_d);
	}
	else if((promedio>=8)&&(promedio<9)){
		printf("Nombre del alumno: %s %s %s \n  ", nombre , paternoApe, maternoApe);
		printf("Promedio: %.2f \n  ",promedio); 
		printf("Porcentaje de beca: Tiene derecho a beca del 30 por ciento  \n "); 
		printf(" Asignatura   Calificacion  \n  ");
		printf("%s 	%.2f \n  ",asig_a, cal_a);
		printf("%s 	%.2f \n  ",subj_b,cali_b );
		printf("%s 	%.2f \n  ",asig_c,cal_c);
		printf("%s 	%.2f \n  ",asig_d,cal_d);
	}
	else{
		printf("Nombre del alumno: %s %s %s \n  ", nombre , paternoApe, maternoApe);
		printf("Promedio: %.2f \n  ",promedio); 
		printf("Porcentaje de beca: Tiene derecho a beca del 50 por ciento \n "); 
		printf(" Asignatura   Calificacion  \n  ");
		printf("%s 	%.2f \n  ",asig_a, cal_a);
		printf("%s 	%.2f \n  ",subj_b,cali_b );
		printf("%s 	%.2f \n  ",asig_c,cal_c);
		printf("%s 	%.2f \n  ",asig_d,cal_d);
	}

}


