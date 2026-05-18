
uint FUN_ram_4206c3c6(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = param_3;
  while( true ) {
    if (param_3 <= uVar1) {
      return uVar1;
    }
    if (0x1000 < uVar2) {
      uVar2 = 0x1000;
    }
    uVar2 = FUN_ram_4206e722(param_1,param_2 + uVar1,uVar2);
    if ((int)uVar2 < 1) break;
    uVar1 = uVar1 + uVar2;
    uVar2 = param_3 - uVar1;
  }
  if (((uVar2 & 0xffffff7f) != 0xffff9700) && (uVar2 != 0)) {
    FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),2,-uVar2);
    FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),4,0x8018);
    return uVar2;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  return uVar2;
}

