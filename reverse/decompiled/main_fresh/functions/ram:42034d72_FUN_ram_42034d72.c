
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42034d72(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  int iVar3;
  
  iVar1 = (**(code **)(_DAT_ram_3fcb6a44 + 0x4c))(_DAT_ram_3fcb6bd4 + 4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42036e5a(_DAT_ram_3fcb6bd4 + 0xc,&LAB_ram_42024cf0,0);
    iVar3 = _DAT_ram_3fcb6bd4 + 4;
    if (iVar1 == 0) {
      uVar2 = (**(code **)(_DAT_ram_3fcb6a44 + 0xa8))();
      (**(code **)(_DAT_ram_3fcb6a44 + 0x54))(iVar3,uVar2);
      (**(code **)(_DAT_ram_3fcb6a44 + 0x24))
                (_DAT_ram_3fcb6bd4 + 8,&DAT_ram_42024cda,0,extraout_a3,extraout_a4,
                 *(code **)(_DAT_ram_3fcb6a44 + 0x24));
      (**(code **)(_DAT_ram_3fcb6a44 + 0x14))(_DAT_ram_3fcb6bd4,_DAT_ram_3fcb6bd4 + 8);
      iVar3 = _DAT_ram_3fcb6bd4 + 4;
      uVar2 = (**(code **)(_DAT_ram_3fcb6a44 + 0xa8))();
      (**(code **)(_DAT_ram_3fcb6a44 + 0x54))(iVar3,uVar2);
      (**(code **)(_DAT_ram_3fcb6a44 + 0x50))(_DAT_ram_3fcb6bd4 + 4);
      (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(_DAT_ram_3fcb6bd4 + 8);
    }
    else {
      (**(code **)(_DAT_ram_3fcb6a44 + 0x50))(iVar3);
    }
  }
  return iVar1;
}

