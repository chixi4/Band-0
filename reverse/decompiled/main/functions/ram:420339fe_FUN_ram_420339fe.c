
uint FUN_ram_420339fe(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  iVar2 = FUN_ram_420338fe(param_1,&uStack_28);
  if (iVar2 == 0) {
    if ((int)(uint)*(byte *)(param_1 + 7) < param_3) {
      return (uint)*(byte *)(param_1 + 7);
    }
  }
  else {
    for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1) {
      iVar2 = FUN_ram_420338fe(uVar1 * 8 + param_2,param_1);
      if (iVar2 == 0) {
        return uVar1;
      }
    }
  }
  return 0xffffffff;
}

