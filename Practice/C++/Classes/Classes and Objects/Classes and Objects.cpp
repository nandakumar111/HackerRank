class Student{
    private:
        int score[5];
        int sum;
    public:
        int calculateTotalScore(){
            return sum;
        }
        void input(){
            for(int i=0;i<5;i++){
                cin>>score[i];
                sum+=score[i];
            }
        }
};