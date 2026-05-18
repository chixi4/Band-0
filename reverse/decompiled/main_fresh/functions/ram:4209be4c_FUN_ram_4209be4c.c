
void FUN_ram_4209be4c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039c08e(1,0x210);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x208) = param_1;
    *(undefined4 *)(iVar1 + 0x20c) = param_2;
  }
  return;
}

