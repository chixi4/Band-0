
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b482(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = _DAT_ram_3fcb66f8;
  puVar5 = (undefined4 *)&DAT_ram_3fcb3598;
  iVar2 = 0;
  while( true ) {
    if (iVar1 == iVar2) {
      return;
    }
    uVar3 = *puVar5;
    puVar5 = puVar5 + 2;
    iVar4 = FUN_ram_4039a06c(uVar3,param_1);
    if (iVar4 == 0) break;
    iVar2 = iVar2 + 1;
  }
  *(uint *)(&DAT_ram_3fcb359c + iVar2 * 8) =
       *(uint *)(&DAT_ram_3fcb359c + iVar2 * 8) & 0xfffffff8 | param_2 & 7;
  return;
}

