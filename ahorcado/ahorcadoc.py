import socket
import os
import time 
AHORCADO = ['''
      +---+
      |   |
          |
          |
          |
          |
    =========''', '''
      +---+
      |   |
      O   |
          |
          |
          |
    =========''', '''
      +---+
      |   |
      O   |
      |   |
          |
          |
    =========''', '''
      +---+
      |   |
      O   |
     /|   |
          |
          |
    =========''', '''
      +---+
      |   |
      O   |
     /|\  |
          |
          |
    =========''', '''
      +---+
      |   |
      O   |
     /|\  |
     /    |
          |
    =========''', '''
      +---+
      |   |
      O   |
     /|\  |
     / \  |
          |
    =========''']
c=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
servidor=socket.gethostbyname(socket.gethostname())
puerto = 5050
direccion=(servidor,puerto)
c.connect(direccion)
bandera="1"
gano_perdio=True
bienvenida=c.recv(1024).decode("utf-8")
while bandera=="1":
    print(bienvenida)
    eleccion=input()
    c.send(bytes(eleccion,"utf-8"))
    msg=c.recv(1024).decode("utf-8")
    if eleccion==1:
        print("Seleccionaste el modo Facil")
    elif eleccion==2:
        print("Seleccionaste el modo Medio")
    elif eleccion==3:
        print("Seleccionaste el modo Dificil")

    indicio="- "*len(msg)
    letras_correctas=[]
    letras_que_llevas=[]
    cant_letras_correctas=0
    intentosfallidos=0
    esta_letra=False
    inicio=time.time()
    while cant_letras_correctas<len(msg) and intentosfallidos<7:
        os.system("cls")
        print(AHORCADO[intentosfallidos])
        print(indicio+" "*10 + "Las letras que llevas son " + str(letras_que_llevas))
        letra=input("Dame una letra\n")
        #Si la letra es nueva entonces la checamos, sino decimos que ya me la habia puesto
        if letra not in letras_que_llevas:
            letras_que_llevas.insert(len(letras_que_llevas),letra)
            #Checamos si la letra esta en el mensaje
            indicio=""
            for caracter in msg:
                #Si la letra corresponde a una letra de la palabra
                if letra==caracter:
                    esta_letra=True
                    cant_letras_correctas=cant_letras_correctas+1
                    if letra not in letras_correctas:
                        letras_correctas.insert(len(letras_correctas),letra)
                if caracter in letras_correctas:
                    indicio+=caracter + " "
                else:
                    indicio+="- "
            #Si estuvo la letra almenos una vez
            if esta_letra:
                print(f"Felicidades, la letra {letra} esta en la palabra!")
                esta_letra=False
            else:
                print(f"Te equivocaste, la letra {letra} no esta en la palabra")
                intentosfallidos=intentosfallidos+1
        else:
            print(f"Ya me pusiste la letra {letra}, prueba con otra")
        time.sleep(2)
    final=time.time()
    if (intentosfallidos==7):
        print("Lo siento, perdiste :(")
        gano=False
    else:
        print(indicio)
        print("Felicidades! Ganaste")
        gano=True
    print(f"Te tardaste {final-inicio} segundos")
    c.send(bytes(str(gano),"utf-8"))
    bandera=input("Quieres jugar otro juego? Presiona 1 para seguir jugando, otra tecla para salir")

c.send(bytes("Salir","utf-8"))
c.close()