
undefined4
FUN_ram_4208decc(undefined4 param_1,uint param_2,undefined4 param_3,char param_4,uint param_5,
                undefined4 param_6,uint param_7,int param_8)

{
  int in_t1;
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint in_t3;
  int in_t4;
  uint in_t5;
  uint in_t6;
  
  do {
    param_5 = param_5 & ~(in_t4 << (param_7 & 0x1f));
    uVar3 = param_2 & 0xff;
    do {
      cVar2 = param_4;
      uVar4 = param_7;
      param_4 = cVar2 + '\x04';
      if ((uVar4 == in_t6) || (param_5 == 0)) {
        *(char *)(*(int *)(param_8 + -0x4e0) + 0x48) = (char)param_2;
        return 0;
      }
      param_7 = uVar4 + 1;
    } while ((param_5 >> (param_7 & 0x1f) & 1) == 0);
    cVar1 = param_4;
    if (in_t3 < uVar4) {
      if (in_t5 < ((uVar4 & 0xff) - 8 & 0xff)) {
        cVar1 = cVar2 + '%';
      }
      else {
        cVar1 = cVar2 + '$';
      }
    }
    param_2 = uVar3 + 1;
    *(char *)(uVar3 + in_t1) = cVar1;
  } while( true );
}

