class Line{
    int x1,y1;
    int x2,y2;
    float slope;
    float intercept;
    
    public:
        Line();
        Line(int x1,int y1,int x2,int y2);
        int getX1()const;
        int getY1()const;
        int getX2()const;
        int getY2()const;
        float getSlope();
        float getInter();
};
