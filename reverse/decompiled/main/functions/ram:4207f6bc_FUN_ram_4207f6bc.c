
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207f6bc(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x102;
  if (param_1 != 0) {
    uVar2 = 0;
    puVar1 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x3f;
      *(undefined4 *)(puVar1 + 4) = 0x420729c4;
      *(undefined2 *)(puVar1 + 8) = 0;
      puVar1[10] = param_2;
      *(int *)(puVar1 + 0xc) = param_1;
      FUN_ram_42082b56();
    }
  }
  return uVar2;
}

