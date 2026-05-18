
undefined4 FUN_ram_42048e18(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint auStack_50 [6];
  undefined4 auStack_38 [11];
  
  if (param_1 == 0) {
    return 0x102;
  }
  iVar2 = FUN_ram_42048c76(param_1,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar1 = *(uint *)(param_1 + 8);
      if (uVar1 == 0) {
        iVar2 = FUN_ram_420491d0(1,0,0);
        if (iVar2 != 0) {
          uVar3 = FUN_ram_4204930a(iVar2,0,*(undefined4 *)(iVar2 + 0x10));
          return uVar3;
        }
        uVar3 = 0x105;
      }
      else {
        iVar2 = FUN_ram_42048ca0(auStack_50);
        uVar3 = 0x105;
        if (iVar2 != 0) {
          uVar4 = FUN_ram_42048dd8(0x105);
          uVar1 = uVar1 & 0xf;
          uVar3 = 0x102;
          if (uVar1 < uVar4) {
            uVar5 = FUN_ram_4204969a(auStack_50);
            uVar1 = uVar1 + 1;
            if (uVar5 == 0xffffffff) {
              uVar4 = 0;
              auStack_38[0] = 0xffffffff;
            }
            else {
              for (uVar1 = uVar1 % uVar4; uVar1 < auStack_50[uVar5 * 8]; uVar1 = uVar1 + uVar4) {
              }
              uVar4 = ~uVar5 & 1;
              auStack_38[uVar4 * 8] = 0xffffffff;
            }
            uVar3 = FUN_ram_42048d04(auStack_50,uVar1,uVar4,iVar2);
          }
        }
      }
    }
    else {
      uVar3 = 0x102;
    }
  }
  else {
    uVar3 = 0x1503;
  }
  return uVar3;
}

