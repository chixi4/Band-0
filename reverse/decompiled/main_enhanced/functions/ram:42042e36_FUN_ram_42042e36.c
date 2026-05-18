
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042e36(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(_DAT_ram_3fcdfec4 + 100);
  uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))();
  (*pcVar2)(unaff_s1 + 0x1fc,uVar1);
  return;
}

