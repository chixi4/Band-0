
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42038088(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xbc0))(2);
  if ((iVar1 != 0) &&
     (puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfecc + 0x30))(2), puVar2 != (undefined1 *)0x0
     )) {
    *puVar2 = 0xff;
    puVar2[1] = 10;
    puVar2[3] = param_2;
    puVar2[2] = 0xc1;
    puVar2[4] = *(undefined1 *)(param_1 + 8);
    puVar2[5] = *(undefined1 *)(param_1 + 9);
    FUN_ram_4039c11e(puVar2 + 6,param_1 + 0x2f,5);
                    /* WARNING: Could not recover jumptable at 0x4203810a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x758))(puVar2);
    return uVar3;
  }
  return 0xffffffff;
}

