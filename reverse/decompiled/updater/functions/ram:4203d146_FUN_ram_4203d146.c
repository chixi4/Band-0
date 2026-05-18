
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203d146(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar3 = 0x3001;
  }
  else if (param_1 < 3) {
    puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x1a;
      puVar2[8] = (char)param_1;
      puVar2[9] = 0;
      puVar2[10] = 0;
      *(undefined4 *)(puVar2 + 0xc) = param_2;
      *(undefined4 *)(puVar2 + 4) = 0x4202b4a6;
      uVar3 = FUN_ram_4203b75a();
      return uVar3;
    }
    uVar3 = 0x101;
  }
  else {
    uVar3 = 0x3004;
  }
  return uVar3;
}

