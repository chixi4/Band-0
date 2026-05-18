
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42062de6(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_34;
  uint auStack_30 [3];
  undefined4 uStack_24;
  
  if (param_1 == (uint *)0x0) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  if (*param_1 != 0) {
    return 0x102;
  }
  iVar2 = FUN_ram_403905a0(1,0x44,0x1000);
  if (iVar2 == 0) {
    return 0x101;
  }
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  iVar3 = FUN_ram_4039c2c0(*param_1 + 0x3fcc53ac,auStack_30,1,5);
  iVar1 = 0x105;
  if (iVar3 != 0) {
    FUN_ram_403917e0(0x3fcc26fc);
    *(int *)(*param_1 * 4 + 0x3fcc2700) = iVar2;
    FUN_ram_403917f8(0x3fcc26fc);
    uVar4 = param_1[1];
    *(uint *)(iVar2 + 0x3c) = *param_1;
    *(uint *)(iVar2 + 0x40) = param_1[2];
    if (uVar4 == 0) {
      uVar4 = 7;
    }
    uStack_34 = 0;
    iVar1 = FUN_ram_420b3d0c(uVar4,0,&uStack_34);
    if (iVar1 == 0) {
      auStack_30[0] = *param_1;
      auStack_30[1] = 0;
      uStack_24 = uStack_34;
      if (param_1[2] == 1) {
        auStack_30[1] = 3;
      }
      auStack_30[2] = uVar4;
      FUN_ram_42096ef8(iVar2,auStack_30);
      FUN_ram_403917e0(0x3fcc26fc);
      _DAT_ram_3fcc2704 = _DAT_ram_3fcc2704 + 1;
      if (_DAT_ram_3fcc2704 == 1) {
        FUN_ram_403946d4();
      }
      FUN_ram_403917f8(0x3fcc26fc);
      if (param_1[2] == 0) {
        FUN_ram_420b493c();
      }
      else {
        iVar1 = FUN_ram_403948d2(*(undefined4 *)(iVar2 + 0x34),1);
        if (iVar1 != 0) goto LAB_ram_42062f30;
        FUN_ram_420b4de2(2,1);
      }
      *param_2 = iVar2;
      return 0;
    }
  }
LAB_ram_42062f30:
  thunk_FUN_ram_40390634(iVar2);
  return iVar1;
}

