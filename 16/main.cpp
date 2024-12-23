def findAnagrams(s: str, p: str):
    p_len = len(p)
    s_len = len(s)
    result = []

    if p_len > s_len:
        return result

    # Подсчет частот символов в p
    p_count = Counter(p)
    s_count = Counter(s[:p_len])  # Подсчет для первого окна в s

    # Проверка, является ли первое окно анаграммой
    if p_count == s_count:
        result.append(0)

    # Начинаем скользящее окно
    for i in range(1, s_len - p_len + 1):
        # Удаляем символ, который выходит из окна
        s_count[s[i - 1]] -= 1
        if s_count[s[i - 1]] == 0:
            del s_count[s[i - 1]]  # Удаляем символ из счетчика

        # Добавляем новый символ, который входит в окно
        s_count[s[i + p_len - 1]] += 1

        # Сравниваем подсчеты
        if p_count == s_count:
            result.append(i)

    return result

# Пример использования:
print(findAnagrams("cbaebabacd", "abc"))  # Вывод: [0, 6]
print(findAnagrams("abab", "ab"))          # Вывод: [0, 1, 2]
