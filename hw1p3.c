# include <stdio.h>


int takesNoArgs(char op);
float processOp(float amt, char op, float val);
float processPlus(float amt, float val);
float processMinus(float amt, float val);
float processTimes(float amt, float val);
float processDivide(float amt, float val);
float processPrint(float amt);
float processClear();


void main(int arg, char **argv) {
    float amt = 0.0f; //current amt
    char op; //op put in
    float val; //val that needs to operanded
    
    printf("CS 2271 Calculator by Ashley Sachdeva\n");
    
    while (1) {
        int ic = getchar();
        if (ic < 0) { //EOF
		break;
	}    
        op = (char) ic;
        if (op == 'Q') {
		break;
		
		
	}
        
        if (takesNoArgs(op)) {
            val = 0.0f;
        }
        else {
            scanf("%f", &val);
        }
        amt = processOp(amt, op, val);
        
        while (1) {
            int ic = getchar();
            if (ic == '\n') {
                break;
            }
        }
    }
printf("thank you and goodbye!\n");
    
    
    
}

int takesNoArgs(char operator) {
    return (operator == 'C') || (operator == '=');
}

float processOp(float amt, char op, float val) {
    if (op == '+')
        return processPlus(amt, val);
    else if (op == '-')
        return processMinus(amt, val);
    else if (op == '*')
        return processTimes(amt, val);
    else if (op == '/')
        return processDivide(amt, val);
    else if (op == '=')
        return processPrint(amt);
    else if (op == 'C')
        return processClear();
    else {
        printf("Bad Operator\n");
        return amt;
    }
}

float processPlus(float amt, float val) {
    return amt + val;
}

float processMinus(float amt, float val) {
    return amt - val;
}

float processTimes(float amt, float val) {
    return amt * val;
}

float processDivide(float amt, float val) {
    return amt / val;
}

float processPrint(float amt) {
    printf("%f", amt);
    return amt;
}

float processClear() {
    return 0;
}
// hockey



