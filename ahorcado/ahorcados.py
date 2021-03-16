import socket
import time
import random
PALFACIL = ["lapiz", "celular", "trapo", "escom", "ipn", "sol" ]
PALMEDIO=["dopamina", "calamardo", "chimenea", "pantalon", "abduzcan" ]
PALDIFICIL=["supercalifragilisticoespialidoso", "paralelepipedos", "hipopotomostrosesquipedaliofobia"]
num_aleatorio=None
#Creamos un socket
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
print("Socket Creado")
puerto = 5050
servidor=socket.gethostbyname(socket.gethostname()) # DIRECCION IPv4 SERVER="192.168.1.85" , SERVER="localhost"
direccion= (servidor,puerto)
s.bind(direccion)
s.listen(1)
print("Esperando conexion")

def imprimirbienvenida():
    msg="Bienvenido al juego del ahorcado!\n"
    msg+="Es hora de empezar\n"
    msg+="Dame un nivel de dificultad!\n"
    msg+="1. Facil\n"
    msg+="2. Medio\n"
    msg+="3. Dificil"
    return msg

def resultado(res):
    if res:
        print(f"El usuario con direccion {address} gano")
    else:
        print(f"El usuario con direccion {address} perdio")
    

#Ciclo infinito esperando conexion
while True:
    #Cuando un cliente se conecta, recibimos el socket client y su direccion
    c,address = s.accept()
    print(f"Conexion establecida desde {address}!")
    msg= imprimirbienvenida()
    c.send(bytes(msg,"utf-8"))
    while True:
        #Decodificamos el mensaje y lo pasamos a string
        mensaje=c.recv(1024).decode("utf-8")
        if mensaje=="1":
            num_aleatorio= random.randint(0,len(PALFACIL)-1)
            c.send(bytes(PALFACIL[num_aleatorio],"utf-8"))
            print("Se le ha enviado la palabra " + PALFACIL[num_aleatorio])
        elif mensaje=="2":
            num_aleatorio= random.randint(0,len(PALMEDIO)-1)
            c.send(bytes(PALMEDIO[num_aleatorio],"utf-8"))
            print("Se le ha enviado la palabra "+ PALMEDIO[num_aleatorio])
        elif mensaje=="3":
            num_aleatorio= random.randint(0,len(PALDIFICIL)-1)
            c.send(bytes(PALDIFICIL[num_aleatorio],"utf-8"))
            print("Se le ha enviado la palabra "+ PALDIFICIL[num_aleatorio])
        elif mensaje=="Salir":
            print("El usuario actual dejo de jugar")
            c.close()
            break
        res=bool(c.recv(1024).decode("utf-8"))
        resultado(res)
        



