
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203ac66(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  
  iVar1 = FUN_ram_4203ac0c();
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                        (&DAT_ram_3fcb6a10,8,1,extraout_a3,0x1000,
                         *(code **)(_DAT_ram_3fcdfecc + 0x97c)), iVar1 != 0)) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

