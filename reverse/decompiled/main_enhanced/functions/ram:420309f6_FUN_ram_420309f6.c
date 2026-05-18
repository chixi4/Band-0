
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420309f6(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x112;
  iVar2 = _DAT_ram_3fcb6bb4;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar1 = _DAT_ram_3fcb6bb4;
    iVar2 = param_1 + 0x112;
  }
  iVar1 = FUN_ram_4202b4f0(iVar1,iVar2,param_1 + 0x3e,param_1 + 0x4e,param_2 + 3);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 1) = 8;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  }
  return;
}

