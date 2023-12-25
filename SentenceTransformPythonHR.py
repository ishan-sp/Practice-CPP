def transformSentence(sentence):
    if not sentence:
        return ""
    l = sentence.split(" ")
    s = ""
    for word in l:
        for i in range(0, len(word)):
            if i == 0:
                s += word[0]
                continue
            else:
                pre = word[i-1]
                cur = word[i]
                o1 = ord(pre.lower())
                o2 = ord(cur.lower())
                if o1 < o2:
                    s += cur.upper()
                if o1 > o2:
                    s += cur.lower()
                if o1 == o2:
                    s += cur
        s += " "
    return s


print(transformSentence("a Blue MOON"))

        



