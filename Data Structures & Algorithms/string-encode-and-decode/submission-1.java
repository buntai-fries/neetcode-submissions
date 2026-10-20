class Solution {

    public String encode(List<String> strs) {
        if (strs.isEmpty()) {
            return "";
        }
        StringBuilder encoded_string = new StringBuilder();
        List<Integer> sizes = new ArrayList<>();
        for (String str : strs) {
            sizes.add(str.length());
        }
        for (int size : sizes) {
            encoded_string.append(size).append(',');
        }
        encoded_string.append('/');
        for (String str : strs) {
            encoded_string.append(str);
        }
        return encoded_string.toString();
    }

    public List<String> decode(String str) {
        if (str.length() == 0) {
            return new ArrayList<>();
        }
        List<String> decoded_string = new ArrayList<>();
        List<Integer> sizes = new ArrayList<>();
        int i = 0;
        while (str.charAt(i) != '/') {
            StringBuilder cur = new StringBuilder();
            while(str.charAt(i) != ',') {
                cur.append(str.charAt(i));
                i++;
            }
            sizes.add(Integer.parseInt(cur.toString()));
            i++;
        }
        i++;
        for (int size : sizes) {
            decoded_string.add(str.substring(i , i + size));
            i += size;
        }
        return decoded_string;
    }
}
