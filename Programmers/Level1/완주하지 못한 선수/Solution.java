import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        HashMap<String, Integer> hashMap = new HashMap<>();
        for (String str : participant)
            hashMap.put(str, hashMap.getOrDefault(str, 0) + 1);
        for (String str : completion)
            hashMap.put(str, hashMap.getOrDefault(str, 0) - 1);
        for (String key : hashMap.keySet()) {
            if (hashMap.get(key) != 0)
                answer = key;
        }
        return answer;
    }
}