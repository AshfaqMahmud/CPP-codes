bool closeStrings(string word1, string word2) {
        // map<char,int> m1,m2;
        // bool res = true;
        // if(word1.size() != word2.size())
        // {
        //     return false;
        // }

        // for(int i=0; i<word1.size(); ++i){
        //     char c1,c2;
        //     c1 = word1[i];
        //     c2 = word2[i];

        //     m1[c1]++;
        //     m2[c2]++;
        // }
        // for(auto i1=m1.begin(), i2=m2.begin(); i1!=m1.end(),i2!=m2.end(); i1++,i2++)
        // {
        //     if(i1->first == i2->first){
        //         if(i1->second == i2->second){
        //             res = true;
        //         }
        //         else{
        //             res = false;
        //             break;
        //         }
        //     }
        //     else{
        //         res = false;
        //         break;
        //     }
        // }

        // return res;

        if (word1.size() != word2.size()) return false;

        unordered_map<char, int> freq1, freq2;
        unordered_set<char> charSet1, charSet2;

        for (char c : word1) {
            freq1[c]++;
            charSet1.insert(c);
        }
        for (char c : word2) {
            freq2[c]++;
            charSet2.insert(c);
        }

        if (charSet1 != charSet2) return false;

        vector<int> counts1, counts2;
        for (auto& pair : freq1) counts1.push_back(pair.second);
        for (auto& pair : freq2) counts2.push_back(pair.second);

        sort(counts1.begin(), counts1.end());
        sort(counts2.begin(), counts2.end());

        return counts1 == counts2;
    }

    /*Explanation:
Extract Frequencies:

The code initializes two empty vectors, counts1 and counts2, to store the frequencies of characters from freq1 and freq2.
freq1 and freq2 are unordered_map<char, int> that hold the character frequencies from word1 and word2.
Fill Frequency Vectors:

The first for loop iterates over freq1, pushing the frequency (i.e., pair.second) of each character into counts1.
The second for loop does the same for freq2, filling counts2 with frequencies from freq2.
Sort Frequency Vectors:

sort(counts1.begin(), counts1.end()) sorts the counts1 vector in ascending order.
sort(counts2.begin(), counts2.end()) sorts the counts2 vector similarly.
Compare Frequency Vectors:

return counts1 == counts2 returns true if the sorted frequency vectors are identical, meaning that the character frequencies can be transformed into one another by swapping frequencies. Otherwise, it returns false.
This ensures that the frequencies of characters in both strings can match through rearrangement, which is part of the criteria for the strings to be considered "close".






*/