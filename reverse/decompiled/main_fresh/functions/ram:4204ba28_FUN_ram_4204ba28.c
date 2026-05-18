
undefined4 FUN_ram_4204ba28(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 auStack_24 [3];
  
  if (param_1 == 0) {
    return 0x102;
  }
  if ((*param_2 & 1) == 0) {
    iVar2 = param_1 + 0x20;
    uVar1 = 5;
    do {
      auStack_24[0] = 0;
      iVar3 = FUN_ram_4039c32e(iVar2,auStack_24,1,5);
      if (iVar3 != 0) goto LAB_ram_4204bab2;
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + -4;
    } while (uVar1 != 0xffffffff);
  }
  else {
    iVar2 = param_1 + 0xc;
    for (uVar1 = 0; (int)uVar1 < *(int *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
      auStack_24[0] = 0;
      iVar3 = FUN_ram_4039c32e(iVar2,auStack_24,1,5);
      if (iVar3 != 0) break;
      iVar2 = iVar2 + 4;
    }
    if (uVar1 != *(uint *)(param_1 + 0x34)) {
LAB_ram_4204bab2:
      piVar4 = (int *)FUN_ram_403905a0(1,0xc,0x804);
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_ram_420b5ca6(0,0,3,0x804);
        *piVar4 = iVar2;
        piVar5 = (int *)((uVar1 + 3) * 4 + param_1);
        if (iVar2 != 0) {
          uVar1 = 1 << (uVar1 & 0x1f);
          piVar4[1] = param_1;
          piVar4[2] = uVar1 << 0x14 | uVar1 << 10 | uVar1;
          fence();
          *piVar5 = (int)piVar4;
          fence();
          *param_3 = (int)piVar4;
          return 0;
        }
        thunk_FUN_ram_40390634(piVar4);
        fence();
        *piVar5 = 0;
        fence();
      }
      return 0x101;
    }
  }
  return 0x106;
}

