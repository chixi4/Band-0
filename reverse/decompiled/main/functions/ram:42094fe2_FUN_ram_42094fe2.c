
void FUN_ram_42094fe2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_1 + 4) * 4;
  uVar1 = *(undefined4 *)(iVar2 + 0x3fcb7db4);
  *(undefined4 *)(iVar2 + 0x3fcb7db4) = 0;
  FUN_ram_420962fa(param_1,uVar1);
  return;
}

