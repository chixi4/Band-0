
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420348e2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar1 = FUN_ram_42034594(8,0,0,0);
  if (iVar1 != -1) {
    iVar4 = *(int *)(_DAT_ram_3fcb6bc8 + 0x298);
    if (iVar1 < iVar4) {
      puVar3 = (undefined4 *)(_DAT_ram_3fcb6bc8 + (iVar4 + 0x4f) * 8);
      uStack_68 = *puVar3;
      uStack_64 = puVar3[1];
      uVar2 = FUN_ram_420347f8(8,&uStack_68);
      return uVar2;
    }
    if (iVar1 <= iVar4) {
      return 0;
    }
    iVar1 = FUN_ram_42034594(8,0,_DAT_ram_3fcb6bc8 + 0x280);
    if (iVar1 != -1) {
      uVar2 = FUN_ram_42034788(8,iVar1);
      return uVar2;
    }
  }
  return 0x1c;
}

