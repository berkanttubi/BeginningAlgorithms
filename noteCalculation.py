def notHesap(satır):

    notlar= satır.split(",") #Seperates data's until the ','

    isim= notlar[0]         #
    not1=int(notlar[1])     # Assigns the values
    not2=int(notlar[2])     #
    not3=int(notlar[3])     #

    avg= (not1*3)/10 + (not1*3)/10 + (not1*4)/10 #Just for calculation

    if avg >=85:
        harf="AA"
    elif avg >=80:
        harf="BA"
    elif avg >=75:
        harf="BB"
    elif avg >=70:
        harf="CB"
    elif avg >=65:
        harf="CC"
    elif avg>=60:
        harf="DC"
    elif avg>=55:
        harf="DD"
    else:
        harf="FF"

    return isim + "-->" + harf 



with open("C:/Users/BERKANT/Downloads/dosya.txt","r+",encoding="utf-8") as file: #You can choose the path

    vol=[]

    for i in file:
        vol.append(notHesap(i)) #For adding the character notes in the txt

    for i in vol:  #For seeing the file
        print(i)



