import mpmath as m
#import math as m

#округление
m.mp.dps = 2 

#скорость компов
v1 = m.mpf(93*(10**15))
#v2 = m.mpf(10**6)


#Наше число
n = 10**1000

#Формула
T1 = (m.e)**(4*(((m.log10(n))**2)**(1/3))*((m.log10(m.log10(n)))**1/3))
T2 = (m.e)**(2*(((m.log10(n))**3)**(1/4))*(((m.log10(m.log10(n))))**(1/4)))


#Время
#t1 = T1/v1
#t2 = T2/v2



#Вывод того, что нам необходимо
#print("n", "{:.2e}".format(n))

#print("T1", "{:.2e}".format(T1))
#print("t1", "{:.2e}".format(t1))

#print("T2", "{:.2e}".format(T2))
#print("t2", "{:.2e}".format(t2))

#print("n =", n)
print("T1 =", T1)
#print("t1 =", t1)
print("T2 =", T2)
