
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207fcf6(uint *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar3 = 0x3001;
  }
  else if (param_1 == (uint *)0x0) {
    uVar3 = 0x102;
  }
  else if (*param_1 < 3) {
    puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(param_1[2] + 0x2c);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x34;
      *(undefined4 *)(puVar2 + 4) = 0x4207283c;
      uVar4 = *param_1;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[8] = (char)uVar4;
      uVar4 = param_1[2];
      *(undefined4 *)(puVar2 + 0xc) = 0;
      FUN_ram_4039c11e(puVar2 + 0x14,param_1,uVar4 + 0x14);
      uVar3 = FUN_ram_42082b56(puVar2);
      return uVar3;
    }
    uVar3 = 0x101;
  }
  else {
    uVar3 = 0x3004;
  }
  return uVar3;
}

