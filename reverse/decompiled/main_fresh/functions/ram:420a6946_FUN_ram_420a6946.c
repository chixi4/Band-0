
undefined4 FUN_ram_420a6946(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_ram_420a6940();
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  puVar1 = (undefined4 *)FUN_ram_4206d7ce(1,param_2 + 8);
  uVar2 = 0xffff8100;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    *(undefined4 *)(param_1 + 0xa8) = 0xd;
    FUN_ram_420a68b0(param_1,puVar1 + 2);
    uVar2 = 0;
  }
  return uVar2;
}

