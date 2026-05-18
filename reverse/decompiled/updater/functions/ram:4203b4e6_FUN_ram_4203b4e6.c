
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203b4e6(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if ((puVar1 == (undefined4 *)0x0) || ((code *)*puVar1 == (code *)0x0)) {
    FUN_ram_42033fd8(1,2,1,0x3c07d330);
    uVar2 = 0x102;
  }
  else {
    uVar2 = (*(code *)*puVar1)(puVar1[1]);
    if (*(char *)(param_1 + 8) == '\x02') {
      if ((puVar1[1] != 0) && (puVar1[2] != 0)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return uVar2;
}

