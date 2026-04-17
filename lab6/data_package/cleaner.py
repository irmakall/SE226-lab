
def remove_duplicates(data_list):

    return list(set(data_list))

def strip_whitespaces(string_list):
    result = []
    for s in string_list:
        result.append(s.strip())
    return result
