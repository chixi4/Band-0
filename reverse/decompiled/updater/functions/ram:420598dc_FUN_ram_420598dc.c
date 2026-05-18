
undefined4 FUN_ram_420598dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_14 [3];
  
  puVar1 = auStack_14;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = FUN_ram_40395806(*(undefined4 *)*param_1,puVar1,0);
  uVar3 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

