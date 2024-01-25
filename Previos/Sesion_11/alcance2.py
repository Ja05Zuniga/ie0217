# función externa
def outer():
    mensaje = 'local'
    
    # función anidada
    def inner():
        # declarar variable no local
        nonlocal mensaje
        mensaje = 'no local'
        print("inner:", mensaje)

    inner()
    print("outer:", mensaje)

outer()
