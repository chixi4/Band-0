
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207fc94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar3 = 0x3001;
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x36;
      *(undefined2 *)(puVar2 + 8) = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0x14) = param_2;
      *(undefined4 *)(puVar2 + 0xc) = param_1;
      *(undefined4 *)(puVar2 + 4) = 0x420729ac;
      uVar3 = FUN_ram_42082b56();
      return uVar3;
    }
    uVar3 = 0x101;
  }
  return uVar3;
}

