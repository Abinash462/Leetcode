class Solution
{
    public:
        int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
        {
            int areaofA = (ax2 - ax1) *(ay2 - ay1);
            int areaofB = (bx2 - bx1) *(by2 - by1);

            int overlap = 0;

            int Xoverlap = min(ax2, bx2) - max(ax1, bx1);
            int Yoverlap = min(ay2, by2) - max(ay1, by1);

            if (Xoverlap > 0 && Yoverlap > 0)
            {
                overlap = Xoverlap * Yoverlap;
            }
            return areaofA + areaofB - overlap;
        }
};