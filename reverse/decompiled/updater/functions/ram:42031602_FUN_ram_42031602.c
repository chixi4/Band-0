
int FUN_ram_42031602(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_ram_42029140(*param_1);
  if (0x400 < param_3) {
    return -3;
  }
  if (0x100 < param_5) {
    return -5;
  }
  if ((param_1[0x17] == 0) || ((param_1[0x15] != 1 && ((int)param_1[0x13] <= (int)param_1[0x16]))))
  {
    if ((param_4 == 0) || (param_5 == 0)) goto LAB_ram_42031678;
    iVar2 = FUN_ram_420313cc(param_1,param_4,param_5);
  }
  else {
    iVar2 = FUN_ram_420315fc(param_1,param_4,param_5);
    param_5 = 0;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_ram_42031678:
  puVar4 = param_1 + 3;
  while( true ) {
    if (param_3 == 0) {
      iVar2 = FUN_ram_420313cc(param_1,param_4,param_5);
      if (iVar2 == 0) {
        param_1[0x13] = param_1[0x13] + 1;
      }
      return iVar2;
    }
    uVar3 = param_3;
    if (uVar1 < param_3) {
      uVar3 = uVar1;
    }
    iVar2 = FUN_ram_42029306(param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_ram_42029264(param_1,puVar4,uVar1);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_ram_4202927a(param_1,puVar4);
    if (iVar2 != 0) break;
    FUN_ram_40399daa(param_2,puVar4,uVar3);
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
  }
  return iVar2;
}

