
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203f5d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  iVar1 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
  iVar3 = *(int *)(gp + -0x2b8);
  (*(code *)&SUB_ram_40011fd0)(0,auStack_18);
  if (iVar1 == 0) {
    *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x94) = 5;
  }
  else {
    (*(code *)&SUB_ram_40011ee0)();
    if (*(byte *)(_DAT_ram_3fcb4f84 + 0x94) < 3) {
      iVar2 = iVar1 + 4;
    }
    else {
      iVar2 = 0x3c078fac;
    }
    iVar1 = FUN_ram_420330b2(iVar1,auStack_18,iVar2,iVar2,iVar3 + 8,*(uint *)(iVar3 + 4) & 0xff,0,0)
    ;
    if (iVar1 != 0) {
      FUN_ram_42048b70();
    }
  }
  *(char *)(_DAT_ram_3fcb4f84 + 0x94) = *(char *)(_DAT_ram_3fcb4f84 + 0x94) + '\x01';
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcb4f84 + 0x18,500,0);
  return;
}

