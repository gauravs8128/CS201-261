'''def nextGreaterElements(A):
    n = len(A)
    result = [-1] * n  
    answer = []  

    for i in range(2 * n):
        while answer and A[answer[-1]] < A[i % n]:
            result[answer.pop()] = A[i % n]
        if i < n:
            answer.append(i)
    
    return result

A = [1, 2, 1,9,6,7,3,4,5,-1]
print(nextGreaterElements(A)) '''
#the second commented code gives wrong output
'''def nextGreaterElements(A):
    n = len(A)
    result = [-1] * n  
    answer = []  
    index = 0 
    for i in range(2 * n):
        
        while index < len(answer) and A[answer[index]] < A[i % n]:
            result[answer[index]] = A[i % n]
            index += 1  
        if i < n:
            answer.append(i)
    
    return result

A = [1, 2, 1, 9, 6, 7, 3, 4, 5, -1]
print(nextGreaterElements(A))'''
# this code is correct and is executed without using pop and append
def nextGreaterElements(A):
    n = len(A)
    result = [-1] * n  
    answer = []  
    top = -1 

    for i in range(2 * n):
        while top >= 0 and A[answer[top]] < A[i % n]:
            result[answer[top]] = A[i % n]
            top -= 1  
        
        if i < n:
            top += 1
            if top < len(answer):
                answer[top] = i  
            else:
                answer += [i]
    
    return result

A = [1, 2, 1, 9, 6, 7, 3, 4, 5, -1]
print(nextGreaterElements(A))


