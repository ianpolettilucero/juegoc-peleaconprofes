#include <iostream>
using namespace std;

int main()
{
    cout << "-- BIENVENIDO, GUERRERO --" << endl;
    cout << "" << endl;
    cout << "Estás por entrar a un mundo oscuro y lleno de desesperación, sudor y hormonas: el colegio secundario. Para salir victorioso, vencé a todos los profesores." << endl;
    cout << "" << endl;
    cout << "¿Continuar? (S/N)" << endl;
    string respuesta,ultimo_resultado,profesor_vencido,atributo_elegido,confirmacion_oponente;
    cin >> respuesta;
    while(respuesta!="s" and respuesta!="S" and respuesta!="n" and respuesta!="N")
    {
        cout << "" << endl;
        cout << "Por favor ingresá S,s o N,n para responder." << endl;
        cin >> respuesta;
    }
    cout << "" << endl;
    if(respuesta=="s" or respuesta=="S")
    {
        cout << "-- AJUSTEMOS TUS ATRIBUTOS --" << endl;
        cout << "" << endl;
        cout << "Tus atributos determinan cuán eficiente sos realizando distintos tipos de tareas. Para cada atributo, elegí un número del 1 al 10. Mientras más cercano a 10 sea el número, mejor te vas a desempenar en las tareas que requieran dicho atributo. Pero cuidado: ser muy bueno en ciertos atributos será a costa de ser muy malo en otros. Pensalo bien..." << endl;
        cout << "" << endl;
        cout << "Ingresá cualquier letra para continuar." << endl;
        cin >> respuesta;
        int i,puntos_atributo,atributo,INT,CO,CA,SF,SU,victorias,vidas,eleccion_atributo,eleccion_oponente,salud,salud_oponente,ataque_oponente,efec_ataque_oponente,ataque1,ataque2,ataque3,ataque4;
        do
        {
            puntos_atributo=20;
            for(i=1;i<6;i++)
            {
                cout << "" << endl;
                if(i==1)
                {
                    cout << "- Atributo 1/5: Inteligencia (INT) -" << endl;
                    cout << "" << endl;
                    cout << "La inteligencia determina tu facilidad para entender temas, incluso si las explicaciones de los profesores no son las mejores, y también te ayuda a realizar tareas que requieran conocimiento extraescolar." << endl;
                }
                else if(i==2)
                {
                    cout << "- Atributo 2/5: Concentración (CO) -" << endl;
                    cout << "" << endl;
                    cout << "La concentración te ayuda a realizar actividades que requieran de estudio e investigación, y mejora tu rendimiento en pruebas." << endl;
                }
                else if(i==3)
                {
                    cout << "- Atributo 3/5: Carisma (CA) -" << endl;
                    cout << "" << endl;
                    cout << "Determina tu facilidad para persuadir y convencer a otras personas para que te ayuden (tanto alumnos como profesores)." << endl;
                }
                else if(i==4)
                {
                    cout << "- Atributo 4/5: Sangre fría (SF) -" << endl;
                    cout << "" << endl;
                    cout << "Te ayuda a mantener la compostura en situaciones tensas, como cuando te copiás en pruebas o usás el celular en clase." << endl;
                }
                else
                {
                    cout << "- Atributo 5/5: Suerte (SU) -" << endl;
                    cout << "" << endl;
                    cout << "Te ayuda en actividades y pruebas sin haber estudiado demasiado, y también reduce las posibilidades de que te agarren haciendo travesuras." << endl;
                }
                cout << "" << endl;
                cout << "¿Cuántos puntos querés asignarle a este atributo? (máx. 10)" << endl;
                cout << "Puntos de atributo restantes: " << puntos_atributo << endl;
                cin >> atributo;
                while(atributo<0 or atributo>10 or atributo>puntos_atributo)
                {
                    cout << "" << endl;
                    cout << "Por favor ingresá un valor entero entre 0 y 10 que no exceda tus puntos de atributo restantes." << endl;
                    cout << "Puntos de atributo restantes: " << puntos_atributo << endl;
                    cin >> atributo;
                }
                puntos_atributo=puntos_atributo-atributo;
                if(i==1)
                {
                    INT=atributo;
                }
                else if(i==2)
                {
                    CO=atributo;
                }
                else if(i==3)
                {
                    CA=atributo;
                }
                else if(i==4)
                {
                    SF=atributo;
                }
                else
                {
                    SU=atributo;
                }
            }
            cout << "" << endl;
            cout << "¿Querés hacer algún cambio? (S/N)" << endl;
            cout << "" << endl;
            cout << "INT: " << INT << endl;
            cout << "CO: " << CO << endl;
            cout << "CA: " << CA << endl;
            cout << "SF: " << SF << endl;
            cout << "SU: " << SU << endl;
            cout << "" << endl;
            cout << "Puntos de atributo restantes: " << puntos_atributo << endl;
            cout << "" << endl;
            cin >> respuesta;
            while(respuesta!="s" and respuesta!="S" and respuesta!="n" and respuesta!="N")
            {
                cout << "" << endl;
                cout << "Por favor ingresá S,s o N,n para responder." << endl;
                cin >> respuesta;
            }
        }
        while(respuesta=="s" or respuesta=="S");
        victorias=0;
        vidas=3;
        ultimo_resultado="nada";
        bool vencer_derre,vencer_vilches,vencer_mattei,vencer_scovenna,vencer_gutierrez,vencer_barrionuevo,vencer_mangialavori,vencer_nieto,vencer_vaccaluzzo,vencer_fiore,vencer_perez,vencer_bach,vencer_nievas,cancelar;
        do
        {
            if(cancelar==true)
            {
                cout << "" << endl;
                cout << "Ingresá cualquier letra para continuar." << endl;
                cin >> respuesta;
            }
            cout << "" << endl;
            if(ultimo_resultado=="victoria")
            {
                cout << "-- VICTORIA --" << endl;
                cout << "" << endl;
                cout << "¡Felicidades, venciste a " << profesor_vencido << "!" << endl;
                cout << "" << endl;
                if(victorias==1)
                {
                    cout << "Cada vez que consigas una victoria, vas a obtener un punto de atributo extra que podés gastar en el atributo que quieras." << endl;
                }
                else
                {
                    cout << "Conseguiste un punto de atributo extra." << endl;
                }
                cout << "" << endl;
                cout << "Ingresá cualquier letra para continuar." << endl;
                cin >> respuesta;
                do
                {
                    cout << "" << endl;
                    cout << "Elegí el atributo al que querés aginar el punto." << endl;
                    cout << "(Ingresá el número del que prefieras)" << endl;
                    cout << "" << endl;
                    cout << "1. Inteligencia (INT)" << endl;
                    cout << "2. Concentración (CO)" << endl;
                    cout << "3. Carisma (CA)" << endl;
                    cout << "4. Sangre fría (SF)" << endl;
                    cout << "5. Suerte (SU)" << endl;
                    cout << "" << endl;
                    cin >> eleccion_atributo;
                    while(eleccion_atributo<1 or eleccion_atributo>5)
                    {
                        cout << "" << endl;
                        cout << "Por favor ingresá un número de la lista para decidir." << endl;
                        cin >> eleccion_atributo;
                    }
                    if(eleccion_atributo==1)
                    {
                        atributo_elegido="INT";
                    }
                    else if(eleccion_atributo==2)
                    {
                        atributo_elegido="CO";
                    }
                    else if(eleccion_atributo==3)
                    {
                        atributo_elegido="CA";
                    }
                    else if(eleccion_atributo==4)
                    {
                        atributo_elegido="SF";
                    }
                    else
                    {
                        atributo_elegido="SU";
                    }
                    cout << "" << endl;
                    cout << "¿Seguro que querés asignar este punto a " << atributo_elegido << "? (S/N)" << endl;
                    cin >> respuesta;
                    while(respuesta!="s" and respuesta!="S" and respuesta!="n" and respuesta!="N")
                    {
                        cout << "" << endl;
                        cout << "Por favor ingresá S,s o N,n para responder." << endl;
                        cin >> respuesta;
                    }
                }
                while(respuesta=="n" or respuesta=="N");
                if(atributo_elegido=="INT")
                {
                    INT++;
                }
                else if(atributo_elegido=="CO")
                {
                    CO++;
                }
                else if(atributo_elegido=="CA")
                {
                    CA++;
                }
                else if(atributo_elegido=="SF")
                {
                    SF++;
                }
                else
                {
                    SU++;
                }
                cout << "" << endl;
                cout << "Punto asignado a " << atributo_elegido << "." << endl;
                if(victorias==1)
                {
                    cout << "Para poder enfrentarte a los profesores más difíciles, reforzá tus atributos venciendo a los más débiles primero." << endl;
                }
                cout << "Ingresá cualquier letra para elegir a tu próximo oponente." << endl;
                cout << "" << endl;
            }
            else if(ultimo_resultado=="derrota")
            {
                vidas--;
                cout << "-- DERROTA --" << endl;
                cout << "" << endl;
                if(vidas==2)
                {
                    cout << "Sufriste una derrota y perdiste una vida. Si te quedás sin vidas, se acaba el juego y tenés que volver a empezar con tus atributos desde cero." << endl;
                }
                else
                {
                    cout << "Sufriste una derrota y perdiste una vida." << endl;
                }
                if(vidas==2)
                {
                    cout << "Vidas restantes: " << vidas << ". También podés consultar tu cantidad de vidas desde debajo del menú de oponentes." << endl;
                }
                else
                {
                    cout << "Vidas restantes: " << vidas << endl;
                }
                cout << "" << endl;
                cout << "Ingresá cualquier letra para volver a elegir un oponente." << endl;
                cin >> respuesta;
                cout << "" << endl;
            }
            cout << "-- ELEGÍ TU OPONENTE --" << endl;
            cout << "(Ingresá el número del profesor)" << endl;
            cout << "" << endl;
            cout << "- Fácil -" << endl;
            if(vencer_derre==true)
            {
                cout << "1. Claudia Derré [VENCIDA]" << endl;
            }
            else
            {
                cout << "1. Claudia Derré" << endl;
            }
            if(vencer_vilches==true)
            {
                cout << "2. Romina Vilches [VENCIDA]" << endl;
            }
            else
            {
                cout << "2. Romina Vilches" << endl;
            }
            if(vencer_mattei==true)
            {
                cout << "3. Mercedes Mattei [VENCIDA]" << endl;
            }
            else
            {
                cout << "3. Mercedes Mattei" << endl;
            }
            if(vencer_scovenna==true)
            {
                cout << "4. Norberto Scovenna [VENCIDO]" << endl;
            }
            else
            {
                cout << "4. Norberto Scovenna" << endl;
            }
            cout << "" << endl;
            cout << "- Medio -" << endl;
            if(vencer_gutierrez==true)
            {
                cout << "5. Gabriela Gutiérrez [VENCIDA]" << endl;
            }
            else
            {
                cout << "5. Gabriela Gutiérrez" << endl;
            }
            if(vencer_barrionuevo==true)
            {
                cout << "6. Juan Carlos Barrionuevo [VENCIDO]" << endl;
            }
            else
            {
                cout << "6. Juan Carlos Barrionuevo" << endl;
            }
            if(vencer_mangialavori==true)
            {
                cout << "7. Ornella Mangialavori [VENCIDA]" << endl;
            }
            else
            {
                cout << "7. Ornella Mangialavori" << endl;
            }
            if(vencer_nieto==true)
            {
                cout << "8. Alejandro Nieto [VENCIDO]" << endl;
            }
            else
            {
                cout << "8. Alejandro Nieto" << endl;
            }
            cout << "" << endl;
            cout << "- Difícil -" << endl;
            if(vencer_vaccaluzzo==true)
            {
                cout << "9. Claudio Vaccaluzzo [VENCIDO]" << endl;
            }
            else
            {
                cout << "9. Claudio Vaccaluzzo" << endl;
            }
            if(vencer_fiore==true)
            {
                cout << "10. Santiago Fiore [VENCIDO]" << endl;
            }
            else
            {
                cout << "10. Santiago Fiore" << endl;
            }
            if(vencer_perez==true)
            {
                cout << "11. Alfredo Pérez [VENCIDO]" << endl;
            }
            else
            {
                cout << "11. Alfredo Pérez" << endl;
            }
            if(vencer_bach==true)
            {
                cout << "12. Guadalupe Bach [VENCIDO]" << endl;
            }
            else
            {
                cout << "12. Guadalupe Bach" << endl;
            }
            cout << "" << endl;
            cout << "- Extremo -" << endl;
            if(vencer_nievas==true)
            {
                cout << "13. Cristian Nievas [VENCIDO]" << endl;
            }
            else
            {
                cout << "13. Cristian Nievas" << endl;
            }
            if(victorias<13)
            {
                cout << "14. Diego Martín [BLOQUEADO]" << endl;
            }
            else
            {
                cout << "14. Diego Martín" << endl;
            }
            cout << "" << endl;
            cout << "Vidas: " << vidas << endl;
            cout << "" << endl;
            cin >> eleccion_oponente;
            while(eleccion_oponente<1 or eleccion_oponente>14)
            {
                cout << "" << endl;
                cout << "Por favor ingresá un número en la lista para decidir." << endl;
                cin >> eleccion_oponente;
            }
            cout << "" << endl;
            if(eleccion_oponente==1)
            {
                if(vencer_derre==true)
                {
                    cancelar==false;
                    cout << "No se pudo continuar porque ya venciste a esta profesora (solo te podés enfrentar a cada profesor una vez)." << endl;
                    cout << "" << endl;
                    cout << "Ingresá culquier letra para volver a elegir un oponente." << endl;
                    cin >> respuesta;
                }
                else
                {
                    cout << "Seleccionaste a Claudia Derré. ¿Continuar? (S/N)" << endl;
                    cin >> confirmacion_oponente;
                    while(confirmacion_oponente!="s" and confirmacion_oponente!="S" and confirmacion_oponente!="n" and confirmacion_oponente!="N")
                    {
                        cout << "" << endl;
                        cout << "Por favor ingresá S,s o N,n para continuar." << endl;
                        cin >> confirmacion_oponente;
                    }
                    cout << "" << endl;
                    if(confirmacion_oponente=="s" or confirmacion_oponente=="S")
                    {
                        cancelar==false;
                        cout << "-- EMPIEZA LA PELEA --" << endl;
                        salud=100;
                        salud_oponente=100;
                        do
                        {
                            srand(time(0));
                            ataque_oponente=rand()%10+1;
                            efec_ataque_oponente=rand()%10+1;
                            ataque1=rand()%3+1;
                            ataque2=rand()%3+1;
                            ataque3=rand()%3+1;
                            ataque4=rand()%3+1;
                            cout << "" << endl;
                            if(ataque_oponente==1)
                            {
                                cout << "Claudia Derré utilizó <hablar de tema que a nadie le importa en Tutoría>." << endl;
                            }
                            else if(ataque_oponente==2)
                            {
                                cout << "Claudia Derré utilizó <actividad de Excel ridículamente complicada>." << endl;
                            }
                            else if(ataque_oponente==3)
                            {
                                cout << "Claudia Derré utilizó <explicación vaga>." << endl;
                            }
                            else if(ataque_oponente==4)
                            {
                                cout << "Claudia Derré utilizó <hacerse la millenial>." << endl;
                            }
                            else if(ataque_oponente==5)
                            {
                                cout << "Claudia Derré utilizó <llorar porque nadie le da bola>." << endl;
                            }
                            else if(ataque_oponente==6)
                            {
                                cout << "Claudia Derré utilizó <actividad de PowerPoint en grupo>." << endl;
                            }
                            else if(ataque_oponente==7)
                            {
                                cout << "Claudia Derré utilizó <actividad de Word dolorosamente larga>." << endl;
                            }
                            else if(ataque_oponente==8)
                            {
                                cout << "Claudia Derré utilizó <modo alumno>." << endl;
                            }
                            else if(ataque_oponente==9)
                            {
                                cout << "Claudia Derré utilizó <irse por las ramas en Computación>." << endl;
                            }
                            else
                            {
                                cout << "Claudia Derré utilizó <tomar prueba de Computación>." << endl;
                            }
                            
                        }
                        while(salud>0 or salud_oponente>0);
                    }
                    else
                    {
                        cancelar==true;
                        cout << "Boe dale, es Derré pibe." << endl;
                    }
                }
            }
            else if(eleccion_oponente==2)
            {

            }
            else if(eleccion_oponente==3)
            {

            }
            else if(eleccion_oponente==4)
            {

            }
            else if(eleccion_oponente==5)
            {

            }
            else if(eleccion_oponente==6)
            {

            }
            else if(eleccion_oponente==7)
            {

            }
            else if(eleccion_oponente==8)
            {

            }
            else if(eleccion_oponente==9)
            {

            }
            else if(eleccion_oponente==10)
            {

            }
            else if(eleccion_oponente==11)
            {

            }
            else if(eleccion_oponente==12)
            {

            }
            else if(eleccion_oponente==13)
            {

            }
            else
            {

            }
        }
        while(victorias<14 or vidas>0);
    }
    else
    {
        cout << "Bueno te me cuidás bro. NASHE" << endl;
    }
    return 0;
}

