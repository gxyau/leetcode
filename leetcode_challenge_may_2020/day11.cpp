#include<iostream>
class SolutionDay11 {
public:
    void checkColour(vector<vector<int>>& image, int x, int y, int newColour, int originalColour) {
        if (x < 0 || x >= image.size() || y < 0 || y >= image[0].size()) return;
        if (image[x][y] == originalColour) {
            image[x][y] = newColour;    
            checkColour(image, x-1, y, newColour, originalColour);    
            checkColour(image, x+1, y, newColour, originalColour);    
            checkColour(image, x, y-1, newColour, originalColour);    
            checkColour(image, x, y+1, newColour, originalColour);    
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColour) {
        if (newColour != image[sr][sc]) checkColour(image, sr, sc, newColour, image[sr][sc]);
        return image;    
    }
};
