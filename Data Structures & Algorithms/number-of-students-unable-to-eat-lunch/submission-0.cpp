class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int res = students.size(); //Amout of students

        vector<int> cnt(2); // This just makes the counter for 0s and 1s

        for (int& student : students) //Range loop for number of students
        {
            cnt[student]++; //Add the 1/0s to our count.
        }

        for (int& s : sandwiches) //
        {
            if (cnt[s] > 0) //If we have students
            {
                cnt[s]--; //Sub from our student count
                res--;//And result
            } else {
                break;
            }
        }
        return res;
    }
};