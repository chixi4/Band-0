
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42058752(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int extraout_a2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (param_2 == 0) {
    uVar4 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  cVar1 = (char)((uint *)uVar4)[2];
  if ((cVar1 == '\0') ||
     (bVar2 = false, cVar1 == (char)(*(char *)(_DAT_ram_3fcc26ac + 0x3c) + '\x01'))) {
    uVar3 = *(uint *)uVar4;
    bVar2 = true;
    if (param_3 == 0) {
      if (uVar3 != 0) {
        bVar2 = _DAT_ram_3fcc26bc == uVar3;
      }
    }
    else if ((uVar3 != 0) && (_DAT_ram_3fcc26bc != 0xffffffff)) {
      return ((_DAT_ram_3fcc26bc ^ uVar3) & *(uint *)((int)((ulonglong)uVar4 >> 0x20) + 8)) == 0;
    }
  }
  return bVar2;
}

