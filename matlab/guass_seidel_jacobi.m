gx = @(y,z) 1/8 * (16+3*y-2*z)
gy = @(x,z) 1/8*(-9+2*x-z)
gz = @(x,y) 1/10*(1+2*x-4*y)

function guass_seidel(x,y,z,gx,gy,gz)
  for i=1:3
    printf("Iteration %d\n", i)
    x=gx(y,z)
    y=gy(x,z)
    z=gz(x,y)
  endfor
  ans = [x y z]
endfunction

function jacobi(x,y,z,gx,gy,gz)
  for i=1:3
    printf("Iteration %d\n", i)
    xc = x
    yc = y
    zc = z
    x = gx(yc,zc)
    y = gy(xc,zc)
    z = gz(xc,yc)
  endfor
  ans = [x y z]
endfunction

disp("Input x, y and z")
x = input("x: ")
y = input("y: ")
z = input("z: ")

disp("Gauss-Seidel:")
guass_seidel(x,y,z,gx,gy,gz)
disp("Jacobi:")
jacobi(x,y,z,gx,gy,gz)
