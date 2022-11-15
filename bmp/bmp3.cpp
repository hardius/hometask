
void GreyWorld(const char* inpic = "myFile.bmp", const char* outpic = "grey_pic.bmp")
{
    RgbImg iimg = readRgbImg(inpic);
    RgbImg oimg = createRgbImg(iimg.width, iimg.height, {0,0,0});
    double rez;
    for (int j = 0; j < iimg.width; ++j)
        for (int i = 0; i < iimg.height; ++i)
        {
            rez = (iimg.pixels[i][j].Blue + iimg.pixels[i][j].Green + iimg.pixels[i][j].Red) / 3;
            oimg.pixels[i][j].Blue = oimg.pixels[i][j].Green = oimg.pixels[i][j].Red = rez;
            rez = 0;
        }
    writeRgbImg(outpic, oimg);
    deleteRgbImg(iimg);
    deleteRgbImg(oimg);
}
int main()
{
    try
    {
        GreyWorld();
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}
