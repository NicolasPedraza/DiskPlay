angulo = 267;
[lineaR,lineaG,lineaB,linea_ang,grid_theta,grid_rho,IB,IC,IO] = lineaRGB('Ferrari.jpg',32,angulo);
I_N = zeros(size(IB,1),size(IB,2),3);
[S] = color_linea(I_N,grid_rho,grid_theta,linea_ang,lineaR,lineaG,lineaB);
subplot(121); imshow(IB); title('Imagen Display');
subplot(122); imshow(S); title('Angulo: 267');