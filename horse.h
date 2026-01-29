class Horse {
private:
    int position;

public:
    Horse();
    void advance();
    int getPosition() const;
    bool hasWon(int trackLength) const;
};
#endif