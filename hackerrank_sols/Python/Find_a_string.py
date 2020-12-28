#Kumar Ankit
def count_substring(string, sub_string):
    c=0
    l=len(sub_string)
    for i in range(len(string)):
        if(i<len(string)-l+1):
            c+=string.count(sub_string,i,i+l)
    return c

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)