
uint FUN_ram_4206970e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  uStack_22 = *(undefined2 *)((int)param_1 + 6);
  uStack_28 = *param_1;
  uStack_24 = 1;
  iVar1 = FUN_ram_420685b4(&uStack_28,0);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff2;
  }
  else {
    iVar1 = FUN_ram_420685b4(&uStack_28,1);
    uVar2 = 0xfffffff2;
    if ((iVar1 != 0) && (iVar1 = FUN_ram_420685b4(&uStack_28,2), uVar2 = 0, iVar1 != 0)) {
      uVar2 = FUN_ram_42069074(&uStack_28);
      if (uVar2 == 0) {
        uVar2 = FUN_ram_420693ce(&uStack_28,param_2,param_3,param_4);
      }
      else {
        uVar2 = uVar2 & -(uint)((int)uVar2 < 1);
      }
    }
  }
  return uVar2;
}

