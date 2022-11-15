void prep_for_conv(const char* name = "filein.bmp", const char* out = "fileout.bmp")
{
	testBoxFilter();
	RgbImg img = readRgbImg(name);
	size_t t = 3;
	double** ker = new double* [3];
	for (int i = 0; i < 3; ++i) ker[i] = new double[3];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
		{
			std::cout << "[" << i << "," << j << "]";
			std::cin >> ker[i][j];
		}
	RgbImg new_img=convolution(img,t,ker);
	writeRgbImg(out, new_img);
	
	deleteRgbImg(img);
	deleteRgbImg(new_img);
	for (int i = 0; i < 3; ++i)
		delete[] ker[i]; 
	delete[] ker;

}
void testBoxFilter()
{
	RgbImg img = readRgbImg("file1.bmp");
	RgbImg filtered = convolution(img, 7);
	writeRgbImg("filein.bmp", filtered);
	deleteRgbImg(img);
	deleteRgbImg(filtered);
}
int main(int argc, const char* argv[])
{		
	try {
		prep_for_conv();
	}
	catch (std::exception const& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return -1;
	}
	return 0;
}
