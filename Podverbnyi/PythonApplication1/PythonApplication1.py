a = []
b = 0
d = []
for i in iter(int, 1):
    Properties = input("\nВведите действие: \n1)Добавить машину в гараж \n2)Характеристики машины \n3)Информация о машинах \n4)Удалить машину \n5)Выйти из программы\n")
   
    #ПЕРВЫЙ ПУНКт   
    if '1' in Properties:
        print("\nХорошо! Автомобиль добавлен в гараж")
        a.append("Новая машина")
        b += 1
        Mech = input("\nХотите ли вы перейти в предварительные настройки? Да/Нет ")
        if "Да" in Mech or"да" in Mech:

            #Пишем количество дверей. Задается 3 попытки. При провале программа выходит.
            for j in range(4):
                Doors = input("\nВведите нужное количество дверей для машины: ")
                if "2" or "4" in Doors:
                    if "2" in Doors:
                        print("\nВаша машина имеет 2 двери")
                        break
                    elif "4" in Doors:
                        print("\nВаша машина имеет 4 двери")
                        break
                    else:
                        print("\nНельзя использовать такое количество дверей! Попробуйте снова. ")
       
            #Теперь вводим цвет, который нам нужен. Для простоты ограничемся несколько цветами.
            for k in range(4):
                Color = input("\nКакой цвет машины вы предпочитаете? Из доступных есть: Красный, желтый, синий, черный или белый цвет. ")
                if "Красный" in Color or "красный" in Color or "Желтый" in Color or "желтый" in Color or "Жёлтый" in Color or "жёлтый" in Color or "Синий" in Color or "синий" in Color or "Черный" in Color or "черный" in Color or "Чёрный" in Color or "чёрный" in Color or "Белый" in Color or "белый" in Color:
                    if "Красный" in Color or "красный" in Color:
                        print("\nВаша машина красного цвета")
                        break
                    elif "Желтый" in Color or "желтый" in Color or "жёлтый" in Color or "Жёлтый" in Color:
                        print("\nВаша машина желтого цвета")
                        break
                    elif "Синий" in Color or "синий" in Color:
                        print("\nВаша машина синего цвета")
                        break
                    elif "Черный" in Color or "Чёрный" in Color or "черный" in Color or "чёрный" in Color:
                        print("\nВаша машина черного цвета")
                        break
                    elif "Белый" in Color or "белый" in Color:
                        print("\nВаша машина белого цвета")
                        break
                else:
                    print("\nТакой цвет недоступен или не существует вообще!")

            #Вводим объем двигателя
            for h in range(4):
                Engine = input("\nВведите объем двигателя. Из доступных: 1.1, 1.7, 3.5 литровые. ")
                if "1.1" in Engine or "1,1" in Engine or "1.7" in Engine or "1,7" in Engine or "3.5"  in Engine or "3,5" in Engine:
                    if "1.1" in Engine or "1,1" in Engine:
                        print("\nВаш двигатель имеет объем 1.1 литр")
                        break
                    elif "1.7" in Engine or "1,7" in Engine:
                         print("\nВаш двигатель имеет объем 1.7 литра")
                         break
                    elif "3.5"  in Engine or "3,5" in Engine:
                        print("\nВаш двигатель имеет объем 3.5 литра")
                        break
                else:
                    print("\nТакой объем двигателя не доступен или не существует вообще!")

            #Марка машины
            Brand = input("\nКакую марку машины Вы предпочитаете? ")
            print("\nВы выбрали машину марки", Brand, end='!')
            a[-1] = Brand

            #Пишем общую статистику
            print("\nМашина марки", Brand, "заведена в гараж")
            print("\nОбщие характеристики:")
            print("1) Марка машины:", Brand)
            print("2) Количество дверей:" , Doors)
            print("3) Цвет машины:", Color)
            print("4) Объем двигателя:", Engine)
            
            d.append(Brand)
            d.append(Doors)
            d.append(Color)
            d.append(Engine)
            
            

        elif "Нет" in Mech or "нет" in Mech:
            continue                                                                                 #Важная строчка
    
        else:
            print('\nВведите корректные данные!')

    #ВТОРОЙ ПУНКТ    
    elif '2' in Properties:
        if a == []:
            print("\nВ гараже нет машин!")
        else:
            print("\nВыберите машину, для которой будете менять характеристики. Введите 'e', чтобы выйти в меню: ")
            b = 0
            for gg in a:
                print(b, ")", gg, sep='')
                b += 1
            c = 0
            Change1 = input()
            if 'e' in Change1:
                continue
            for gg1 in range(b):
                if int(Change1) == c:
                    print("\nИзменение характеристик для ", a[int(Change1)])
                    print("\nЧто вы хотите изменить? \n1) Марку машины \n2) Количество дверей \n3) Цвет машины \n4) Объем двигателя")
                    for i in range(4):                    
                        Rechange = input()
                        if '1' in Rechange:
                            Brand = input("\nКакую марку машины Вы предпочитаете? ")
                            print("\nВы выбрали машину марки", Brand, end='!')
                            a[0+1*int(Change1)] = Brand
                            d[0+4*int(Change1)] = Brand
                            break
                        elif '2' in Rechange:
                            for j in range(4):
                                Doors = input("\nВведите нужное количество дверей для машины: ")
                                if "2" or "4" in Doors:
                                    if "2" in Doors:
                                        print("\nВаша машина имеет 2 двери")
                                        d[1+4*int(Change1)] = Doors 
                                        break
                                    elif "4" in Doors:
                                        print("\nВаша машина имеет 4 двери")
                                        d[1+4*int(Change1)] = Doors 
                                        break
                                    else:
                                        print("\nНельзя использовать такое количество дверей! Попробуйте снова. ")
                                        
                        elif '3' in Rechange:
                            for k in range(4):
                                Color = input("\nКакой цвет машины вы предпочитаете? Из доступных есть: Красный, желтый, синий, черный или белый цвет. ")
                                if "Красный" in Color or "красный" in Color or "Желтый" in Color or "желтый" in Color or "Жёлтый" in Color or "жёлтый" in Color or "Синий" in Color or "синий" in Color or "Черный" in Color or "черный" in Color or "Чёрный" in Color or "чёрный" in Color or "Белый" in Color or "белый" in Color:
                                    if "Красный" in Color or "красный" in Color:
                                        print("\nВаша машина красного цвета")
                                        d[2+4*int(Change1)] = Color
                                        break
                                    elif "Желтый" in Color or "желтый" in Color or "жёлтый" in Color or "Жёлтый" in Color:
                                        print("\nВаша машина желтого цвета")
                                        d[2+4*int(Change1)] = Color
                                        break
                                    elif "Синий" in Color or "синий" in Color:
                                        print("\nВаша машина синего цвета")
                                        d[2+4*int(Change1)] = Color
                                        break
                                    elif "Черный" in Color or "Чёрный" in Color or "черный" in Color or "чёрный" in Color:
                                        print("\nВаша машина черного цвета")
                                        d[2+4*int(Change1)] = Color
                                        break
                                    elif "Белый" in Color or "белый" in Color:
                                        print("\nВаша машина белого цвета")
                                        d[2+4*int(Change1)] = Color
                                        break
                                else:
                                    print("\nТакой цвет недоступен или не существует вообще!")
                        elif '4' in Rechange:
                            for h in range(4):
                                Engine = input("\nВведите объем двигателя. Из доступных: 1.1, 1.7, 3.5 литровые. ")
                                if "1.1" in Engine or "1,1" in Engine or "1.7" in Engine or "1,7" in Engine or "3.5"  in Engine or "3,5" in Engine:
                                    if "1.1" in Engine or "1,1" in Engine:
                                        print("\nВаш двигатель имеет объем 1.1 литр")
                                        d[3+4*int(Change1)] = Engine
                                        break
                                    elif "1.7" in Engine or "1,7" in Engine:
                                        print("\nВаш двигатель имеет объем 1.7 литра")
                                        d[3+4*int(Change1)] = Engine
                                        break
                                    elif "3.5"  in Engine or "3,5" in Engine:
                                        print("\nВаш двигатель имеет объем 3.5 литра")
                                        d[3+4*int(Change1)] = Engine
                                        break
                                else:
                                    print("\nТакой объем двигателя не доступен или не существует вообще!")                                               
                        break
                else:
                    c += 1
    #ТРЕТИЙ ПУНКТ
    elif '3' in Properties:
        if a == []:
            print("\nВ гараже нет машин!")
        else:
            print("\nВыберите машину. Введите 'e', чтобы выйти в меню: ")
            b = 0
            for gg in a:
                print(b, ")", gg, sep='')
                b += 1
            c = 0
            Change1 = input()
            if 'e' in Change1:
                continue
            for gg1 in range(b):
                if int(Change1) == c:
                    print("\nИнформация для машины", a[int(Change1)])
                    print('\n1)Марка машины: ', d[0+4*int(Change1)], '\n2)Количество дверей: ', d[1+4*int(Change1)],"\n3)Цвет машины: ", d[2+4*int(Change1)],"\n4)Объем двигателя: ", d[3+4*int(Change1)])
                    break
                else:
                    c += 1
           

            else:
                print("Введено некорректное значение!")

    #Четвертый пункт
    elif '4' in Properties:
        if a == []:
            print("\nВ гараже нет машин!")
        else:
            print("\nВыберите машину, которую хотите удалить. Введите 'e', чтобы выйти в меню: ")
            b = 0
            for gg in a:
                print(b, ")", gg, sep='')
                b += 1
            c = 0
            Change1 = input()
            if 'e' in Change1:
                continue
            for gg1 in range(b):
                if int(Change1) == c:
                    print("\nУдаление", a[0+int(Change1)], end='...')
                    print("\nУдаление произошло успешно!")
                    del a[0+int(Change1)]
                    del d[0+4*int(Change1)]
                    del d[0+4*int(Change1)]
                    del d[0+4*int(Change1)]
                    del d[0+4*int(Change1)]
                    break
                else:
                    c += 1
            else:
                print("\nВведено некорректное значение!")

    elif '5' in Properties:
        import sys
        sys.exit(0)



