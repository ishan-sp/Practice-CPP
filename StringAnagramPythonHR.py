def stringAnagram(dictionary, query):
    result_list = []

    for q in query:
        count = 0
        for word in dictionary:
            for k in q:
                if k in word:
                    d = True
            for k in word:
                if k in q:
                    c = True
                count += 1
        

        result_list.append(count)

    return result_list

# Example usage:
dictionary = ["heater", "cold", "clod", "reheat", "docl"]
queries = ["cold", "clod", "reheat", "docl"]

print(stringAnagram(dictionary, queries))
