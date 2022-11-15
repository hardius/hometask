
void Mediana(int n=3,const char* name = "filein.bmp", const char* out = "fileout.bmp")
{
	RgbImg img = readRgbImg(name);
	int half = n / 2;
        int* mas_r = new int[n * n];
        int* mas_g = new int[n * n];
        int* mas_b = new int[n * n];
	for (size_t row = half; row < img.height-half; ++row)
	{
		for (size_t col = half; col < img.width-half; ++col)
		{

			for (size_t i = 0; i < n; ++i)
				for (size_t j = 0; j < n; ++j)
				{
					size_t i_m = row+i-half,j_m=col-half+j;
					mas_r[i * n + j] = img.pixels[i_m][j_m].Red;
					mas_g[i * n + j] = img.pixels[i_m][j_m].Green;
					mas_b[i * n + j] = img.pixels[i_m][j_m].Blue;
				}
			BubbleSort(mas_r, n * n);
			BubbleSort(mas_g, n * n);	
			BubbleSort(mas_b, n * n);
			
			img.pixels[row][col].Red = mas_r[n * n / 2 + 1];
			img.pixels[row][col].Green = mas_g[n * n / 2 + 1];
			img.pixels[row][col].Blue = mas_b[n * n / 2 + 1];
		}
	}

	delete[] mas_b;
	delete[] mas_r;
	delete[] mas_g;
	writeRgbImg(out, img);
	deleteRgbImg(img);
}
