import random
import time

nome = input("What is your name?\n>>>")

pacote = ["demonic eye","goblin","slime","zombie","spider","skeleton"]

monstroescolhido = random.choice(pacote)

print(" ")
print("an {} appeared!".format(monstroescolhido))
print(" ")
jogador = 100
monstro = 100

#Your attack

while jogador > 1:
  time.sleep(1)
  print("==================")
  print(" ")
  print("{}'s life: {}\n{}'s life: {}".format(nome, jogador, monstroescolhido, monstro))
  print(" ")
  time.sleep(1)
  print("What {} will do?".format(nome))
  ataque = int(input("[1] Normal attack\n[2] Special attack\n[3] Recover life\n>>>"))
  print(" ")
  
  if ataque == 1:
    time.sleep(1)
    print("{} dealt 15 damage!".format(nome))
    monstro = monstro - 15
    time.sleep(1)
    print("{} have {} life now!".format(monstroescolhido, monstro))
    print(" ")
    
  elif ataque == 2:
    time.sleep(1)
    chance = random.randint(1,2)
    
    if chance == 1:
      print("{} dealt 35 damage!".format(nome))
      monstro = monstro - 35
      time.sleep(1)
      print("{} have {} life now!".format(monstroescolhido, monstro))
      print(" ")
      
    else:
      print("{} failed!".format(nome))
      
  elif ataque == 3:
    time.sleep(1)
    print("{} recovered 30 life!".format(nome))
    time.sleep(1)
    jogador = jogador + 30
    print("{} have {} life now!".format(nome, jogador))
    
    #Win or lose
    
  if jogador < 1:
    time.sleep(1)
    print("{} lose...".format(nome))
    time.sleep(2)
    break
    
  elif monstro < 1:
    time.sleep(1)
    print("{} wins!!".format(nome))
    time.sleep(2)
    break
    
    #enemy attack
  
  print("==================")
  print(" ")
  print("{} time!".format(monstroescolhido))
  time.sleep(2)
  print(" ")
  
  ataqueinimigo = random.randint(1,3)
  
  if ataqueinimigo == 1:
    print("{} dealt 10 damage!".format(monstroescolhido))
    jogador = jogador - 10
    time.sleep(1)
    print("{} have {} life now!".format(nome, jogador))
    print(" ")
  
  elif ataqueinimigo == 2:
    print("{} dealt 15 damage!".format(monstroescolhido))
    jogador = jogador - 15
    time.sleep(1)
    print("{} have {} life now!".format(nome, jogador))
    print(" ")
    
  elif ataqueinimigo == 3:
    print("{} dealt 20 damage!".format(monstroescolhido))
    jogador = jogador - 20
    time.sleep(1)
    print("{} have {} life now!".format(nome, jogador))
    print(" ")
    
  print(" ")
  
  #win or lose 2
  
  if jogador < 1:
    time.sleep(1)
    print("{} lose...".format(nome))
    time.sleep(2)
    break
    
  elif monstro < 1:
    time.sleep(1)
    print("{} wins!!".format(nome))
    time.sleep(2)
    break
    
