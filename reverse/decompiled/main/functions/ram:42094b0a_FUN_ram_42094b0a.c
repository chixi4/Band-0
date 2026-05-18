
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42094b0a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  _DAT_ram_3fcdfd3c = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x88);
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x88);
  iVar1 = _DAT_ram_3fcdfd3c;
  _DAT_ram_3fcdfd40 = iVar2;
  if ((_DAT_ram_3fcdfd3c == 0) || (iVar2 == 0)) {
    FUN_ram_4207a038(6,0x200,1,&DAT_ram_3c0ff768);
    uVar3 = 0x101;
  }
  else {
    iVar4 = gp + 0x744;
    *(int *)(_DAT_ram_3fcdfd3c + 0x60) = iVar4;
    *(int *)(iVar1 + 0x70) = gp + 0x720;
    *(int *)(iVar1 + 100) = iVar4;
    *(int *)(iVar1 + 0x68) = iVar4;
    *(undefined4 *)(iVar1 + 0x6c) = 0x3fcb7d08;
    *(undefined1 *)(iVar1 + 0xb) = 0x80;
    *(undefined1 *)(iVar1 + 0x26) = 0;
    *(undefined1 *)(iVar1 + 0x83) = 0;
    *(undefined1 *)(iVar1 + 0x81) = 0;
    *(int *)(iVar2 + 0x60) = iVar4;
    *(int *)(iVar2 + 0x70) = gp + 0x720;
    *(int *)(iVar2 + 100) = iVar4;
    *(int *)(iVar2 + 0x68) = iVar4;
    *(undefined4 *)(iVar2 + 0x6c) = 0x3fcb7d08;
    *(undefined1 *)(iVar2 + 0xb) = 0x80;
    *(undefined1 *)(iVar2 + 0x26) = 0;
    *(undefined1 *)(iVar2 + 0x83) = 0;
    *(undefined1 *)(iVar2 + 0x81) = 1;
    uVar3 = 0;
  }
  return uVar3;
}

