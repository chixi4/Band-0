
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42094bb4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = (int)(uint)DAT_ram_3fcc4198 >> 4;
    iVar1 = _DAT_ram_3fcdfd3c;
  }
  else {
    if (param_1 != 1) {
      FUN_ram_4207a038(6,0x200,1,&DAT_ram_3c0ff780);
      return 0x102;
    }
    uVar2 = (int)(uint)DAT_ram_3fcc4198 >> 5;
    iVar1 = _DAT_ram_3fcdfd40;
  }
  if (param_2 == 6) {
    *(undefined4 *)(iVar1 + 0x60) = 0x3fcb7ca8;
    *(undefined4 *)(iVar1 + 0x70) = 0x3fcb7c9c;
    *(undefined4 *)(iVar1 + 100) = 0x3fcb7c9c;
    *(undefined4 *)(iVar1 + 0x68) = 0x3fcb7ca8;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar3 = gp + 0x744;
    }
    else {
      iVar3 = 0x3fcb7d08;
    }
    *(int *)(iVar1 + 0x60) = iVar3;
    *(int *)(iVar1 + 0x70) = iVar3;
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x68) = iVar3;
  }
  return 0;
}

