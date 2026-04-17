
def calculate_mean(num_list):
    sum=0
    for i in num_list:
        sum+=i
    return sum/len(num_list)

def find_maximum(num_list):
    max=num_list[0]
    for i in num_list:
        if i>max:
            max=i
    return max

def find_minimum(num_list):
    min=num_list[0]
    for i in num_list:
        if i<min:
            min=i
    return min
