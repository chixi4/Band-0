
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039656c(void)

{
  int iVar1;
  int in_a5;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(in_a5 + 0x5d8) = 0;
  piVar2 = *(int **)(_DAT_ram_3fcb65fc + 0x30);
  if ((((*piVar2 != -0x5a5a5a5b) || (piVar2[1] != -0x5a5a5a5b)) || (piVar2[2] != -0x5a5a5a5b)) ||
     (piVar2[3] != -0x5a5a5a5b)) {
    FUN_ram_40394e64(_DAT_ram_3fcb65fc,_DAT_ram_3fcb65fc + 0x34);
  }
  iVar1 = (*(code *)&SUB_ram_400108e0)(_DAT_ram_3fcb65e4);
  iVar3 = (0x1f - iVar1) * 0x14;
  *(undefined4 *)(iVar3 + 0x3fcb17d0) = *(undefined4 *)(*(int *)(iVar3 + 0x3fcb17d0) + 4);
  if (*(int *)(iVar3 + 0x3fcb17d0) == iVar3 + 0x3fcb17d4) {
    *(undefined4 *)(iVar3 + 0x3fcb17d0) = *(undefined4 *)(*(int *)(iVar3 + 0x3fcb17d0) + 4);
  }
  _DAT_ram_3fcb65fc = *(undefined4 *)(*(int *)((0x1f - iVar1) * 0x14 + 0x3fcb17d0) + 0xc);
  return;
}

