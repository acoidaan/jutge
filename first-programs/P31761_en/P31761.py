def multiply(a, b):
    # Convertimos a strings para manejar dígito por dígito
    a = str(a)
    b = str(b)
    
    # Inicializamos el resultado
    result = [0] * (len(a) + len(b))
    
    # Multiplicación manual
    for i in range(len(a) - 1, -1, -1):
        for j in range(len(b) - 1, -1, -1):
            mul = int(a[i]) * int(b[j])
            p1 = i + j
            p2 = i + j + 1
            sum = mul + result[p2]
            
            result[p2] = sum % 10
            result[p1] += sum // 10
    
    # Convertimos el resultado a string, eliminando ceros iniciales
    result_str = ''.join(map(str, result)).lstrip('0')
    
    # Si el resultado es vacío (caso 0 * 0), retornamos '0'
    return result_str if result_str else '0'

# Lectura de entrada
a = input().strip()
b = input().strip()

# Cálculo
result = multiply(a, b)

# Salida
print(result)