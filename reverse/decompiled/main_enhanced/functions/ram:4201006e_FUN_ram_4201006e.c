
void FUN_ram_4201006e(int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                     undefined4 param_6,uint param_7)

{
  byte bVar1;
  char cVar2;
  int in_t1;
  char cVar3;
  uint uVar4;
  
  for (; param_3 != in_t1; param_3 = param_3 + 1) {
    bVar1 = *(byte *)(param_1 + param_3) >> 4;
    cVar2 = '0';
    if (param_7 < bVar1) {
      cVar2 = 'W';
    }
    uVar4 = *(byte *)(param_1 + param_3) & 0xf;
    param_2[2] = bVar1 + cVar2;
    cVar2 = (char)uVar4;
    cVar3 = cVar2 + '0';
    if (param_7 < uVar4) {
      cVar3 = cVar2 + 'W';
    }
    param_2[3] = cVar3;
    param_2 = param_2 + 2;
  }
  *(undefined1 *)(param_4 + 9) = 0;
  return;
}

