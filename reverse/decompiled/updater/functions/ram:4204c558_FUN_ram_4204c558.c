
void FUN_ram_4204c558(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_1 + 4) * 4;
  uVar1 = *(undefined4 *)(iVar2 + 0x3fcb0920);
  *(undefined4 *)(iVar2 + 0x3fcb0920) = 0;
  FUN_ram_4204d83c(param_1,uVar1);
  return;
}

