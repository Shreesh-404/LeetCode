class Solution {
    public int reverse(int x) {
        StringBuilder stringBuilder = new StringBuilder();
        if (x < 0){
            stringBuilder.append(Math.abs(x));
            stringBuilder.append("-");
            stringBuilder.reverse();
        }else {
            stringBuilder.append(Math.abs(x));
            stringBuilder.reverse();
        }
        String resultString = stringBuilder.toString();
        try {
            return Integer.parseInt(resultString);
        }catch (NumberFormatException e){
            return 0;
        }
    }
}