
int FUN_ram_420a36ca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_24 [4];
  
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 8);
  }
  iVar1 = FUN_ram_420a34a4(param_1,param_4);
  if (((0 < iVar1) && (iVar1 = FUN_ram_420a2a88(*puVar3,param_2,param_3), iVar1 < 0)) &&
     (iVar2 = FUN_ram_420a2c0e(*puVar3,auStack_24), iVar2 == 0)) {
    FUN_ram_420a3550(param_1,auStack_24[0]);
  }
  return iVar1;
}

