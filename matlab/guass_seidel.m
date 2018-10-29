gx = @(y,z) 1/8 * (16+3*y-2*z)
gy = @(x,z) 1/8*(-9+2*x-z)
gz = @(x,y) 1/10*(1+2*x-4*y)

function [x,y,z]=guass_seidel(x,y,z,gx,gy,gz)
  for i=1:3
    x=gx(y,z)
    y=gy(x,z)
    z=gz(x,y)
  endfor
endfunction
