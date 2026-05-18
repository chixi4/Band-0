
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203a8b6(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 1) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x19c))();
    puVar2 = _DAT_ram_3fcb6a20;
    if (iVar3 == 0) {
      bVar1 = *param_1;
      if (bVar1 != 0xff) {
        if (1 < bVar1) {
          (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x77d,&DAT_ram_3c0f58f4,bVar1,0);
        }
        uVar4 = FUN_ram_4203a84a(param_1,1,param_3,param_4);
        return uVar4;
      }
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      *(undefined1 *)(iVar3 + 99) = *puVar2;
      uVar4 = 0;
    }
    else {
      uVar4 = 0xc;
    }
  }
  else {
    uVar4 = 0x12;
  }
  return uVar4;
}

