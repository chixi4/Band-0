
undefined4 * FUN_ram_4205c86e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_14 [3];
  
  puVar2 = auStack_14;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = FUN_ram_403974ca(*(undefined4 *)*param_1,puVar2,0);
  if (iVar1 == 0) {
    *puVar2 = 0;
    puVar2 = (undefined4 *)0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 1) {
      puVar2 = (undefined4 *)FUN_ram_4039bf1e(0);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = puVar2;
        if ((undefined4 *)*puVar2 != (undefined4 *)0x0) {
          iVar1 = FUN_ram_403977fa(*(undefined4 *)*puVar2);
          if (iVar1 != 0) {
            FUN_ram_4039bf1e();
          }
          FUN_ram_4039782c(*(undefined4 *)*puVar2);
          puVar3 = (undefined4 *)thunk_FUN_ram_40390634(*puVar2);
          *puVar2 = 0;
        }
        return puVar3;
      }
      return (undefined4 *)0x0;
    }
  }
  return puVar2;
}

