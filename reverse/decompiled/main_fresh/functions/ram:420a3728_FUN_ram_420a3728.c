
uint FUN_ram_420a3728(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 auStack_24 [3];
  
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 8);
  }
  iVar1 = FUN_ram_420a3498(param_1,param_4);
  if (iVar1 == -1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_420a2a7c(*puVar3,param_2,param_3);
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 & -(uint)((uVar2 + 0x6900 & 0xfffffeff) != 0);
        iVar1 = FUN_ram_420a2c0e(*puVar3,auStack_24);
        if (iVar1 == 0) {
          FUN_ram_420a3550(param_1,auStack_24[0]);
        }
      }
      else if (uVar2 == 0) {
        if (0 < iVar1) {
          FUN_ram_420a3508(param_1,0xffffffff);
        }
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

