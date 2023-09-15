x=int(input("valeur 1 ? ")) # valeur 1 saisie convertie en entier.
y=int(input("valeur 2 ? ")) # valeur 2 saisie convertie en entier.

if(y==0):
  print("pas de resultat, division par zero")
else:
    resultat = x/y

print ("la division de ",x,"/",y,"est",resultat)