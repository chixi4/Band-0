
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42084b46(uint param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar3 = 0x3001;
  }
  else if (param_1 < 3) {
    if (param_2 == 0) {
      uVar3 = 0x102;
    }
    else {
      puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0xd0);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0xb;
        puVar2[8] = (char)param_1;
        *(undefined4 *)(puVar2 + 4) = 0x4207219a;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        FUN_ram_4039c11e(puVar2 + 0x14,param_2,0xb8);
        uVar3 = FUN_ram_42082b56(puVar2);
        return uVar3;
      }
      uVar3 = 0x101;
    }
  }
  else {
    uVar3 = 0x3004;
  }
  return uVar3;
}

