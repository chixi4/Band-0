
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42084e90(char param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar3 = 0x3001;
  }
  else if (DAT_ram_3fcc41a9 < 2) {
    uVar3 = 0x3002;
  }
  else if ((byte)(param_1 - 8U) < 0x4d) {
    puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar2 + 4) = 0x42072628;
      *puVar2 = 0x20;
      puVar2[8] = param_1;
      uVar3 = FUN_ram_42082b56();
      return uVar3;
    }
    uVar3 = 0x101;
  }
  else {
    uVar3 = 0x102;
  }
  return uVar3;
}

