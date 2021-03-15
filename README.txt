Enache Alexandra-Anamaria 334AA

	Problema a fost impartita in 4 module cu o functionalitate bine definita. In cele ce urmeza voi explica algoritmul folosit in cazul fiecarui modul.


Sensors_input:
	Acest modul primeste ca input-uri o codificare a temperaturilor citite de senzori sub forma unui singur input pe 40 de biti si un alt input pe 5 biti care ne furnizeaza informatii
despre starea de enable a fiecarui senzor. Pentru a putea calcula suma temperaturilor corespunzatoare senzorilor activi si numarul de senzori activi am folosit un bloc always 
(atribuiri blocante) in care am verificat starea de enable. In cazul in care valoarea bitului din sensors_en_i corespunzatoare primului senzor este 1, am incrementat nr_active_sensors_o 
(numarul activi de seonzori) si am adunat in temp_sum_o valoarea temperaturii primului senzor. In caz contrat, bitul este 0, trec mai departe la bitul 2 din sensors_en_i s.a.m.d.


Division:
	Modulul primeste ca input 2 numere pe 16 biti pe care trebuie sa le imparta si sa returneze catul si restul acestei impartiri pe acelasi numar de biti. In cadrul blocului always
am initializat catul (Q) si restul (R) cu 0 ca de fiecare data cand un semnal din sensitivity list se schiba, cele 2 variabile sa porneasca de la valoarea 0. Cu ajutorul unei bucle for
l-am shiftat catre stanga la fiecare iteratie pe R si i-am setat bitul cel mai putin semnificativ in valoarea bitului N[i], apoi am verificat daca restul e mai mare sau egeal decat 
impartitorul. In cazul in care if-ul era adevarat din rest scadeam impartitorul, iar bitul catului pe pozitia i lua valoarea 1.


Output_display:
	In acest modul am aproximat valoarea mediei temperaturii corespunzatoare senzorilor activi in functie de restul calculat in modulul de mai sus si numarul activi de senzori.
Intr-un bloc always am verificat daca dublul restului este mai mare sau egal decat numarul activi de senzori. Daca era adevarat atunci aproximam superior, iar rezultat_out (variablia de
tip reg pe 8 biti in care salvez aproximarea temperaturii ) ia valoarea catului + 1, altfel ia valoarea catului. Acest bloc always este declansat de schimbarea oricarui semnal din 
sensitivity list: temp_Q_i, temp_R_i, active_sensors_nr. In alt bloc always am facut atribuiri blocante asupra semnalului de alarma in conformitate cu cerintele (1- daca aproximarea facuta
este in afara intervalului [19,26] si 0- in rest) si am codificat in coded_out_o aproximarea temperaturii cu ajutorul unui case.


Temperature_top:
	In acest modul am instantiat celelalte 3 module, folosind cateva variabile declarate de tip wire. Pentru a putea instantia modulul division am avut nevoie de o atribuire continua
in care am concatenat 8 biti de 0 cu nr_active_sensors_o in nr_sen pentru a-l face pe 16 biti. Modulul top va genera ca output codificarea valorii aproximatiei teperaturii si valoarea
alarmei.