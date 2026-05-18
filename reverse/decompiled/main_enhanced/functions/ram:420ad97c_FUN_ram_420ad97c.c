
int FUN_ram_420ad97c(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = param_2 - 1U & 0xff;
  if (uVar2 < 6) {
    cVar1 = (char)((int)(((int)param_1[1] - (int)*param_1) * uVar2) / 5) + *param_1;
  }
  else if (uVar2 < 0xb) {
    cVar1 = (char)((int)(((int)param_1[2] - (int)param_1[1]) * (uVar2 - 5)) / 5) + param_1[1];
  }
  else {
    cVar1 = param_1[2] + '\x02';
  }
  return (int)cVar1;
}

