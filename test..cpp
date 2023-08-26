#include <stdio.h>
int main() {
    char input[1000];
    while(scanf("%s", input)!=EOF) {
    
        int alphabet[27]={}, temp=0, test=0;
        for(int i=0;input[i]!='\0';i++)
            switch((int)input[i]) { /*逐一判斷輸入字元為何*/
                case 65: /*檢查A*/
                case 97: /*檢查a*/
                    alphabet[0]++;
                    break;
                case 66: /*檢查B*/
                case 98: /*檢查b*/
                    alphabet[1]++;
                    break;
                case 67: /*檢查C*/
                case 99: /*檢查c*/
                    alphabet[2]++;
                    break;
                case 68: /*檢查D*/
                case 100: /*檢查d*/
                    alphabet[3]++;
                    break;
                case 69: /*檢查E*/
                case 101: /*檢查e*/
                    alphabet[4]++;
                    break;
                case 70: /*檢查F*/
                case 102: /*檢查f*/
                    alphabet[5]++;
                    break;
                case 71: /*檢查G*/
                case 103: /*檢查g*/
                    alphabet[6]++;
                    break;
                case 72: /*檢查H*/
                case 104: /*檢查h*/
                    alphabet[7]++;
                    break;
                case 73: /*檢查I*/
                case 105: /*檢查i*/
                    alphabet[8]++;
                    break;
                case 74: /*檢查J*/
                case 106: /*檢查j*/
                    alphabet[9]++;
                    break;
                case 75: /*檢查K*/
                case 107: /*檢查k*/
                    alphabet[10]++;
                    break;
                case 76: /*檢查L*/
                case 108: /*檢查l*/
                    alphabet[11]++;
                    break;
                case 77: /*檢查M*/
                case 109: /*檢查m*/
                    alphabet[12]++;
                    break;
                case 78: /*檢查N*/
                case 110: /*檢查n*/
                    alphabet[13]++;
                    break;
                case 79: /*檢查O*/
                case 111: /*檢查o*/
                    alphabet[14]++;
                    break;
                case 80: /*檢查P*/
                case 112: /*檢查p*/
                    alphabet[15]++;
                    break;
                case 81: /*檢查Q*/
                case 113: /*檢查q*/
                    alphabet[16]++;
                    break;
                case 82: /*檢查R*/
                case 114: /*檢查r*/
                    alphabet[17]++;
                    break;
                case 83: /*檢查S*/
                case 115: /*檢查s*/
                    alphabet[18]++;
                    break;
                case 84: /*檢查T*/
                case 116: /*檢查t*/
                    alphabet[19]++;
                    break;
                case 85: /*檢查U*/
                case 117: /*檢查u*/
                    alphabet[20]++;
                    break;
                case 86: /*檢查V*/
                case 118: /*檢查v*/
                    alphabet[21]++;
                    break;
                case 87: /*檢查W*/
                case 119: /*檢查w*/
                    alphabet[22]++;
                    break;
                case 88: /*檢查X*/
                case 120: /*檢查x*/
                    alphabet[23]++;
                    break;
                case 89: /*檢查Y*/
                case 121: /*檢查y*/
                    alphabet[24]++;
                    break;
                case 90: /*檢查Z*/
                case 122: /*檢查z*/
                    alphabet[25]++;
                    break;
            }
            
        for(int i=0;i<26;i++) { /*迴文字串必須頭尾對稱，
                                   因此最多只能有一種字母出現奇數次
                                   若有一種以上的字母出現奇數次，則非迴文
                                   若26個字母檢查完接皆未出現上述情況，則為迴文*/
            if(alphabet[i]%2==1)
                temp++;
            if(temp==2) {
                printf("no...\n");
                break;
            }
            else
                test++;
        }
        if(test==26)
            printf("yes !\n");
    }
    
    return 0;
}